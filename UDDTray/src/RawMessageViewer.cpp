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

#include "RawMessageViewer.h"

#include <QSortFilterProxyModel>

#include "AlertsDepositary.h"
#include "AuditMessage.h"

#include <QtDebug>


RawMessageViewer::RawMessageViewer(QWidget* parent): RawMessagesTextEdit(parent) {
}

RawMessageViewer::~RawMessageViewer() {
}

void RawMessageViewer::messagesSelectedST(QModelIndexList index_list){
  QString text;
  QListIterator<QModelIndex> iter(index_list);
  QModelIndex model_index;
  while (iter.hasNext()){
    model_index = iter.next();
    text += model_index.data(Qt::WhatsThisRole).toString();
    text += "\n";
  }
  setPlainText(text);
}

void RawMessageViewer::appendMessageST(){
  emit(messageNeedAppending(toPlainText()));
}

bool RawMessageViewer::copyEnabled(){
  return true;
}

bool RawMessageViewer::selectionReadActionsEnabled(){
  return true;
}
