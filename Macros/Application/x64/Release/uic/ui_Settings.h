/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QLabel *settingsLabel;
    QLabel *currentID;
    QLabel *openOnStartupLabel;
    QCheckBox *openOnStartupBox;
    QLabel *darkModeLabel;
    QCheckBox *darkModeBox;
    QLabel *versionLabel;
    QLabel *minimizeToTrayLabel;
    QCheckBox *minimizeToTrayBox;
    QLabel *minimizeOnStartLabel;
    QCheckBox *minimizeOnStartBox;
    QCheckBox *debugModeBox;
    QPushButton *registerDeviceButton;
    QCheckBox *typeNonMacroKeys;
    QPushButton *resetDeviceIDButton;
    QLabel *currentKeyToAppendLabel;
    QPushButton *changeAppendedKeyButton;
    QPushButton *clearAppendedKeyButton;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(400, 200);
        QPalette palette;
        QBrush brush(QColor(0, 120, 215, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        Settings->setPalette(palette);
        Settings->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MacroApp/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setWindowIcon(icon);
        settingsLabel = new QLabel(Settings);
        settingsLabel->setObjectName(QString::fromUtf8("settingsLabel"));
        settingsLabel->setGeometry(QRect(151, 0, 111, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        settingsLabel->setFont(font);
        currentID = new QLabel(Settings);
        currentID->setObjectName(QString::fromUtf8("currentID"));
        currentID->setGeometry(QRect(10, 50, 221, 20));
        QFont font1;
        font1.setPointSize(11);
        currentID->setFont(font1);
        openOnStartupLabel = new QLabel(Settings);
        openOnStartupLabel->setObjectName(QString::fromUtf8("openOnStartupLabel"));
        openOnStartupLabel->setGeometry(QRect(10, 75, 131, 20));
        openOnStartupLabel->setFont(font1);
        openOnStartupBox = new QCheckBox(Settings);
        openOnStartupBox->setObjectName(QString::fromUtf8("openOnStartupBox"));
        openOnStartupBox->setGeometry(QRect(140, 75, 31, 21));
        darkModeLabel = new QLabel(Settings);
        darkModeLabel->setObjectName(QString::fromUtf8("darkModeLabel"));
        darkModeLabel->setGeometry(QRect(10, 150, 131, 20));
        darkModeLabel->setFont(font1);
        darkModeBox = new QCheckBox(Settings);
        darkModeBox->setObjectName(QString::fromUtf8("darkModeBox"));
        darkModeBox->setGeometry(QRect(140, 150, 21, 21));
        versionLabel = new QLabel(Settings);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(10, 175, 381, 16));
        minimizeToTrayLabel = new QLabel(Settings);
        minimizeToTrayLabel->setObjectName(QString::fromUtf8("minimizeToTrayLabel"));
        minimizeToTrayLabel->setGeometry(QRect(10, 100, 131, 20));
        minimizeToTrayLabel->setFont(font1);
        minimizeToTrayBox = new QCheckBox(Settings);
        minimizeToTrayBox->setObjectName(QString::fromUtf8("minimizeToTrayBox"));
        minimizeToTrayBox->setGeometry(QRect(140, 98, 31, 21));
        minimizeOnStartLabel = new QLabel(Settings);
        minimizeOnStartLabel->setObjectName(QString::fromUtf8("minimizeOnStartLabel"));
        minimizeOnStartLabel->setGeometry(QRect(10, 125, 141, 20));
        minimizeOnStartLabel->setFont(font1);
        minimizeOnStartBox = new QCheckBox(Settings);
        minimizeOnStartBox->setObjectName(QString::fromUtf8("minimizeOnStartBox"));
        minimizeOnStartBox->setGeometry(QRect(140, 125, 31, 20));
        debugModeBox = new QCheckBox(Settings);
        debugModeBox->setObjectName(QString::fromUtf8("debugModeBox"));
        debugModeBox->setGeometry(QRect(140, 174, 111, 21));
        QFont font2;
        font2.setPointSize(9);
        debugModeBox->setFont(font2);
        registerDeviceButton = new QPushButton(Settings);
        registerDeviceButton->setObjectName(QString::fromUtf8("registerDeviceButton"));
        registerDeviceButton->setGeometry(QRect(170, 46, 101, 25));
        typeNonMacroKeys = new QCheckBox(Settings);
        typeNonMacroKeys->setObjectName(QString::fromUtf8("typeNonMacroKeys"));
        typeNonMacroKeys->setGeometry(QRect(170, 75, 151, 21));
        resetDeviceIDButton = new QPushButton(Settings);
        resetDeviceIDButton->setObjectName(QString::fromUtf8("resetDeviceIDButton"));
        resetDeviceIDButton->setGeometry(QRect(280, 46, 111, 24));
        currentKeyToAppendLabel = new QLabel(Settings);
        currentKeyToAppendLabel->setObjectName(QString::fromUtf8("currentKeyToAppendLabel"));
        currentKeyToAppendLabel->setGeometry(QRect(170, 125, 231, 21));
        changeAppendedKeyButton = new QPushButton(Settings);
        changeAppendedKeyButton->setObjectName(QString::fromUtf8("changeAppendedKeyButton"));
        changeAppendedKeyButton->setGeometry(QRect(170, 150, 101, 24));
        clearAppendedKeyButton = new QPushButton(Settings);
        clearAppendedKeyButton->setObjectName(QString::fromUtf8("clearAppendedKeyButton"));
        clearAppendedKeyButton->setGeometry(QRect(280, 150, 111, 24));

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Settings", nullptr));
        settingsLabel->setText(QCoreApplication::translate("Settings", "Settings", nullptr));
        currentID->setText(QCoreApplication::translate("Settings", "Current Device ID: -1", nullptr));
        openOnStartupLabel->setText(QCoreApplication::translate("Settings", "Open On Startup:", nullptr));
        openOnStartupBox->setText(QString());
        darkModeLabel->setText(QCoreApplication::translate("Settings", "Dark Mode: ", nullptr));
        darkModeBox->setText(QString());
        versionLabel->setText(QCoreApplication::translate("Settings", "Version: Alpha1", nullptr));
        minimizeToTrayLabel->setText(QCoreApplication::translate("Settings", "Minimize To Tray:", nullptr));
        minimizeToTrayBox->setText(QString());
        minimizeOnStartLabel->setText(QCoreApplication::translate("Settings", "Minimize On Start:", nullptr));
        minimizeOnStartBox->setText(QString());
        debugModeBox->setText(QCoreApplication::translate("Settings", "Debug Mode", nullptr));
        registerDeviceButton->setText(QCoreApplication::translate("Settings", "Register Device", nullptr));
        typeNonMacroKeys->setText(QCoreApplication::translate("Settings", "Type Non Macro Keys", nullptr));
        resetDeviceIDButton->setText(QCoreApplication::translate("Settings", "Reset Device ID", nullptr));
        currentKeyToAppendLabel->setText(QCoreApplication::translate("Settings", "Current Key to Append: NONE", nullptr));
        changeAppendedKeyButton->setText(QCoreApplication::translate("Settings", "Change Key", nullptr));
        clearAppendedKeyButton->setText(QCoreApplication::translate("Settings", "Clear Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
