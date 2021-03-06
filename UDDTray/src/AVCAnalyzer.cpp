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

#include "AVCAnalyzer.h"

#include <QtDebug>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <locale.h>
#include <errno.h>

#include <libaudit.h>
#include <auparse.h>

#include "AVCAnalyzerState.h"
#include "AlertsDepositary.h"
#include "AuditMessage.h"
#include "AVCVisitor.h"


AVCAnalyzer::AVCAnalyzer() {
  _state = new AVCAnalyzerState();
  _message = new AuditMessage();
  _visitor = 0;
}

AVCAnalyzer::~AVCAnalyzer() {
  delete _state;
  if (_message)
    delete _message;
}

void AVCAnalyzer::clearState(){
  if(_state){
    delete _state;
    _state = 0;
  }
}

void AVCAnalyzer::setVisitor(AVCVisitor* visitor){
  _visitor = visitor;
}


void AVCAnalyzer::processMessage(QString message){
  if (!_visitor)
    return;
  if (message.isEmpty())
    return;
  _state->clear();
  if (!message.startsWith("type="))
    message = message.mid(message.indexOf(" ") + 1);
  _state->setProcessedLog(message);
  _state->auparseState = auparse_init(AUSOURCE_BUFFER, _state->processedLogData());
   if (!_state->auparseState) {
    _state->setError(QString("Error - %1\n").QString::fromLocal8Bit(strerror(errno)));
    return;
  }
  auparse_reset(_state->auparseState);
  processState();
  auparse_destroy(_state->auparseState);
}

void AVCAnalyzer::processState() {
  do{
    if (auparse_first_record(_state->auparseState) <= 0){
      _state->setError(QString("Error getting first record (%1)\n").arg(QString::fromLocal8Bit(strerror(errno))));
      qDebug()<<"Parsing error on: "<<_state->_processedLog;
      return;
    }
    do{
      if (!_message)
        _message = new AuditMessage();
      else
        _message->clear();
      _message->typeId = auparse_get_type(_state->auparseState);
      _message->type = QString::fromLocal8Bit(audit_msg_type_to_name(_message->typeId));
      const au_event_t *e = auparse_get_timestamp(_state->auparseState);
      if (e == NULL){
        _state->setError("Error getting timestamp - aborting\n");
        qDebug()<<"Parsing error on: "<<_state->_processedLog;
        return;
      }
      AuditMessageTimeStamp* time_stamp = _message->timeStamp();
      time_stamp->hostName = e->host;
      time_stamp->second = e->sec;
      time_stamp->milliSecond = e->milli;
      time_stamp->serialNumber = e->serial;
      auparse_first_field(_state->auparseState);
      do{
        QString field_name = QString::fromLocal8Bit(auparse_get_field_name(_state->auparseState));
        _message->fields[field_name] = new AuditMessageField();
        _message->fields[field_name]->value = QString::fromLocal8Bit(auparse_get_field_str(_state->auparseState));
        _message->fields[field_name]->interpretedValue = QString::fromLocal8Bit(auparse_interpret_field(_state->auparseState));
      }while (auparse_next_field(_state->auparseState) > 0);
      _message->setMessageFromAuparse(auparse_get_record_text(_state->auparseState));
      _visitor->process(_message);
    }while (auparse_next_record(_state->auparseState) > 0);
  }while (auparse_next_event(_state->auparseState) > 0);
}

