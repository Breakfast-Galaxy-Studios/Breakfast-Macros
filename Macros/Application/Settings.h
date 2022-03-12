#pragma once

#include <QWidget>
#include "ui_Settings.h"


class SettingsUI : public QWidget
{
	Q_OBJECT

public:
	SettingsUI(QWidget *parent = Q_NULLPTR);
	~SettingsUI();
	void updateGUI();
	void reigsterNewAppendedKey(int key);
private slots:
	void darkModeAction(bool a);
	void debugModeAction(bool a);
	void openToTrayAction(bool a);
	void minimizeToTrayAction(bool a);
	void openOnStartupAction(bool a);
	void registerDevAction();
	void resetDeviceIDAction();
	void typeNonMacroKeysAction(bool a);
	void registerKeyAction();
	void clearAppendedKey();
private:
	Ui::Settings ui;
};
