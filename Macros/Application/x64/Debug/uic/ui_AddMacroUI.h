/********************************************************************************
** Form generated from reading UI file 'AddMacroUI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMACROUI_H
#define UI_ADDMACROUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMacroUI
{
public:
    QPushButton *yesButton;
    QPushButton *noButton;
    QLabel *enterNameLabel;
    QLineEdit *nameInputBox;

    void setupUi(QWidget *AddMacroUI)
    {
        if (AddMacroUI->objectName().isEmpty())
            AddMacroUI->setObjectName(QString::fromUtf8("AddMacroUI"));
        AddMacroUI->resize(250, 100);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MacroApp/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddMacroUI->setWindowIcon(icon);
        yesButton = new QPushButton(AddMacroUI);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        yesButton->setGeometry(QRect(20, 70, 71, 24));
        noButton = new QPushButton(AddMacroUI);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        noButton->setGeometry(QRect(160, 70, 71, 24));
        enterNameLabel = new QLabel(AddMacroUI);
        enterNameLabel->setObjectName(QString::fromUtf8("enterNameLabel"));
        enterNameLabel->setGeometry(QRect(40, 10, 170, 16));
        nameInputBox = new QLineEdit(AddMacroUI);
        nameInputBox->setObjectName(QString::fromUtf8("nameInputBox"));
        nameInputBox->setGeometry(QRect(10, 30, 231, 31));

        retranslateUi(AddMacroUI);

        QMetaObject::connectSlotsByName(AddMacroUI);
    } // setupUi

    void retranslateUi(QWidget *AddMacroUI)
    {
        AddMacroUI->setWindowTitle(QCoreApplication::translate("AddMacroUI", "New Macro", nullptr));
        yesButton->setText(QCoreApplication::translate("AddMacroUI", "yes?", nullptr));
        noButton->setText(QCoreApplication::translate("AddMacroUI", "NOPE", nullptr));
        enterNameLabel->setText(QCoreApplication::translate("AddMacroUI", "    Enter a name for the macro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMacroUI: public Ui_AddMacroUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMACROUI_H
