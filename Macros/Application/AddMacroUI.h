#pragma once

#include <QWidget>
#include "ui_AddMacroUI.h"

class AddMacroUI : public QWidget
{
	Q_OBJECT

public:
	AddMacroUI(QWidget *parent = Q_NULLPTR);
	~AddMacroUI();
	void reset(); 
	void setType(int type);
private slots:
	void yesButton();
	void noButton();
private:
	Ui::AddMacroUI ui;
	int type;
};
