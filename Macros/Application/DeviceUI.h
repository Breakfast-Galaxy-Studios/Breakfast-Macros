#pragma once

#include <QWidget>
#include "ui_DeviceUI.h"

class DeviceUI : public QWidget
{
	Q_OBJECT

public:
	DeviceUI(QWidget *parent = Q_NULLPTR);
	~DeviceUI();
	void closeEvent(QCloseEvent* event);
private:
	Ui::DeviceUI ui;
};
