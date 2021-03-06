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
#ifndef MAINTAB_H_
#define MAINTAB_H_

#include <QTabWidget>
#include <QAction>

class QToolButton;
class PolicyEditor;
class FindReplaceDialog;

class MainTab: public QTabWidget {
  Q_OBJECT
public:
  MainTab(QWidget* parent);
  virtual ~MainTab();
  void init();
public slots:
  void newFileST();
  void openFileST();
  void closeFileST();
  void saveFileST();
  void saveFileAsST();
  void saveAllFilesST();
  void editCopyST();
  void editPasteST();
  void editCutST();
  void editDeleteST();
  void editSelectAllST();
  void editUndoST();
  void editRedoST();
  void tabChangedST(int index);
  void showFindDialogST();
  void editClearSelectionST();
  void createPolicyST();
  void saveModifiedFilesST();
  void editorStateChangedST(PolicyEditor* editor);
  void editorCaptionChangedST(PolicyEditor* editor);
  void showAboutDialogST();
private:
  void openEditor(QString file_name);
  int firstEditorIndex();
  void loadEditors();
  void saveEditors();
  void addEditor(PolicyEditor* editor);
  PolicyEditor* appendNewEditor();
  PolicyEditor* currentEditor();
  bool isCurrentEditorSpecial();
  bool isEditable();
  bool canCopy();
  void initSaveActions();
  void initModifyActions();
  void initModifySelectionActions();
  void initSelectionReadActions();
  void setActionListEnabled(QList<QAction*>& actions_list, bool is_enabled);
  void connectEditor(PolicyEditor* editor);
private:
  QList<QAction*> saveActions;
  QList<QAction*> modifyActions;
  QList<QAction*> modifySelectionActions;
  QList<QAction*> selectionReadActions;
  PolicyEditor* oldEditor;
  FindReplaceDialog* findReplaceDialog;
};

#endif /* MAINTAB_H_ */
