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

#ifndef AUDITMESSAGE_H_
#define AUDITMESSAGE_H_

#include <QString>
#include <QMap>
#include <QPixmap>
#include <QIcon>

#include "AuditMessageTimeStamp.h"
#include "AuditMessageField.h"

class AuditMessageNotification;

class AuditMessage {
public:
  AuditMessage();
  virtual ~AuditMessage();
  void setMessageFromAuparse(const char* message);
  QString rawMessage();
  void setRawMessage(QString text);
  AuditMessageTimeStamp* timeStamp();
  void clear();
  QIcon icon();
  QImage image();
  QString formattedMessage();
  QString caption();
  AuditMessageNotification* messageNotification();
  bool needNotification();
public:
  QString type;
  int typeId;
  QMap<QString, AuditMessageField*> fields;
private:
  AuditMessageTimeStamp* _timeStamp;
  QString _rawMessage;
  QString _formattedMessage;
  AuditMessageNotification* _notificationMessage;
};

#endif /* AUDITMESSAGE_H_ */
