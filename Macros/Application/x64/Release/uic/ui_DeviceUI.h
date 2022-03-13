/********************************************************************************
** Form generated from reading UI file 'DeviceUI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEUI_H
#define UI_DEVICEUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceUI
{
public:
    QLabel *label;

    void setupUi(QWidget *DeviceUI)
    {
        if (DeviceUI->objectName().isEmpty())
            DeviceUI->setObjectName(QString::fromUtf8("DeviceUI"));
        DeviceUI->resize(200, 116);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MacroApp/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeviceUI->setWindowIcon(icon);
        label = new QLabel(DeviceUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 180, 41));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        retranslateUi(DeviceUI);

        QMetaObject::connectSlotsByName(DeviceUI);
    } // setupUi

    void retranslateUi(QWidget *DeviceUI)
    {
        DeviceUI->setWindowTitle(QString());
        label->setText(QCoreApplication::translate("DeviceUI", "Press any key on the keyboard you want intercepted...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceUI: public Ui_DeviceUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEUI_H
