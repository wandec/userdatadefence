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

#ifndef ALERTSETTINGSBOX_H_
#define ALERTSETTINGSBOX_H_

#include "ui_alertsettingsbox.h"

class AuditMessageNotification;

class AlertSettingsBox: public QGroupBox, public Ui::AlertSettingsBox {
  Q_OBJECT
public:
  AlertSettingsBox(QWidget* parent = 0);
  virtual ~AlertSettingsBox();
public slots:
  void loadMessageST(AuditMessageNotification* notification_message);
  void levelChangedST(int level);
  void captionChangedST(QString caption);
  void imageFileChangedST(QString file_name);
  void alertTextChangedST();
signals:
  void messageSelected(AuditMessageNotification* message);
private:
  AuditMessageNotification* notification;
};

#endif /* ALERTSETTINGSBOX_H_ */
