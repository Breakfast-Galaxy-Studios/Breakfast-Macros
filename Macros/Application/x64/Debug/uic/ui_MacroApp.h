/********************************************************************************
** Form generated from reading UI file 'MacroApp.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROAPP_H
#define UI_MACROAPP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MacroAppClass
{
public:
    QWidget *centralWidget;
    QPushButton *settingsButton;
    QPushButton *newMacroButton;
    QPushButton *deleteMacroButton;
    QLabel *bpart1;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MacroAppClass)
    {
        if (MacroAppClass->objectName().isEmpty())
            MacroAppClass->setObjectName(QString::fromUtf8("MacroAppClass"));
        MacroAppClass->resize(500, 350);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MacroAppClass->sizePolicy().hasHeightForWidth());
        MacroAppClass->setSizePolicy(sizePolicy);
        MacroAppClass->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MacroApp/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MacroAppClass->setWindowIcon(icon);
        MacroAppClass->setAutoFillBackground(true);
        centralWidget = new QWidget(MacroAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        settingsButton = new QPushButton(centralWidget);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setGeometry(QRect(10, 310, 31, 30));
        settingsButton->setFocusPolicy(Qt::ClickFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/MacroApp/iconwhite.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon1);
        newMacroButton = new QPushButton(centralWidget);
        newMacroButton->setObjectName(QString::fromUtf8("newMacroButton"));
        newMacroButton->setGeometry(QRect(140, 310, 101, 30));
        deleteMacroButton = new QPushButton(centralWidget);
        deleteMacroButton->setObjectName(QString::fromUtf8("deleteMacroButton"));
        deleteMacroButton->setGeometry(QRect(250, 310, 101, 30));
        bpart1 = new QLabel(centralWidget);
        bpart1->setObjectName(QString::fromUtf8("bpart1"));
        bpart1->setGeometry(QRect(152, 0, 181, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        bpart1->setFont(font);
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 481, 271));
        QFont font1;
        font1.setPointSize(14);
        listWidget->setFont(font1);
        listWidget->setFrameShape(QFrame::Box);
        MacroAppClass->setCentralWidget(centralWidget);

        retranslateUi(MacroAppClass);

        QMetaObject::connectSlotsByName(MacroAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *MacroAppClass)
    {
        MacroAppClass->setWindowTitle(QCoreApplication::translate("MacroAppClass", "Breakfast Macros", nullptr));
        settingsButton->setText(QString());
        newMacroButton->setText(QCoreApplication::translate("MacroAppClass", "New Macro...", nullptr));
        deleteMacroButton->setText(QCoreApplication::translate("MacroAppClass", "Delete Macro", nullptr));
        bpart1->setText(QCoreApplication::translate("MacroAppClass", "Breakfast Macros", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MacroAppClass", "d", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MacroAppClass: public Ui_MacroAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACROAPP_H
