/********************************************************************************
** Form generated from reading UI file 'VirtualKeyboard.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUALKEYBOARD_H
#define UI_VIRTUALKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VirtualKeyboard
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_AZ;
    QPushButton *a_button;
    QLabel *instructionLabel;
    QPushButton *b_button;
    QPushButton *c_button;
    QPushButton *d_button;
    QPushButton *e_button;
    QPushButton *f_button;
    QPushButton *l_button;
    QPushButton *k_button;
    QPushButton *g_button;
    QPushButton *j_button;
    QPushButton *h_button;
    QPushButton *i_button;
    QPushButton *p_button;
    QPushButton *r_button;
    QPushButton *m_button;
    QPushButton *n_button;
    QPushButton *o_button;
    QPushButton *q_button;
    QPushButton *s_button;
    QPushButton *u_button;
    QPushButton *w_button;
    QPushButton *t_button;
    QPushButton *x_button;
    QPushButton *v_button;
    QPushButton *y_button;
    QPushButton *z_button;
    QWidget *tab_Numbers;
    QLabel *instructionLabel_2;
    QPushButton *r0_button;
    QPushButton *r1_button;
    QPushButton *r2_button;
    QPushButton *r3_button;
    QPushButton *r4_button;
    QPushButton *r5_button;
    QPushButton *r7_button;
    QPushButton *r8_button;
    QPushButton *r9_button;
    QPushButton *num0_button;
    QPushButton *num1_button;
    QPushButton *r6_button;
    QPushButton *num3_button;
    QPushButton *num7_button;
    QPushButton *num4_button;
    QPushButton *num5_button;
    QPushButton *num6_button;
    QPushButton *num2_button;
    QPushButton *num8_button;
    QPushButton *num9_button;
    QWidget *tab_Punctuation;
    QLabel *instructionLabel_3;
    QPushButton *r6_button_2;
    QPushButton *r2_button_2;
    QPushButton *r8_button_2;
    QPushButton *r3_button_2;
    QPushButton *r0_button_2;
    QPushButton *num4_button_2;
    QPushButton *r1_button_2;
    QPushButton *r4_button_2;
    QPushButton *num3_button_2;
    QPushButton *num0_button_2;
    QPushButton *r7_button_2;
    QPushButton *num1_button_2;
    QPushButton *num2_button_2;
    QPushButton *r5_button_2;
    QPushButton *r9_button_2;
    QPushButton *num4_button_3;
    QWidget *tab_function;
    QLabel *instructionLabel_4;
    QPushButton *f1_button;
    QPushButton *f2_button;
    QPushButton *f3_button;
    QPushButton *f4_button;
    QPushButton *f5_button;
    QPushButton *f6_button;
    QPushButton *f7_button;
    QPushButton *f8_button;
    QPushButton *f10_button;
    QPushButton *f12_button;
    QPushButton *f9_button;
    QPushButton *f11_button;
    QPushButton *f15_button;
    QPushButton *f13_button;
    QPushButton *f17_button;
    QPushButton *f16_button;
    QPushButton *f14_button;
    QPushButton *f18_button;
    QPushButton *f21_button;
    QPushButton *f23_button;
    QPushButton *f24_button;
    QPushButton *f20_button;
    QPushButton *f22_button;
    QPushButton *f19_button;
    QWidget *tab_other;
    QLabel *instructionLabel_5;
    QPushButton *l_button_2;
    QPushButton *h_button_2;
    QPushButton *d_button_2;
    QPushButton *a_button_2;
    QPushButton *y_button_2;
    QPushButton *n_button_2;
    QPushButton *f_button_2;
    QPushButton *k_button_2;
    QPushButton *g_button_2;
    QPushButton *z_button_2;
    QPushButton *w_button_2;
    QPushButton *r_button_2;
    QPushButton *q_button_2;
    QPushButton *j_button_2;
    QPushButton *i_button_2;
    QPushButton *e_button_2;
    QPushButton *x_button_2;
    QPushButton *t_button_2;
    QPushButton *o_button_2;
    QPushButton *s_button_2;
    QPushButton *u_button_2;
    QPushButton *p_button_2;
    QPushButton *c_button_2;
    QPushButton *m_button_2;
    QPushButton *b_button_2;
    QPushButton *v_button_2;
    QPushButton *z_button_3;
    QPushButton *z_button_4;
    QPushButton *z_button_5;
    QPushButton *z_button_6;
    QWidget *tab_other2;
    QLabel *instructionLabel_6;
    QPushButton *a_button_3;
    QPushButton *c_button_3;
    QPushButton *j_button_3;
    QPushButton *d_button_3;
    QPushButton *e_button_3;
    QPushButton *b_button_3;
    QPushButton *h_button_3;
    QPushButton *k_button_3;
    QPushButton *i_button_3;
    QPushButton *g_button_3;
    QPushButton *f_button_3;

    void setupUi(QWidget *VirtualKeyboard)
    {
        if (VirtualKeyboard->objectName().isEmpty())
            VirtualKeyboard->setObjectName(QString::fromUtf8("VirtualKeyboard"));
        VirtualKeyboard->resize(400, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/MacroApp/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        VirtualKeyboard->setWindowIcon(icon);
        tabWidget = new QTabWidget(VirtualKeyboard);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 401, 401));
        tab_AZ = new QWidget();
        tab_AZ->setObjectName(QString::fromUtf8("tab_AZ"));
        a_button = new QPushButton(tab_AZ);
        a_button->setObjectName(QString::fromUtf8("a_button"));
        a_button->setGeometry(QRect(10, 50, 61, 61));
        QFont font;
        font.setPointSize(25);
        font.setStyleStrategy(QFont::PreferAntialias);
        a_button->setFont(font);
        a_button->setFlat(false);
        instructionLabel = new QLabel(tab_AZ);
        instructionLabel->setObjectName(QString::fromUtf8("instructionLabel"));
        instructionLabel->setGeometry(QRect(60, 0, 281, 41));
        QFont font1;
        font1.setPointSize(16);
        instructionLabel->setFont(font1);
        b_button = new QPushButton(tab_AZ);
        b_button->setObjectName(QString::fromUtf8("b_button"));
        b_button->setGeometry(QRect(72, 50, 61, 61));
        b_button->setFont(font);
        b_button->setFlat(false);
        c_button = new QPushButton(tab_AZ);
        c_button->setObjectName(QString::fromUtf8("c_button"));
        c_button->setGeometry(QRect(134, 50, 61, 61));
        c_button->setFont(font);
        c_button->setFlat(false);
        d_button = new QPushButton(tab_AZ);
        d_button->setObjectName(QString::fromUtf8("d_button"));
        d_button->setGeometry(QRect(196, 50, 61, 61));
        d_button->setFont(font);
        d_button->setFlat(false);
        e_button = new QPushButton(tab_AZ);
        e_button->setObjectName(QString::fromUtf8("e_button"));
        e_button->setGeometry(QRect(258, 50, 61, 61));
        e_button->setFont(font);
        e_button->setFlat(false);
        f_button = new QPushButton(tab_AZ);
        f_button->setObjectName(QString::fromUtf8("f_button"));
        f_button->setGeometry(QRect(320, 50, 61, 61));
        f_button->setFont(font);
        f_button->setFlat(false);
        l_button = new QPushButton(tab_AZ);
        l_button->setObjectName(QString::fromUtf8("l_button"));
        l_button->setGeometry(QRect(320, 112, 61, 61));
        l_button->setFont(font);
        l_button->setFlat(false);
        k_button = new QPushButton(tab_AZ);
        k_button->setObjectName(QString::fromUtf8("k_button"));
        k_button->setGeometry(QRect(258, 112, 61, 61));
        k_button->setFont(font);
        k_button->setFlat(false);
        g_button = new QPushButton(tab_AZ);
        g_button->setObjectName(QString::fromUtf8("g_button"));
        g_button->setGeometry(QRect(10, 112, 61, 61));
        g_button->setFont(font);
        g_button->setFlat(false);
        j_button = new QPushButton(tab_AZ);
        j_button->setObjectName(QString::fromUtf8("j_button"));
        j_button->setGeometry(QRect(196, 112, 61, 61));
        j_button->setFont(font);
        j_button->setFlat(false);
        h_button = new QPushButton(tab_AZ);
        h_button->setObjectName(QString::fromUtf8("h_button"));
        h_button->setGeometry(QRect(72, 112, 61, 61));
        h_button->setFont(font);
        h_button->setFlat(false);
        i_button = new QPushButton(tab_AZ);
        i_button->setObjectName(QString::fromUtf8("i_button"));
        i_button->setGeometry(QRect(134, 112, 61, 61));
        i_button->setFont(font);
        i_button->setFlat(false);
        p_button = new QPushButton(tab_AZ);
        p_button->setObjectName(QString::fromUtf8("p_button"));
        p_button->setGeometry(QRect(196, 174, 61, 61));
        p_button->setFont(font);
        p_button->setFlat(false);
        r_button = new QPushButton(tab_AZ);
        r_button->setObjectName(QString::fromUtf8("r_button"));
        r_button->setGeometry(QRect(320, 174, 61, 61));
        r_button->setFont(font);
        r_button->setFlat(false);
        m_button = new QPushButton(tab_AZ);
        m_button->setObjectName(QString::fromUtf8("m_button"));
        m_button->setGeometry(QRect(10, 174, 61, 61));
        m_button->setFont(font);
        m_button->setFlat(false);
        n_button = new QPushButton(tab_AZ);
        n_button->setObjectName(QString::fromUtf8("n_button"));
        n_button->setGeometry(QRect(72, 174, 61, 61));
        n_button->setFont(font);
        n_button->setFlat(false);
        o_button = new QPushButton(tab_AZ);
        o_button->setObjectName(QString::fromUtf8("o_button"));
        o_button->setGeometry(QRect(134, 174, 61, 61));
        o_button->setFont(font);
        o_button->setFlat(false);
        q_button = new QPushButton(tab_AZ);
        q_button->setObjectName(QString::fromUtf8("q_button"));
        q_button->setGeometry(QRect(258, 174, 61, 61));
        q_button->setFont(font);
        q_button->setFlat(false);
        s_button = new QPushButton(tab_AZ);
        s_button->setObjectName(QString::fromUtf8("s_button"));
        s_button->setGeometry(QRect(10, 236, 61, 61));
        s_button->setFont(font);
        s_button->setFlat(false);
        u_button = new QPushButton(tab_AZ);
        u_button->setObjectName(QString::fromUtf8("u_button"));
        u_button->setGeometry(QRect(134, 236, 61, 61));
        u_button->setFont(font);
        u_button->setFlat(false);
        w_button = new QPushButton(tab_AZ);
        w_button->setObjectName(QString::fromUtf8("w_button"));
        w_button->setGeometry(QRect(258, 236, 61, 61));
        w_button->setFont(font);
        w_button->setFlat(false);
        t_button = new QPushButton(tab_AZ);
        t_button->setObjectName(QString::fromUtf8("t_button"));
        t_button->setGeometry(QRect(72, 236, 61, 61));
        t_button->setFont(font);
        t_button->setFlat(false);
        x_button = new QPushButton(tab_AZ);
        x_button->setObjectName(QString::fromUtf8("x_button"));
        x_button->setGeometry(QRect(320, 236, 61, 61));
        x_button->setFont(font);
        x_button->setFlat(false);
        v_button = new QPushButton(tab_AZ);
        v_button->setObjectName(QString::fromUtf8("v_button"));
        v_button->setGeometry(QRect(196, 236, 61, 61));
        v_button->setFont(font);
        v_button->setFlat(false);
        y_button = new QPushButton(tab_AZ);
        y_button->setObjectName(QString::fromUtf8("y_button"));
        y_button->setGeometry(QRect(10, 298, 61, 61));
        y_button->setFont(font);
        y_button->setFlat(false);
        z_button = new QPushButton(tab_AZ);
        z_button->setObjectName(QString::fromUtf8("z_button"));
        z_button->setGeometry(QRect(72, 298, 61, 61));
        z_button->setFont(font);
        z_button->setFlat(false);
        tabWidget->addTab(tab_AZ, QString());
        tab_Numbers = new QWidget();
        tab_Numbers->setObjectName(QString::fromUtf8("tab_Numbers"));
        instructionLabel_2 = new QLabel(tab_Numbers);
        instructionLabel_2->setObjectName(QString::fromUtf8("instructionLabel_2"));
        instructionLabel_2->setGeometry(QRect(60, 0, 291, 41));
        instructionLabel_2->setFont(font1);
        r0_button = new QPushButton(tab_Numbers);
        r0_button->setObjectName(QString::fromUtf8("r0_button"));
        r0_button->setGeometry(QRect(10, 50, 61, 61));
        r0_button->setFont(font);
        r0_button->setFlat(false);
        r1_button = new QPushButton(tab_Numbers);
        r1_button->setObjectName(QString::fromUtf8("r1_button"));
        r1_button->setGeometry(QRect(72, 50, 61, 61));
        r1_button->setFont(font);
        r1_button->setFlat(false);
        r2_button = new QPushButton(tab_Numbers);
        r2_button->setObjectName(QString::fromUtf8("r2_button"));
        r2_button->setGeometry(QRect(134, 50, 61, 61));
        r2_button->setFont(font);
        r2_button->setFlat(false);
        r3_button = new QPushButton(tab_Numbers);
        r3_button->setObjectName(QString::fromUtf8("r3_button"));
        r3_button->setGeometry(QRect(196, 50, 61, 61));
        r3_button->setFont(font);
        r3_button->setFlat(false);
        r4_button = new QPushButton(tab_Numbers);
        r4_button->setObjectName(QString::fromUtf8("r4_button"));
        r4_button->setGeometry(QRect(258, 50, 61, 61));
        r4_button->setFont(font);
        r4_button->setFlat(false);
        r5_button = new QPushButton(tab_Numbers);
        r5_button->setObjectName(QString::fromUtf8("r5_button"));
        r5_button->setGeometry(QRect(320, 50, 61, 61));
        r5_button->setFont(font);
        r5_button->setFlat(false);
        r7_button = new QPushButton(tab_Numbers);
        r7_button->setObjectName(QString::fromUtf8("r7_button"));
        r7_button->setGeometry(QRect(72, 112, 61, 61));
        r7_button->setFont(font);
        r7_button->setFlat(false);
        r8_button = new QPushButton(tab_Numbers);
        r8_button->setObjectName(QString::fromUtf8("r8_button"));
        r8_button->setGeometry(QRect(134, 112, 61, 61));
        r8_button->setFont(font);
        r8_button->setFlat(false);
        r9_button = new QPushButton(tab_Numbers);
        r9_button->setObjectName(QString::fromUtf8("r9_button"));
        r9_button->setGeometry(QRect(196, 112, 61, 61));
        r9_button->setFont(font);
        r9_button->setFlat(false);
        num0_button = new QPushButton(tab_Numbers);
        num0_button->setObjectName(QString::fromUtf8("num0_button"));
        num0_button->setGeometry(QRect(258, 112, 61, 61));
        QFont font2;
        font2.setPointSize(15);
        font2.setStyleStrategy(QFont::PreferAntialias);
        num0_button->setFont(font2);
        num0_button->setFlat(false);
        num1_button = new QPushButton(tab_Numbers);
        num1_button->setObjectName(QString::fromUtf8("num1_button"));
        num1_button->setGeometry(QRect(320, 112, 61, 61));
        num1_button->setFont(font2);
        num1_button->setFlat(false);
        r6_button = new QPushButton(tab_Numbers);
        r6_button->setObjectName(QString::fromUtf8("r6_button"));
        r6_button->setGeometry(QRect(10, 112, 61, 61));
        r6_button->setFont(font);
        r6_button->setFlat(false);
        num3_button = new QPushButton(tab_Numbers);
        num3_button->setObjectName(QString::fromUtf8("num3_button"));
        num3_button->setGeometry(QRect(72, 174, 61, 61));
        num3_button->setFont(font2);
        num3_button->setFlat(false);
        num7_button = new QPushButton(tab_Numbers);
        num7_button->setObjectName(QString::fromUtf8("num7_button"));
        num7_button->setGeometry(QRect(320, 174, 61, 61));
        num7_button->setFont(font2);
        num7_button->setFlat(false);
        num4_button = new QPushButton(tab_Numbers);
        num4_button->setObjectName(QString::fromUtf8("num4_button"));
        num4_button->setGeometry(QRect(134, 174, 61, 61));
        num4_button->setFont(font2);
        num4_button->setFlat(false);
        num5_button = new QPushButton(tab_Numbers);
        num5_button->setObjectName(QString::fromUtf8("num5_button"));
        num5_button->setGeometry(QRect(196, 174, 61, 61));
        num5_button->setFont(font2);
        num5_button->setFlat(false);
        num6_button = new QPushButton(tab_Numbers);
        num6_button->setObjectName(QString::fromUtf8("num6_button"));
        num6_button->setGeometry(QRect(258, 174, 61, 61));
        num6_button->setFont(font2);
        num6_button->setFlat(false);
        num2_button = new QPushButton(tab_Numbers);
        num2_button->setObjectName(QString::fromUtf8("num2_button"));
        num2_button->setGeometry(QRect(10, 174, 61, 61));
        num2_button->setFont(font2);
        num2_button->setFlat(false);
        num8_button = new QPushButton(tab_Numbers);
        num8_button->setObjectName(QString::fromUtf8("num8_button"));
        num8_button->setGeometry(QRect(10, 236, 61, 61));
        num8_button->setFont(font2);
        num8_button->setFlat(false);
        num9_button = new QPushButton(tab_Numbers);
        num9_button->setObjectName(QString::fromUtf8("num9_button"));
        num9_button->setGeometry(QRect(72, 236, 61, 61));
        num9_button->setFont(font2);
        num9_button->setFlat(false);
        tabWidget->addTab(tab_Numbers, QString());
        tab_Punctuation = new QWidget();
        tab_Punctuation->setObjectName(QString::fromUtf8("tab_Punctuation"));
        instructionLabel_3 = new QLabel(tab_Punctuation);
        instructionLabel_3->setObjectName(QString::fromUtf8("instructionLabel_3"));
        instructionLabel_3->setGeometry(QRect(60, 0, 281, 41));
        instructionLabel_3->setFont(font1);
        r6_button_2 = new QPushButton(tab_Punctuation);
        r6_button_2->setObjectName(QString::fromUtf8("r6_button_2"));
        r6_button_2->setGeometry(QRect(10, 112, 61, 61));
        r6_button_2->setFont(font);
        r6_button_2->setFlat(false);
        r2_button_2 = new QPushButton(tab_Punctuation);
        r2_button_2->setObjectName(QString::fromUtf8("r2_button_2"));
        r2_button_2->setGeometry(QRect(134, 50, 61, 61));
        r2_button_2->setFont(font);
        r2_button_2->setFlat(false);
        r8_button_2 = new QPushButton(tab_Punctuation);
        r8_button_2->setObjectName(QString::fromUtf8("r8_button_2"));
        r8_button_2->setGeometry(QRect(134, 112, 61, 61));
        r8_button_2->setFont(font);
        r8_button_2->setFlat(false);
        r3_button_2 = new QPushButton(tab_Punctuation);
        r3_button_2->setObjectName(QString::fromUtf8("r3_button_2"));
        r3_button_2->setGeometry(QRect(196, 50, 61, 61));
        r3_button_2->setFont(font);
        r3_button_2->setFlat(false);
        r0_button_2 = new QPushButton(tab_Punctuation);
        r0_button_2->setObjectName(QString::fromUtf8("r0_button_2"));
        r0_button_2->setGeometry(QRect(10, 50, 61, 61));
        r0_button_2->setFont(font);
        r0_button_2->setFlat(false);
        num4_button_2 = new QPushButton(tab_Punctuation);
        num4_button_2->setObjectName(QString::fromUtf8("num4_button_2"));
        num4_button_2->setGeometry(QRect(134, 174, 61, 61));
        num4_button_2->setFont(font2);
        num4_button_2->setFlat(false);
        r1_button_2 = new QPushButton(tab_Punctuation);
        r1_button_2->setObjectName(QString::fromUtf8("r1_button_2"));
        r1_button_2->setGeometry(QRect(72, 50, 61, 61));
        r1_button_2->setFont(font);
        r1_button_2->setFlat(false);
        r4_button_2 = new QPushButton(tab_Punctuation);
        r4_button_2->setObjectName(QString::fromUtf8("r4_button_2"));
        r4_button_2->setGeometry(QRect(258, 50, 61, 61));
        r4_button_2->setFont(font);
        r4_button_2->setFlat(false);
        num3_button_2 = new QPushButton(tab_Punctuation);
        num3_button_2->setObjectName(QString::fromUtf8("num3_button_2"));
        num3_button_2->setGeometry(QRect(72, 174, 61, 61));
        num3_button_2->setFont(font2);
        num3_button_2->setFlat(false);
        num0_button_2 = new QPushButton(tab_Punctuation);
        num0_button_2->setObjectName(QString::fromUtf8("num0_button_2"));
        num0_button_2->setGeometry(QRect(258, 112, 61, 61));
        num0_button_2->setFont(font);
        num0_button_2->setFlat(false);
        r7_button_2 = new QPushButton(tab_Punctuation);
        r7_button_2->setObjectName(QString::fromUtf8("r7_button_2"));
        r7_button_2->setGeometry(QRect(72, 112, 61, 61));
        r7_button_2->setFont(font);
        r7_button_2->setFlat(false);
        num1_button_2 = new QPushButton(tab_Punctuation);
        num1_button_2->setObjectName(QString::fromUtf8("num1_button_2"));
        num1_button_2->setGeometry(QRect(320, 112, 61, 61));
        num1_button_2->setFont(font2);
        num1_button_2->setFlat(false);
        num2_button_2 = new QPushButton(tab_Punctuation);
        num2_button_2->setObjectName(QString::fromUtf8("num2_button_2"));
        num2_button_2->setGeometry(QRect(10, 174, 61, 61));
        num2_button_2->setFont(font2);
        num2_button_2->setFlat(false);
        r5_button_2 = new QPushButton(tab_Punctuation);
        r5_button_2->setObjectName(QString::fromUtf8("r5_button_2"));
        r5_button_2->setGeometry(QRect(320, 50, 61, 61));
        r5_button_2->setFont(font);
        r5_button_2->setFlat(false);
        r9_button_2 = new QPushButton(tab_Punctuation);
        r9_button_2->setObjectName(QString::fromUtf8("r9_button_2"));
        r9_button_2->setGeometry(QRect(196, 112, 61, 61));
        r9_button_2->setFont(font);
        r9_button_2->setFlat(false);
        num4_button_3 = new QPushButton(tab_Punctuation);
        num4_button_3->setObjectName(QString::fromUtf8("num4_button_3"));
        num4_button_3->setGeometry(QRect(196, 174, 61, 61));
        num4_button_3->setFont(font2);
        num4_button_3->setFlat(false);
        tabWidget->addTab(tab_Punctuation, QString());
        tab_function = new QWidget();
        tab_function->setObjectName(QString::fromUtf8("tab_function"));
        instructionLabel_4 = new QLabel(tab_function);
        instructionLabel_4->setObjectName(QString::fromUtf8("instructionLabel_4"));
        instructionLabel_4->setGeometry(QRect(60, 0, 271, 41));
        instructionLabel_4->setFont(font1);
        f1_button = new QPushButton(tab_function);
        f1_button->setObjectName(QString::fromUtf8("f1_button"));
        f1_button->setGeometry(QRect(10, 50, 61, 61));
        f1_button->setFont(font);
        f1_button->setFlat(false);
        f2_button = new QPushButton(tab_function);
        f2_button->setObjectName(QString::fromUtf8("f2_button"));
        f2_button->setGeometry(QRect(72, 50, 61, 61));
        f2_button->setFont(font);
        f2_button->setFlat(false);
        f3_button = new QPushButton(tab_function);
        f3_button->setObjectName(QString::fromUtf8("f3_button"));
        f3_button->setGeometry(QRect(134, 50, 61, 61));
        f3_button->setFont(font);
        f3_button->setFlat(false);
        f4_button = new QPushButton(tab_function);
        f4_button->setObjectName(QString::fromUtf8("f4_button"));
        f4_button->setGeometry(QRect(196, 50, 61, 61));
        f4_button->setFont(font);
        f4_button->setFlat(false);
        f5_button = new QPushButton(tab_function);
        f5_button->setObjectName(QString::fromUtf8("f5_button"));
        f5_button->setGeometry(QRect(258, 50, 61, 61));
        f5_button->setFont(font);
        f5_button->setFlat(false);
        f6_button = new QPushButton(tab_function);
        f6_button->setObjectName(QString::fromUtf8("f6_button"));
        f6_button->setGeometry(QRect(320, 50, 61, 61));
        f6_button->setFont(font);
        f6_button->setFlat(false);
        f7_button = new QPushButton(tab_function);
        f7_button->setObjectName(QString::fromUtf8("f7_button"));
        f7_button->setGeometry(QRect(10, 112, 61, 61));
        f7_button->setFont(font);
        f7_button->setFlat(false);
        f8_button = new QPushButton(tab_function);
        f8_button->setObjectName(QString::fromUtf8("f8_button"));
        f8_button->setGeometry(QRect(72, 112, 61, 61));
        f8_button->setFont(font);
        f8_button->setFlat(false);
        f10_button = new QPushButton(tab_function);
        f10_button->setObjectName(QString::fromUtf8("f10_button"));
        f10_button->setGeometry(QRect(196, 112, 61, 61));
        f10_button->setFont(font);
        f10_button->setFlat(false);
        f12_button = new QPushButton(tab_function);
        f12_button->setObjectName(QString::fromUtf8("f12_button"));
        f12_button->setGeometry(QRect(320, 112, 61, 61));
        f12_button->setFont(font);
        f12_button->setFlat(false);
        f9_button = new QPushButton(tab_function);
        f9_button->setObjectName(QString::fromUtf8("f9_button"));
        f9_button->setGeometry(QRect(134, 112, 61, 61));
        f9_button->setFont(font);
        f9_button->setFlat(false);
        f11_button = new QPushButton(tab_function);
        f11_button->setObjectName(QString::fromUtf8("f11_button"));
        f11_button->setGeometry(QRect(258, 112, 61, 61));
        f11_button->setFont(font);
        f11_button->setFlat(false);
        f15_button = new QPushButton(tab_function);
        f15_button->setObjectName(QString::fromUtf8("f15_button"));
        f15_button->setGeometry(QRect(134, 174, 61, 61));
        f15_button->setFont(font);
        f15_button->setFlat(false);
        f13_button = new QPushButton(tab_function);
        f13_button->setObjectName(QString::fromUtf8("f13_button"));
        f13_button->setGeometry(QRect(10, 174, 61, 61));
        f13_button->setFont(font);
        f13_button->setFlat(false);
        f17_button = new QPushButton(tab_function);
        f17_button->setObjectName(QString::fromUtf8("f17_button"));
        f17_button->setGeometry(QRect(258, 174, 61, 61));
        f17_button->setFont(font);
        f17_button->setFlat(false);
        f16_button = new QPushButton(tab_function);
        f16_button->setObjectName(QString::fromUtf8("f16_button"));
        f16_button->setGeometry(QRect(196, 174, 61, 61));
        f16_button->setFont(font);
        f16_button->setFlat(false);
        f14_button = new QPushButton(tab_function);
        f14_button->setObjectName(QString::fromUtf8("f14_button"));
        f14_button->setGeometry(QRect(72, 174, 61, 61));
        f14_button->setFont(font);
        f14_button->setFlat(false);
        f18_button = new QPushButton(tab_function);
        f18_button->setObjectName(QString::fromUtf8("f18_button"));
        f18_button->setGeometry(QRect(320, 174, 61, 61));
        f18_button->setFont(font);
        f18_button->setFlat(false);
        f21_button = new QPushButton(tab_function);
        f21_button->setObjectName(QString::fromUtf8("f21_button"));
        f21_button->setGeometry(QRect(134, 236, 61, 61));
        f21_button->setFont(font);
        f21_button->setFlat(false);
        f23_button = new QPushButton(tab_function);
        f23_button->setObjectName(QString::fromUtf8("f23_button"));
        f23_button->setGeometry(QRect(258, 236, 61, 61));
        f23_button->setFont(font);
        f23_button->setFlat(false);
        f24_button = new QPushButton(tab_function);
        f24_button->setObjectName(QString::fromUtf8("f24_button"));
        f24_button->setGeometry(QRect(320, 236, 61, 61));
        f24_button->setFont(font);
        f24_button->setFlat(false);
        f20_button = new QPushButton(tab_function);
        f20_button->setObjectName(QString::fromUtf8("f20_button"));
        f20_button->setGeometry(QRect(72, 236, 61, 61));
        f20_button->setFont(font);
        f20_button->setFlat(false);
        f22_button = new QPushButton(tab_function);
        f22_button->setObjectName(QString::fromUtf8("f22_button"));
        f22_button->setGeometry(QRect(196, 236, 61, 61));
        f22_button->setFont(font);
        f22_button->setFlat(false);
        f19_button = new QPushButton(tab_function);
        f19_button->setObjectName(QString::fromUtf8("f19_button"));
        f19_button->setGeometry(QRect(10, 236, 61, 61));
        f19_button->setFont(font);
        f19_button->setFlat(false);
        tabWidget->addTab(tab_function, QString());
        tab_other = new QWidget();
        tab_other->setObjectName(QString::fromUtf8("tab_other"));
        instructionLabel_5 = new QLabel(tab_other);
        instructionLabel_5->setObjectName(QString::fromUtf8("instructionLabel_5"));
        instructionLabel_5->setGeometry(QRect(60, 0, 291, 41));
        instructionLabel_5->setFont(font1);
        l_button_2 = new QPushButton(tab_other);
        l_button_2->setObjectName(QString::fromUtf8("l_button_2"));
        l_button_2->setGeometry(QRect(320, 112, 61, 61));
        QFont font3;
        font3.setPointSize(10);
        font3.setStyleStrategy(QFont::PreferAntialias);
        l_button_2->setFont(font3);
        l_button_2->setFlat(false);
        h_button_2 = new QPushButton(tab_other);
        h_button_2->setObjectName(QString::fromUtf8("h_button_2"));
        h_button_2->setGeometry(QRect(72, 112, 61, 61));
        h_button_2->setFont(font3);
        h_button_2->setFlat(false);
        d_button_2 = new QPushButton(tab_other);
        d_button_2->setObjectName(QString::fromUtf8("d_button_2"));
        d_button_2->setGeometry(QRect(196, 50, 61, 61));
        d_button_2->setFont(font3);
        d_button_2->setFlat(false);
        a_button_2 = new QPushButton(tab_other);
        a_button_2->setObjectName(QString::fromUtf8("a_button_2"));
        a_button_2->setGeometry(QRect(10, 50, 61, 61));
        a_button_2->setFont(font3);
        a_button_2->setFlat(false);
        y_button_2 = new QPushButton(tab_other);
        y_button_2->setObjectName(QString::fromUtf8("y_button_2"));
        y_button_2->setGeometry(QRect(10, 298, 61, 61));
        y_button_2->setFont(font3);
        y_button_2->setFlat(false);
        n_button_2 = new QPushButton(tab_other);
        n_button_2->setObjectName(QString::fromUtf8("n_button_2"));
        n_button_2->setGeometry(QRect(72, 174, 61, 61));
        n_button_2->setFont(font3);
        n_button_2->setFlat(false);
        f_button_2 = new QPushButton(tab_other);
        f_button_2->setObjectName(QString::fromUtf8("f_button_2"));
        f_button_2->setGeometry(QRect(320, 50, 61, 61));
        f_button_2->setFont(font3);
        f_button_2->setFlat(false);
        k_button_2 = new QPushButton(tab_other);
        k_button_2->setObjectName(QString::fromUtf8("k_button_2"));
        k_button_2->setGeometry(QRect(258, 112, 61, 61));
        k_button_2->setFont(font3);
        k_button_2->setFlat(false);
        g_button_2 = new QPushButton(tab_other);
        g_button_2->setObjectName(QString::fromUtf8("g_button_2"));
        g_button_2->setGeometry(QRect(10, 112, 61, 61));
        g_button_2->setFont(font3);
        g_button_2->setFlat(false);
        z_button_2 = new QPushButton(tab_other);
        z_button_2->setObjectName(QString::fromUtf8("z_button_2"));
        z_button_2->setGeometry(QRect(72, 298, 61, 61));
        z_button_2->setFont(font3);
        z_button_2->setFlat(false);
        w_button_2 = new QPushButton(tab_other);
        w_button_2->setObjectName(QString::fromUtf8("w_button_2"));
        w_button_2->setGeometry(QRect(258, 236, 61, 61));
        w_button_2->setFont(font3);
        w_button_2->setFlat(false);
        r_button_2 = new QPushButton(tab_other);
        r_button_2->setObjectName(QString::fromUtf8("r_button_2"));
        r_button_2->setGeometry(QRect(320, 174, 61, 61));
        r_button_2->setFont(font3);
        r_button_2->setFlat(false);
        q_button_2 = new QPushButton(tab_other);
        q_button_2->setObjectName(QString::fromUtf8("q_button_2"));
        q_button_2->setGeometry(QRect(258, 174, 61, 61));
        q_button_2->setFont(font3);
        q_button_2->setFlat(false);
        j_button_2 = new QPushButton(tab_other);
        j_button_2->setObjectName(QString::fromUtf8("j_button_2"));
        j_button_2->setGeometry(QRect(196, 112, 61, 61));
        j_button_2->setFont(font3);
        j_button_2->setFlat(false);
        i_button_2 = new QPushButton(tab_other);
        i_button_2->setObjectName(QString::fromUtf8("i_button_2"));
        i_button_2->setGeometry(QRect(134, 112, 61, 61));
        i_button_2->setFont(font3);
        i_button_2->setFlat(false);
        e_button_2 = new QPushButton(tab_other);
        e_button_2->setObjectName(QString::fromUtf8("e_button_2"));
        e_button_2->setGeometry(QRect(258, 50, 61, 61));
        e_button_2->setFont(font3);
        e_button_2->setFlat(false);
        x_button_2 = new QPushButton(tab_other);
        x_button_2->setObjectName(QString::fromUtf8("x_button_2"));
        x_button_2->setGeometry(QRect(320, 236, 61, 61));
        x_button_2->setFont(font3);
        x_button_2->setFlat(false);
        t_button_2 = new QPushButton(tab_other);
        t_button_2->setObjectName(QString::fromUtf8("t_button_2"));
        t_button_2->setGeometry(QRect(72, 236, 61, 61));
        t_button_2->setFont(font3);
        t_button_2->setFlat(false);
        o_button_2 = new QPushButton(tab_other);
        o_button_2->setObjectName(QString::fromUtf8("o_button_2"));
        o_button_2->setGeometry(QRect(134, 174, 61, 61));
        o_button_2->setFont(font3);
        o_button_2->setFlat(false);
        s_button_2 = new QPushButton(tab_other);
        s_button_2->setObjectName(QString::fromUtf8("s_button_2"));
        s_button_2->setGeometry(QRect(10, 236, 61, 61));
        s_button_2->setFont(font3);
        s_button_2->setFlat(false);
        u_button_2 = new QPushButton(tab_other);
        u_button_2->setObjectName(QString::fromUtf8("u_button_2"));
        u_button_2->setGeometry(QRect(134, 236, 61, 61));
        u_button_2->setFont(font3);
        u_button_2->setFlat(false);
        p_button_2 = new QPushButton(tab_other);
        p_button_2->setObjectName(QString::fromUtf8("p_button_2"));
        p_button_2->setGeometry(QRect(196, 174, 61, 61));
        p_button_2->setFont(font3);
        p_button_2->setFlat(false);
        c_button_2 = new QPushButton(tab_other);
        c_button_2->setObjectName(QString::fromUtf8("c_button_2"));
        c_button_2->setGeometry(QRect(134, 50, 61, 61));
        c_button_2->setFont(font3);
        c_button_2->setFlat(false);
        m_button_2 = new QPushButton(tab_other);
        m_button_2->setObjectName(QString::fromUtf8("m_button_2"));
        m_button_2->setGeometry(QRect(10, 174, 61, 61));
        m_button_2->setFont(font3);
        m_button_2->setFlat(false);
        b_button_2 = new QPushButton(tab_other);
        b_button_2->setObjectName(QString::fromUtf8("b_button_2"));
        b_button_2->setGeometry(QRect(72, 50, 61, 61));
        b_button_2->setFont(font3);
        b_button_2->setAutoRepeat(false);
        b_button_2->setAutoExclusive(false);
        b_button_2->setFlat(false);
        v_button_2 = new QPushButton(tab_other);
        v_button_2->setObjectName(QString::fromUtf8("v_button_2"));
        v_button_2->setGeometry(QRect(196, 236, 61, 61));
        v_button_2->setFont(font3);
        v_button_2->setFlat(false);
        z_button_3 = new QPushButton(tab_other);
        z_button_3->setObjectName(QString::fromUtf8("z_button_3"));
        z_button_3->setGeometry(QRect(134, 298, 61, 61));
        z_button_3->setFont(font3);
        z_button_3->setFlat(false);
        z_button_4 = new QPushButton(tab_other);
        z_button_4->setObjectName(QString::fromUtf8("z_button_4"));
        z_button_4->setGeometry(QRect(196, 298, 61, 61));
        z_button_4->setFont(font3);
        z_button_4->setFlat(false);
        z_button_5 = new QPushButton(tab_other);
        z_button_5->setObjectName(QString::fromUtf8("z_button_5"));
        z_button_5->setGeometry(QRect(258, 298, 61, 61));
        z_button_5->setFont(font3);
        z_button_5->setFlat(false);
        z_button_6 = new QPushButton(tab_other);
        z_button_6->setObjectName(QString::fromUtf8("z_button_6"));
        z_button_6->setGeometry(QRect(320, 298, 61, 61));
        z_button_6->setFont(font3);
        z_button_6->setFlat(false);
        tabWidget->addTab(tab_other, QString());
        tab_other2 = new QWidget();
        tab_other2->setObjectName(QString::fromUtf8("tab_other2"));
        instructionLabel_6 = new QLabel(tab_other2);
        instructionLabel_6->setObjectName(QString::fromUtf8("instructionLabel_6"));
        instructionLabel_6->setGeometry(QRect(60, 0, 301, 41));
        instructionLabel_6->setFont(font1);
        a_button_3 = new QPushButton(tab_other2);
        a_button_3->setObjectName(QString::fromUtf8("a_button_3"));
        a_button_3->setGeometry(QRect(10, 50, 61, 61));
        a_button_3->setFont(font3);
        a_button_3->setFlat(false);
        c_button_3 = new QPushButton(tab_other2);
        c_button_3->setObjectName(QString::fromUtf8("c_button_3"));
        c_button_3->setGeometry(QRect(134, 50, 61, 61));
        c_button_3->setFont(font3);
        c_button_3->setFlat(false);
        j_button_3 = new QPushButton(tab_other2);
        j_button_3->setObjectName(QString::fromUtf8("j_button_3"));
        j_button_3->setGeometry(QRect(196, 112, 61, 61));
        j_button_3->setFont(font3);
        j_button_3->setFlat(false);
        d_button_3 = new QPushButton(tab_other2);
        d_button_3->setObjectName(QString::fromUtf8("d_button_3"));
        d_button_3->setGeometry(QRect(196, 50, 61, 61));
        d_button_3->setFont(font3);
        d_button_3->setFlat(false);
        e_button_3 = new QPushButton(tab_other2);
        e_button_3->setObjectName(QString::fromUtf8("e_button_3"));
        e_button_3->setGeometry(QRect(258, 50, 61, 61));
        e_button_3->setFont(font3);
        e_button_3->setFlat(false);
        b_button_3 = new QPushButton(tab_other2);
        b_button_3->setObjectName(QString::fromUtf8("b_button_3"));
        b_button_3->setGeometry(QRect(72, 50, 61, 61));
        b_button_3->setFont(font3);
        b_button_3->setAutoRepeat(false);
        b_button_3->setAutoExclusive(false);
        b_button_3->setFlat(false);
        h_button_3 = new QPushButton(tab_other2);
        h_button_3->setObjectName(QString::fromUtf8("h_button_3"));
        h_button_3->setGeometry(QRect(72, 112, 61, 61));
        h_button_3->setFont(font3);
        h_button_3->setFlat(false);
        k_button_3 = new QPushButton(tab_other2);
        k_button_3->setObjectName(QString::fromUtf8("k_button_3"));
        k_button_3->setGeometry(QRect(258, 112, 61, 61));
        k_button_3->setFont(font3);
        k_button_3->setFlat(false);
        i_button_3 = new QPushButton(tab_other2);
        i_button_3->setObjectName(QString::fromUtf8("i_button_3"));
        i_button_3->setGeometry(QRect(134, 112, 61, 61));
        i_button_3->setFont(font3);
        i_button_3->setFlat(false);
        g_button_3 = new QPushButton(tab_other2);
        g_button_3->setObjectName(QString::fromUtf8("g_button_3"));
        g_button_3->setGeometry(QRect(10, 112, 61, 61));
        g_button_3->setFont(font3);
        g_button_3->setFlat(false);
        f_button_3 = new QPushButton(tab_other2);
        f_button_3->setObjectName(QString::fromUtf8("f_button_3"));
        f_button_3->setGeometry(QRect(320, 50, 61, 61));
        f_button_3->setFont(font3);
        f_button_3->setFlat(false);
        tabWidget->addTab(tab_other2, QString());

        retranslateUi(VirtualKeyboard);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(VirtualKeyboard);
    } // setupUi

    void retranslateUi(QWidget *VirtualKeyboard)
    {
        VirtualKeyboard->setWindowTitle(QCoreApplication::translate("VirtualKeyboard", "Key Choser", nullptr));
#if QT_CONFIG(tooltip)
        a_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        a_button->setText(QCoreApplication::translate("VirtualKeyboard", "A", nullptr));
        instructionLabel->setText(QCoreApplication::translate("VirtualKeyboard", "Click the character you want", nullptr));
#if QT_CONFIG(tooltip)
        b_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        b_button->setText(QCoreApplication::translate("VirtualKeyboard", "B", nullptr));
#if QT_CONFIG(tooltip)
        c_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        c_button->setText(QCoreApplication::translate("VirtualKeyboard", "C", nullptr));
#if QT_CONFIG(tooltip)
        d_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        d_button->setText(QCoreApplication::translate("VirtualKeyboard", "D", nullptr));
#if QT_CONFIG(tooltip)
        e_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        e_button->setText(QCoreApplication::translate("VirtualKeyboard", "E", nullptr));
#if QT_CONFIG(tooltip)
        f_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f_button->setText(QCoreApplication::translate("VirtualKeyboard", "F", nullptr));
#if QT_CONFIG(tooltip)
        l_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        l_button->setText(QCoreApplication::translate("VirtualKeyboard", "L", nullptr));
#if QT_CONFIG(tooltip)
        k_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        k_button->setText(QCoreApplication::translate("VirtualKeyboard", "K", nullptr));
#if QT_CONFIG(tooltip)
        g_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        g_button->setText(QCoreApplication::translate("VirtualKeyboard", "G", nullptr));
#if QT_CONFIG(tooltip)
        j_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        j_button->setText(QCoreApplication::translate("VirtualKeyboard", "J", nullptr));
#if QT_CONFIG(tooltip)
        h_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        h_button->setText(QCoreApplication::translate("VirtualKeyboard", "H", nullptr));
#if QT_CONFIG(tooltip)
        i_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        i_button->setText(QCoreApplication::translate("VirtualKeyboard", "I", nullptr));
#if QT_CONFIG(tooltip)
        p_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        p_button->setText(QCoreApplication::translate("VirtualKeyboard", "P", nullptr));
#if QT_CONFIG(tooltip)
        r_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r_button->setText(QCoreApplication::translate("VirtualKeyboard", "R", nullptr));
#if QT_CONFIG(tooltip)
        m_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        m_button->setText(QCoreApplication::translate("VirtualKeyboard", "M", nullptr));
#if QT_CONFIG(tooltip)
        n_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        n_button->setText(QCoreApplication::translate("VirtualKeyboard", "N", nullptr));
#if QT_CONFIG(tooltip)
        o_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        o_button->setText(QCoreApplication::translate("VirtualKeyboard", "O", nullptr));
#if QT_CONFIG(tooltip)
        q_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        q_button->setText(QCoreApplication::translate("VirtualKeyboard", "Q", nullptr));
#if QT_CONFIG(tooltip)
        s_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        s_button->setText(QCoreApplication::translate("VirtualKeyboard", "S", nullptr));
#if QT_CONFIG(tooltip)
        u_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        u_button->setText(QCoreApplication::translate("VirtualKeyboard", "U", nullptr));
#if QT_CONFIG(tooltip)
        w_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        w_button->setText(QCoreApplication::translate("VirtualKeyboard", "W", nullptr));
#if QT_CONFIG(tooltip)
        t_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        t_button->setText(QCoreApplication::translate("VirtualKeyboard", "T", nullptr));
#if QT_CONFIG(tooltip)
        x_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        x_button->setText(QCoreApplication::translate("VirtualKeyboard", "X", nullptr));
#if QT_CONFIG(tooltip)
        v_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        v_button->setText(QCoreApplication::translate("VirtualKeyboard", "V", nullptr));
#if QT_CONFIG(tooltip)
        y_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        y_button->setText(QCoreApplication::translate("VirtualKeyboard", "Y", nullptr));
#if QT_CONFIG(tooltip)
        z_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        z_button->setText(QCoreApplication::translate("VirtualKeyboard", "Z", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_AZ), QCoreApplication::translate("VirtualKeyboard", "A-Z", nullptr));
        instructionLabel_2->setText(QCoreApplication::translate("VirtualKeyboard", "Click the character you want", nullptr));
#if QT_CONFIG(tooltip)
        r0_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r0_button->setText(QCoreApplication::translate("VirtualKeyboard", "0", nullptr));
#if QT_CONFIG(tooltip)
        r1_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r1_button->setText(QCoreApplication::translate("VirtualKeyboard", "1", nullptr));
#if QT_CONFIG(tooltip)
        r2_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r2_button->setText(QCoreApplication::translate("VirtualKeyboard", "2", nullptr));
#if QT_CONFIG(tooltip)
        r3_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r3_button->setText(QCoreApplication::translate("VirtualKeyboard", "3", nullptr));
#if QT_CONFIG(tooltip)
        r4_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r4_button->setText(QCoreApplication::translate("VirtualKeyboard", "4", nullptr));
#if QT_CONFIG(tooltip)
        r5_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r5_button->setText(QCoreApplication::translate("VirtualKeyboard", "5", nullptr));
#if QT_CONFIG(tooltip)
        r7_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r7_button->setText(QCoreApplication::translate("VirtualKeyboard", "7", nullptr));
#if QT_CONFIG(tooltip)
        r8_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r8_button->setText(QCoreApplication::translate("VirtualKeyboard", "8", nullptr));
#if QT_CONFIG(tooltip)
        r9_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r9_button->setText(QCoreApplication::translate("VirtualKeyboard", "9", nullptr));
#if QT_CONFIG(tooltip)
        num0_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num0_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num0", nullptr));
#if QT_CONFIG(tooltip)
        num1_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num1_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num1", nullptr));
#if QT_CONFIG(tooltip)
        r6_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r6_button->setText(QCoreApplication::translate("VirtualKeyboard", "6", nullptr));
#if QT_CONFIG(tooltip)
        num3_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num3_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num3", nullptr));
#if QT_CONFIG(tooltip)
        num7_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num7_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num7", nullptr));
#if QT_CONFIG(tooltip)
        num4_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num4_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num4", nullptr));
#if QT_CONFIG(tooltip)
        num5_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num5_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num5", nullptr));
#if QT_CONFIG(tooltip)
        num6_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num6_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num6", nullptr));
#if QT_CONFIG(tooltip)
        num2_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num2_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num2", nullptr));
#if QT_CONFIG(tooltip)
        num8_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num8_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num8", nullptr));
#if QT_CONFIG(tooltip)
        num9_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num9_button->setText(QCoreApplication::translate("VirtualKeyboard", "Num9", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Numbers), QCoreApplication::translate("VirtualKeyboard", "Numbers", nullptr));
        instructionLabel_3->setText(QCoreApplication::translate("VirtualKeyboard", "Click the character you want", nullptr));
#if QT_CONFIG(tooltip)
        r6_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r6_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "]", nullptr));
#if QT_CONFIG(tooltip)
        r2_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r2_button_2->setText(QCoreApplication::translate("VirtualKeyboard", ".", nullptr));
#if QT_CONFIG(tooltip)
        r8_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r8_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "\\", nullptr));
#if QT_CONFIG(tooltip)
        r3_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r3_button_2->setText(QCoreApplication::translate("VirtualKeyboard", ",", nullptr));
#if QT_CONFIG(tooltip)
        r0_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r0_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "`", nullptr));
#if QT_CONFIG(tooltip)
        num4_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num4_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Num+", nullptr));
#if QT_CONFIG(tooltip)
        r1_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r1_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "/", nullptr));
#if QT_CONFIG(tooltip)
        r4_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r4_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "'", nullptr));
#if QT_CONFIG(tooltip)
        num3_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num3_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Num-", nullptr));
#if QT_CONFIG(tooltip)
        num0_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num0_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "-", nullptr));
#if QT_CONFIG(tooltip)
        r7_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r7_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "[", nullptr));
#if QT_CONFIG(tooltip)
        num1_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num1_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Num/", nullptr));
#if QT_CONFIG(tooltip)
        num2_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num2_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Num*", nullptr));
#if QT_CONFIG(tooltip)
        r5_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r5_button_2->setText(QCoreApplication::translate("VirtualKeyboard", ";", nullptr));
#if QT_CONFIG(tooltip)
        r9_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r9_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "=", nullptr));
#if QT_CONFIG(tooltip)
        num4_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        num4_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Num.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Punctuation), QCoreApplication::translate("VirtualKeyboard", "Punctuation", nullptr));
        instructionLabel_4->setText(QCoreApplication::translate("VirtualKeyboard", "Click the character you want", nullptr));
#if QT_CONFIG(tooltip)
        f1_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f1_button->setText(QCoreApplication::translate("VirtualKeyboard", "F1", nullptr));
#if QT_CONFIG(tooltip)
        f2_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f2_button->setText(QCoreApplication::translate("VirtualKeyboard", "F2", nullptr));
#if QT_CONFIG(tooltip)
        f3_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f3_button->setText(QCoreApplication::translate("VirtualKeyboard", "F3", nullptr));
#if QT_CONFIG(tooltip)
        f4_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f4_button->setText(QCoreApplication::translate("VirtualKeyboard", "F4", nullptr));
#if QT_CONFIG(tooltip)
        f5_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f5_button->setText(QCoreApplication::translate("VirtualKeyboard", "F5", nullptr));
#if QT_CONFIG(tooltip)
        f6_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f6_button->setText(QCoreApplication::translate("VirtualKeyboard", "F6", nullptr));
#if QT_CONFIG(tooltip)
        f7_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f7_button->setText(QCoreApplication::translate("VirtualKeyboard", "F7", nullptr));
#if QT_CONFIG(tooltip)
        f8_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f8_button->setText(QCoreApplication::translate("VirtualKeyboard", "F8", nullptr));
#if QT_CONFIG(tooltip)
        f10_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f10_button->setText(QCoreApplication::translate("VirtualKeyboard", "F10", nullptr));
#if QT_CONFIG(tooltip)
        f12_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f12_button->setText(QCoreApplication::translate("VirtualKeyboard", "F12", nullptr));
#if QT_CONFIG(tooltip)
        f9_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f9_button->setText(QCoreApplication::translate("VirtualKeyboard", "F9", nullptr));
#if QT_CONFIG(tooltip)
        f11_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f11_button->setText(QCoreApplication::translate("VirtualKeyboard", "F11", nullptr));
#if QT_CONFIG(tooltip)
        f15_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f15_button->setText(QCoreApplication::translate("VirtualKeyboard", "F15", nullptr));
#if QT_CONFIG(tooltip)
        f13_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f13_button->setText(QCoreApplication::translate("VirtualKeyboard", "F13", nullptr));
#if QT_CONFIG(tooltip)
        f17_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f17_button->setText(QCoreApplication::translate("VirtualKeyboard", "F17", nullptr));
#if QT_CONFIG(tooltip)
        f16_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f16_button->setText(QCoreApplication::translate("VirtualKeyboard", "F16", nullptr));
#if QT_CONFIG(tooltip)
        f14_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f14_button->setText(QCoreApplication::translate("VirtualKeyboard", "F14", nullptr));
#if QT_CONFIG(tooltip)
        f18_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f18_button->setText(QCoreApplication::translate("VirtualKeyboard", "F18", nullptr));
#if QT_CONFIG(tooltip)
        f21_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f21_button->setText(QCoreApplication::translate("VirtualKeyboard", "F21", nullptr));
#if QT_CONFIG(tooltip)
        f23_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f23_button->setText(QCoreApplication::translate("VirtualKeyboard", "F23", nullptr));
#if QT_CONFIG(tooltip)
        f24_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f24_button->setText(QCoreApplication::translate("VirtualKeyboard", "F24", nullptr));
#if QT_CONFIG(tooltip)
        f20_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f20_button->setText(QCoreApplication::translate("VirtualKeyboard", "F20", nullptr));
#if QT_CONFIG(tooltip)
        f22_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f22_button->setText(QCoreApplication::translate("VirtualKeyboard", "F22", nullptr));
#if QT_CONFIG(tooltip)
        f19_button->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f19_button->setText(QCoreApplication::translate("VirtualKeyboard", "F19", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_function), QCoreApplication::translate("VirtualKeyboard", "Function Keys", nullptr));
        instructionLabel_5->setText(QCoreApplication::translate("VirtualKeyboard", "Click the character you want", nullptr));
#if QT_CONFIG(tooltip)
        l_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        l_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Right\n"
"Alt", nullptr));
#if QT_CONFIG(tooltip)
        h_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        h_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Left\n"
"Ctrl", nullptr));
#if QT_CONFIG(tooltip)
        d_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        d_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Caps\n"
"Lock", nullptr));
#if QT_CONFIG(tooltip)
        a_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        a_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Escape", nullptr));
#if QT_CONFIG(tooltip)
        y_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        y_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Volume\n"
"Up", nullptr));
#if QT_CONFIG(tooltip)
        n_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        n_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Print\n"
"Screen", nullptr));
#if QT_CONFIG(tooltip)
        f_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Left\n"
"Shift", nullptr));
#if QT_CONFIG(tooltip)
        k_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        k_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Space", nullptr));
#if QT_CONFIG(tooltip)
        g_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        g_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Right\n"
"Shift", nullptr));
#if QT_CONFIG(tooltip)
        z_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        z_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Volume\n"
"Down", nullptr));
#if QT_CONFIG(tooltip)
        w_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        w_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Left\n"
"Arrow", nullptr));
#if QT_CONFIG(tooltip)
        r_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        r_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        q_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        q_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Page Up", nullptr));
#if QT_CONFIG(tooltip)
        j_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        j_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Left\n"
"Alt", nullptr));
#if QT_CONFIG(tooltip)
        i_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        i_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Windows", nullptr));
#if QT_CONFIG(tooltip)
        e_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        e_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Enter", nullptr));
#if QT_CONFIG(tooltip)
        x_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        x_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Down\n"
"Arrow", nullptr));
#if QT_CONFIG(tooltip)
        t_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        t_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Page\n"
"Down", nullptr));
#if QT_CONFIG(tooltip)
        o_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        o_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Insert", nullptr));
#if QT_CONFIG(tooltip)
        s_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        s_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "End", nullptr));
#if QT_CONFIG(tooltip)
        u_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        u_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Right\n"
"Arrow", nullptr));
#if QT_CONFIG(tooltip)
        p_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        p_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Home", nullptr));
#if QT_CONFIG(tooltip)
        c_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        c_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Tab", nullptr));
#if QT_CONFIG(tooltip)
        m_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        m_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Right\n"
"Ctrl", nullptr));
#if QT_CONFIG(tooltip)
        b_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        b_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Back\n"
"Space", nullptr));
#if QT_CONFIG(tooltip)
        v_button_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        v_button_2->setText(QCoreApplication::translate("VirtualKeyboard", "Up\n"
"Arrow", nullptr));
#if QT_CONFIG(tooltip)
        z_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        z_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Volume\n"
"Mute", nullptr));
#if QT_CONFIG(tooltip)
        z_button_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        z_button_4->setText(QCoreApplication::translate("VirtualKeyboard", "Media\n"
"Next\n"
"Track", nullptr));
#if QT_CONFIG(tooltip)
        z_button_5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        z_button_5->setText(QCoreApplication::translate("VirtualKeyboard", "Media\n"
"Prev\n"
"Track", nullptr));
#if QT_CONFIG(tooltip)
        z_button_6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        z_button_6->setText(QCoreApplication::translate("VirtualKeyboard", "Media\n"
"Stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_other), QCoreApplication::translate("VirtualKeyboard", "Other", nullptr));
        instructionLabel_6->setText(QCoreApplication::translate("VirtualKeyboard", "Click the character you want", nullptr));
#if QT_CONFIG(tooltip)
        a_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        a_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Toggle\n"
"Media", nullptr));
#if QT_CONFIG(tooltip)
        c_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        c_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "EREOF", nullptr));
#if QT_CONFIG(tooltip)
        j_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        j_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Browser\n"
"Refresh", nullptr));
#if QT_CONFIG(tooltip)
        d_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        d_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "End\n"
"Current\n"
"Task", nullptr));
#if QT_CONFIG(tooltip)
        e_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        e_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Kana", nullptr));
#if QT_CONFIG(tooltip)
        b_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        b_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Context\n"
"Menu", nullptr));
#if QT_CONFIG(tooltip)
        h_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        h_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Mode\n"
"Change", nullptr));
#if QT_CONFIG(tooltip)
        k_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        k_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Jisho", nullptr));
#if QT_CONFIG(tooltip)
        i_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        i_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Browser\n"
"Home", nullptr));
#if QT_CONFIG(tooltip)
        g_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        g_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Non\n"
"Convert", nullptr));
#if QT_CONFIG(tooltip)
        f_button_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        f_button_3->setText(QCoreApplication::translate("VirtualKeyboard", "Kanji", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_other2), QCoreApplication::translate("VirtualKeyboard", "Other 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VirtualKeyboard: public Ui_VirtualKeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUALKEYBOARD_H
