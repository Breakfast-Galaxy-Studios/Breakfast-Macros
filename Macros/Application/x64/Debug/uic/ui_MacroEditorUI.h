/********************************************************************************
** Form generated from reading UI file 'MacroEditorUI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROEDITORUI_H
#define UI_MACROEDITORUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MacroEditorUI
{
public:
    QLabel *macroNameLabel;
    QLabel *interceptedKeyLabel;
    QLabel *enabledLabel;
    QCheckBox *enabledBox;
    QLabel *actionLabel;
    QListWidget *actionList;
    QPushButton *newActionButton;
    QPushButton *deleteActionButton;
    QPushButton *saveNameButton;
    QLabel *interceptedKeyText;
    QPushButton *chooseKeyButton;
    QLineEdit *macroNameText;

    void setupUi(QWidget *MacroEditorUI)
    {
        if (MacroEditorUI->objectName().isEmpty())
            MacroEditorUI->setObjectName(QString::fromUtf8("MacroEditorUI"));
        MacroEditorUI->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MacroApp/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MacroEditorUI->setWindowIcon(icon);
        macroNameLabel = new QLabel(MacroEditorUI);
        macroNameLabel->setObjectName(QString::fromUtf8("macroNameLabel"));
        macroNameLabel->setGeometry(QRect(10, 10, 90, 16));
        interceptedKeyLabel = new QLabel(MacroEditorUI);
        interceptedKeyLabel->setObjectName(QString::fromUtf8("interceptedKeyLabel"));
        interceptedKeyLabel->setGeometry(QRect(10, 50, 101, 21));
        enabledLabel = new QLabel(MacroEditorUI);
        enabledLabel->setObjectName(QString::fromUtf8("enabledLabel"));
        enabledLabel->setGeometry(QRect(10, 90, 51, 16));
        enabledBox = new QCheckBox(MacroEditorUI);
        enabledBox->setObjectName(QString::fromUtf8("enabledBox"));
        enabledBox->setGeometry(QRect(110, 90, 16, 20));
        actionLabel = new QLabel(MacroEditorUI);
        actionLabel->setObjectName(QString::fromUtf8("actionLabel"));
        actionLabel->setGeometry(QRect(159, 120, 121, 31));
        QFont font;
        font.setPointSize(16);
        actionLabel->setFont(font);
        actionList = new QListWidget(MacroEditorUI);
        actionList->setObjectName(QString::fromUtf8("actionList"));
        actionList->setGeometry(QRect(10, 150, 371, 101));
        newActionButton = new QPushButton(MacroEditorUI);
        newActionButton->setObjectName(QString::fromUtf8("newActionButton"));
        newActionButton->setGeometry(QRect(114, 260, 81, 24));
        deleteActionButton = new QPushButton(MacroEditorUI);
        deleteActionButton->setObjectName(QString::fromUtf8("deleteActionButton"));
        deleteActionButton->setGeometry(QRect(200, 260, 81, 24));
        saveNameButton = new QPushButton(MacroEditorUI);
        saveNameButton->setObjectName(QString::fromUtf8("saveNameButton"));
        saveNameButton->setGeometry(QRect(260, 10, 75, 24));
        interceptedKeyText = new QLabel(MacroEditorUI);
        interceptedKeyText->setObjectName(QString::fromUtf8("interceptedKeyText"));
        interceptedKeyText->setGeometry(QRect(110, 50, 111, 21));
        chooseKeyButton = new QPushButton(MacroEditorUI);
        chooseKeyButton->setObjectName(QString::fromUtf8("chooseKeyButton"));
        chooseKeyButton->setGeometry(QRect(260, 50, 75, 24));
        macroNameText = new QLineEdit(MacroEditorUI);
        macroNameText->setObjectName(QString::fromUtf8("macroNameText"));
        macroNameText->setGeometry(QRect(110, 10, 131, 22));

        retranslateUi(MacroEditorUI);

        QMetaObject::connectSlotsByName(MacroEditorUI);
    } // setupUi

    void retranslateUi(QWidget *MacroEditorUI)
    {
        MacroEditorUI->setWindowTitle(QCoreApplication::translate("MacroEditorUI", "Macro Editor", nullptr));
        macroNameLabel->setText(QCoreApplication::translate("MacroEditorUI", "Macro Name:", nullptr));
        interceptedKeyLabel->setText(QCoreApplication::translate("MacroEditorUI", "Intercepted Key:", nullptr));
        enabledLabel->setText(QCoreApplication::translate("MacroEditorUI", "Enabled:", nullptr));
        enabledBox->setText(QString());
        actionLabel->setText(QCoreApplication::translate("MacroEditorUI", "Actions", nullptr));
        newActionButton->setText(QCoreApplication::translate("MacroEditorUI", "New Action", nullptr));
        deleteActionButton->setText(QCoreApplication::translate("MacroEditorUI", "Delete Action", nullptr));
        saveNameButton->setText(QCoreApplication::translate("MacroEditorUI", "Save Name", nullptr));
        interceptedKeyText->setText(QCoreApplication::translate("MacroEditorUI", "L", nullptr));
        chooseKeyButton->setText(QCoreApplication::translate("MacroEditorUI", "Choose Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MacroEditorUI: public Ui_MacroEditorUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACROEDITORUI_H
