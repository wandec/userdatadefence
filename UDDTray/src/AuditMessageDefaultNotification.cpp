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

#include "AuditMessageDefaultNotification.h"

#include "AuditMessage.h"


AuditMessageDefaultNotification::AuditMessageDefaultNotification(AuditMessageNotificationSettings* notification_settings): AuditMessageNotification(notification_settings) {
}

AuditMessageDefaultNotification::~AuditMessageDefaultNotification() {
}

bool AuditMessageDefaultNotification::processExtraAttributes(){
  showUnknown = readXMLAttribute("show_unknown_messages", "0").toInt();
  return true;
}

bool AuditMessageDefaultNotification::checkNotification(AuditMessage*){
  return showUnknown;
}

QString AuditMessageDefaultNotification::formatMessage(AuditMessage* message){
  return message->rawMessage();
}

QString AuditMessageDefaultNotification::elementName(){
  return "default_settings";
}

void AuditMessageDefaultNotification::writeExtraAttributes(QXmlStreamWriter* xml_writer){
  int value = 0;
  if (showUnknown)
    value = 1;
  xml_writer->writeAttribute("show_unknown_messages", QString::number(value));
}

bool AuditMessageDefaultNotification::needNotification(){
  return showUnknown;
}
