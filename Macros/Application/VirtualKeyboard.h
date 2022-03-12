#pragma once

#include <QWidget>
#include "ui_VirtualKeyboard.h"

class VirtualKeyboard : public QWidget
{
	Q_OBJECT

public:
	VirtualKeyboard(QWidget *parent = Q_NULLPTR);
	~VirtualKeyboard();

	int getPressedKeyCode();
	void resetGUI();
	void setRegisterer(int registerer);

private slots:
	void parseButton();
private:
	int pressedKeycode;
	int registerer;
	Ui::VirtualKeyboard ui;
	
};
