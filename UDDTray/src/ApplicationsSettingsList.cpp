/***************************************************************************
 *   Copyright (C) 2011 by Hramchenko                                      *
 *   v.hramchenko@gmail.com                                                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 ***************************************************************************/

#include "ApplicationsSettingsList.h"

#include "ApplicationsSettingsListItem.h"
#include "ApplicationsSettingsParameter.h"

ApplicationsSettingsList::ApplicationsSettingsList(QWidget* parent): SettingsList(parent) {
  connect(this, SIGNAL(itemActivated(QListWidgetItem*)), this, SLOT(itemActivatedST(QListWidgetItem*)));
}

ApplicationsSettingsList::~ApplicationsSettingsList() {
}

void ApplicationsSettingsList::setParentST(ApplicationsSettingsParameter* parent){
  clear();
  _parentItem = parent;
  if (!parent){
    clear();
    emit(parameterSelected(0));
    return;
  }
  QListIterator<ApplicationsSettingsParameter*> iter(*parent->subElements());
  ApplicationsSettingsParameter* parameter;
  while (iter.hasNext()){
    parameter = iter.next();
    appendNewElement(parameter);
  }
  selectFirst();
}

void ApplicationsSettingsList::appendNewElement(ApplicationsSettingsParameter* parameter){
  ApplicationsSettingsListItem* item = new ApplicationsSettingsListItem(this);
  item->setParameter(parameter);
  addItem(item);
}

void ApplicationsSettingsList::appendNewItemST(){
  ApplicationsSettingsParameter* parameter;
  if (!_parentItem)
    return;
  parameter = _parentItem->appendNewItem();
  parameter->setName("<new>");
  appendNewElement(parameter);
  emit(parameterAppended(parameter));
}

void ApplicationsSettingsList::deleteCurrentItemST(){
  ApplicationsSettingsListItem* list_item = (ApplicationsSettingsListItem*)currentItem();
  if (!list_item)
    return;
  QList<ApplicationsSettingsParameter*>* list = _parentItem->subElements();
  int index = list->indexOf(list_item->parameter());
  list->takeAt(index);
  emit(parameterDeleted(list_item->parameter()));
  delete list_item->parameter();
  qDeleteAll(selectedItems());
}

void ApplicationsSettingsList::parameterDeletedST(ApplicationsSettingsParameter* parameter){
  if (parameter == _parentItem){
    clear();
    emit(parameterSelected(0));
    return;
  }
  QListWidgetItem* list_item = searchParameterWidget(parameter);
  if (list_item){
    qDeleteAll(QList<QListWidgetItem*>()<<list_item);
    selectFirst();
  }
}

QListWidgetItem* ApplicationsSettingsList::searchParameterWidget(ApplicationsSettingsParameter* parameter){
  if (!parameter)
    return 0;
  int index;
  ApplicationsSettingsListItem* list_item;
  for (index = 0; index < count(); index++){
    list_item = (ApplicationsSettingsListItem*)item(index);
    if (list_item->parameter() == parameter)
      return list_item;
  }
  return 0;
}

void ApplicationsSettingsList::parameterNameChangedST(ApplicationsSettingsParameter* parameter){
  QListWidgetItem* list_item = searchParameterWidget(parameter);
  if (list_item)
    list_item->setText(parameter->name());
}

void ApplicationsSettingsList::itemActivatedST(QListWidgetItem* item){
  ApplicationsSettingsListItem* list_item = (ApplicationsSettingsListItem*)item;
  ApplicationsSettingsParameter* parameter;
  if (item)
    parameter = list_item->parameter();
  else
    parameter = 0;
  emit(parameterSelected(parameter));
}

void ApplicationsSettingsList::parameterAppendedST(ApplicationsSettingsParameter* parameter){
  appendNewElement(parameter);
}

ApplicationsSettingsParameter* ApplicationsSettingsList::currentParameter(){
  ApplicationsSettingsListItem* list_item = (ApplicationsSettingsListItem*)currentItem();
  if (!list_item)
    return 0;
  return list_item->parameter();
}
