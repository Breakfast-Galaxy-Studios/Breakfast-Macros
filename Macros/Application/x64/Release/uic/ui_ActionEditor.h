/********************************************************************************
** Form generated from reading UI file 'ActionEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONEDITOR_H
#define UI_ACTIONEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActionEditor
{
public:
    QLabel *actionIDLabel;
    QLabel *actionTypeLabel;
    QComboBox *actionTypeBox;
    QLabel *pathToProgramLabel;
    QLabel *areKeysHeldLabel;
    QCheckBox *areKeysHeldBox;
    QListWidget *keysToPressBox;
    QLabel *keysToPressLabel;
    QPushButton *addKeyButton;
    QPushButton *deleteKeyButton;
    QLineEdit *actionNameText;
    QLineEdit *programPathBox;
    QPushButton *saveButton;
    QPushButton *chooseFileButton;

    void setupUi(QWidget *ActionEditor)
    {
        if (ActionEditor->objectName().isEmpty())
            ActionEditor->setObjectName(QString::fromUtf8("ActionEditor"));
        ActionEditor->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MacroApp/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionEditor->setWindowIcon(icon);
        actionIDLabel = new QLabel(ActionEditor);
        actionIDLabel->setObjectName(QString::fromUtf8("actionIDLabel"));
        actionIDLabel->setGeometry(QRect(10, 18, 81, 21));
        actionTypeLabel = new QLabel(ActionEditor);
        actionTypeLabel->setObjectName(QString::fromUtf8("actionTypeLabel"));
        actionTypeLabel->setGeometry(QRect(10, 48, 71, 21));
        actionTypeBox = new QComboBox(ActionEditor);
        actionTypeBox->addItem(QString());
        actionTypeBox->addItem(QString());
        actionTypeBox->addItem(QString());
        actionTypeBox->setObjectName(QString::fromUtf8("actionTypeBox"));
        actionTypeBox->setGeometry(QRect(110, 48, 271, 21));
        pathToProgramLabel = new QLabel(ActionEditor);
        pathToProgramLabel->setObjectName(QString::fromUtf8("pathToProgramLabel"));
        pathToProgramLabel->setGeometry(QRect(10, 78, 101, 21));
        areKeysHeldLabel = new QLabel(ActionEditor);
        areKeysHeldLabel->setObjectName(QString::fromUtf8("areKeysHeldLabel"));
        areKeysHeldLabel->setGeometry(QRect(10, 108, 91, 21));
        areKeysHeldBox = new QCheckBox(ActionEditor);
        areKeysHeldBox->setObjectName(QString::fromUtf8("areKeysHeldBox"));
        areKeysHeldBox->setGeometry(QRect(110, 108, 16, 20));
        keysToPressBox = new QListWidget(ActionEditor);
        keysToPressBox->setObjectName(QString::fromUtf8("keysToPressBox"));
        keysToPressBox->setGeometry(QRect(10, 160, 291, 101));
        keysToPressBox->setProperty("isWrapping", QVariant(false));
        keysToPressBox->setWordWrap(true);
        keysToPressLabel = new QLabel(ActionEditor);
        keysToPressLabel->setObjectName(QString::fromUtf8("keysToPressLabel"));
        keysToPressLabel->setGeometry(QRect(115, 137, 81, 21));
        addKeyButton = new QPushButton(ActionEditor);
        addKeyButton->setObjectName(QString::fromUtf8("addKeyButton"));
        addKeyButton->setGeometry(QRect(310, 180, 75, 24));
        deleteKeyButton = new QPushButton(ActionEditor);
        deleteKeyButton->setObjectName(QString::fromUtf8("deleteKeyButton"));
        deleteKeyButton->setGeometry(QRect(310, 210, 75, 24));
        actionNameText = new QLineEdit(ActionEditor);
        actionNameText->setObjectName(QString::fromUtf8("actionNameText"));
        actionNameText->setGeometry(QRect(110, 20, 271, 22));
        programPathBox = new QLineEdit(ActionEditor);
        programPathBox->setObjectName(QString::fromUtf8("programPathBox"));
        programPathBox->setGeometry(QRect(110, 78, 191, 21));
        saveButton = new QPushButton(ActionEditor);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(165, 270, 70, 24));
        chooseFileButton = new QPushButton(ActionEditor);
        chooseFileButton->setObjectName(QString::fromUtf8("chooseFileButton"));
        chooseFileButton->setGeometry(QRect(310, 78, 71, 24));

        retranslateUi(ActionEditor);

        QMetaObject::connectSlotsByName(ActionEditor);
    } // setupUi

    void retranslateUi(QWidget *ActionEditor)
    {
        ActionEditor->setWindowTitle(QCoreApplication::translate("ActionEditor", "Action Editor", nullptr));
        actionIDLabel->setText(QCoreApplication::translate("ActionEditor", "Action Name:", nullptr));
        actionTypeLabel->setText(QCoreApplication::translate("ActionEditor", "Action Type:", nullptr));
        actionTypeBox->setItemText(0, QCoreApplication::translate("ActionEditor", "Fake Keypresses", nullptr));
        actionTypeBox->setItemText(1, QCoreApplication::translate("ActionEditor", "Open Program", nullptr));
        actionTypeBox->setItemText(2, QCoreApplication::translate("ActionEditor", "No Action", nullptr));

        pathToProgramLabel->setText(QCoreApplication::translate("ActionEditor", "Path To Program:", nullptr));
        areKeysHeldLabel->setText(QCoreApplication::translate("ActionEditor", "Are Keys Held:", nullptr));
        areKeysHeldBox->setText(QString());
        keysToPressLabel->setText(QCoreApplication::translate("ActionEditor", "Keys to Press", nullptr));
        addKeyButton->setText(QCoreApplication::translate("ActionEditor", "Add Key", nullptr));
        deleteKeyButton->setText(QCoreApplication::translate("ActionEditor", "Delete Key", nullptr));
        saveButton->setText(QCoreApplication::translate("ActionEditor", "SAVE", nullptr));
        chooseFileButton->setText(QCoreApplication::translate("ActionEditor", "Choose File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActionEditor: public Ui_ActionEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONEDITOR_H
