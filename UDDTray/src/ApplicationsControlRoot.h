/***************************************************************************
 *   Copyright (C) 2011 by Hramchenko                                      *
 *   v.hramchenko@gmail.com                                                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 ***************************************************************************/

#ifndef APPLICATIONSCONTROLROOT_H_
#define APPLICATIONSCONTROLROOT_H_

#include <QList>

#include "XMLFileElement.h"
#include "ApplicationsSettingsParameter.h"

class ApplicationsGroup;
class QMenu;

class ApplicationsControlRoot: public ApplicationsSettingsParameter{
public:
  ApplicationsControlRoot();
  virtual ~ApplicationsControlRoot();
  static ApplicationsControlRoot* currentApplications();
  static ApplicationsControlRoot* configurationApplications();
  bool processAttributes();
  XMLFileElement* newElement(const QString& name, bool& error_flag);
  void appendMenuItems(QMenu* menu);
  QString elementName();
  void writeSubElements(QXmlStreamWriter* xml_writer);
  QString parameterText();
  QList<ApplicationsSettingsParameter*>* subElements();
  ApplicationsSettingsParameter* appendNewItem();
  void setParameterText(QString new_text);
  QString configFile();
  static void applyConfiguration();
  static void clearConfiguration();
private:
  void loadSettings();
public:
  QList<ApplicationsSettingsParameter*> applicationsGroups;
private:
  static ApplicationsControlRoot* _currentApplications;
  static ApplicationsControlRoot* _configurationApplications;
};

#endif /* APPLICATIONSCONTROLROOT_H_ */
