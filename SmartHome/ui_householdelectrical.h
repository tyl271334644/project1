/********************************************************************************
** Form generated from reading UI file 'householdelectrical.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUSEHOLDELECTRICAL_H
#define UI_HOUSEHOLDELECTRICAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HouseholdElectrical
{
public:
    QPushButton *backMain;
    QPushButton *pushButton_14;
    QLabel *label_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton;
    QPushButton *warmCls;
    QPushButton *washerOpen;
    QLabel *label_12;
    QPushButton *washCls;
    QLabel *label_13;
    QPushButton *AcOpen;
    QLabel *label_14;
    QPushButton *AcCls;
    QLabel *label;
    QPushButton *refCls;
    QLabel *label_15;
    QPushButton *refOpen;
    QDateTimeEdit *airc_end;
    QDateTimeEdit *airc_start;
    QDateTimeEdit *wash_end;
    QDateTimeEdit *wash_start;
    QPushButton *bask;
    QPushButton *shadow;
    QPushButton *hot;
    QPushButton *cold;
    QPushButton *TvCls;
    QLabel *label_11;
    QPushButton *TvOpen;
    QDateTimeEdit *tv_end;
    QDateTimeEdit *tv_start;
    QPushButton *close;

    void setupUi(QDialog *HouseholdElectrical)
    {
        if (HouseholdElectrical->objectName().isEmpty())
            HouseholdElectrical->setObjectName(QStringLiteral("HouseholdElectrical"));
        HouseholdElectrical->resize(1100, 700);
        backMain = new QPushButton(HouseholdElectrical);
        backMain->setObjectName(QStringLiteral("backMain"));
        backMain->setGeometry(QRect(960, 640, 100, 40));
        backMain->setStyleSheet(QStringLiteral(""));
        pushButton_14 = new QPushButton(HouseholdElectrical);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(710, 120, 61, 28));
        label_9 = new QLabel(HouseholdElectrical);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(750, 160, 72, 15));
        label_9->setAlignment(Qt::AlignCenter);
        pushButton_13 = new QPushButton(HouseholdElectrical);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(780, 120, 61, 28));
        pushButton = new QPushButton(HouseholdElectrical);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 120, 61, 28));
        warmCls = new QPushButton(HouseholdElectrical);
        warmCls->setObjectName(QStringLiteral("warmCls"));
        warmCls->setGeometry(QRect(780, 120, 61, 28));
        washerOpen = new QPushButton(HouseholdElectrical);
        washerOpen->setObjectName(QStringLiteral("washerOpen"));
        washerOpen->setGeometry(QRect(240, 340, 61, 28));
        label_12 = new QLabel(HouseholdElectrical);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(280, 380, 72, 15));
        label_12->setAlignment(Qt::AlignCenter);
        washCls = new QPushButton(HouseholdElectrical);
        washCls->setObjectName(QStringLiteral("washCls"));
        washCls->setGeometry(QRect(310, 340, 61, 28));
        label_13 = new QLabel(HouseholdElectrical);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(750, 380, 72, 15));
        label_13->setAlignment(Qt::AlignCenter);
        AcOpen = new QPushButton(HouseholdElectrical);
        AcOpen->setObjectName(QStringLiteral("AcOpen"));
        AcOpen->setGeometry(QRect(240, 120, 61, 28));
        label_14 = new QLabel(HouseholdElectrical);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 160, 72, 15));
        label_14->setAlignment(Qt::AlignCenter);
        AcCls = new QPushButton(HouseholdElectrical);
        AcCls->setObjectName(QStringLiteral("AcCls"));
        AcCls->setGeometry(QRect(310, 120, 61, 28));
        label = new QLabel(HouseholdElectrical);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 30, 111, 31));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Academy Engraved LET\";"));
        label->setAlignment(Qt::AlignCenter);
        refCls = new QPushButton(HouseholdElectrical);
        refCls->setObjectName(QStringLiteral("refCls"));
        refCls->setGeometry(QRect(780, 510, 61, 28));
        label_15 = new QLabel(HouseholdElectrical);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(750, 550, 72, 15));
        label_15->setAlignment(Qt::AlignCenter);
        refOpen = new QPushButton(HouseholdElectrical);
        refOpen->setObjectName(QStringLiteral("refOpen"));
        refOpen->setGeometry(QRect(710, 510, 61, 28));
        airc_end = new QDateTimeEdit(HouseholdElectrical);
        airc_end->setObjectName(QStringLiteral("airc_end"));
        airc_end->setGeometry(QRect(400, 160, 194, 22));
        airc_start = new QDateTimeEdit(HouseholdElectrical);
        airc_start->setObjectName(QStringLiteral("airc_start"));
        airc_start->setGeometry(QRect(400, 120, 194, 22));
        wash_end = new QDateTimeEdit(HouseholdElectrical);
        wash_end->setObjectName(QStringLiteral("wash_end"));
        wash_end->setGeometry(QRect(400, 380, 194, 22));
        wash_start = new QDateTimeEdit(HouseholdElectrical);
        wash_start->setObjectName(QStringLiteral("wash_start"));
        wash_start->setGeometry(QRect(400, 340, 194, 22));
        bask = new QPushButton(HouseholdElectrical);
        bask->setObjectName(QStringLiteral("bask"));
        bask->setGeometry(QRect(710, 340, 61, 28));
        shadow = new QPushButton(HouseholdElectrical);
        shadow->setObjectName(QStringLiteral("shadow"));
        shadow->setGeometry(QRect(780, 340, 61, 28));
        hot = new QPushButton(HouseholdElectrical);
        hot->setObjectName(QStringLiteral("hot"));
        hot->setGeometry(QRect(780, 190, 61, 28));
        cold = new QPushButton(HouseholdElectrical);
        cold->setObjectName(QStringLiteral("cold"));
        cold->setGeometry(QRect(710, 190, 61, 28));
        TvCls = new QPushButton(HouseholdElectrical);
        TvCls->setObjectName(QStringLiteral("TvCls"));
        TvCls->setGeometry(QRect(310, 510, 61, 28));
        label_11 = new QLabel(HouseholdElectrical);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 550, 72, 15));
        label_11->setAlignment(Qt::AlignCenter);
        TvOpen = new QPushButton(HouseholdElectrical);
        TvOpen->setObjectName(QStringLiteral("TvOpen"));
        TvOpen->setGeometry(QRect(240, 510, 61, 28));
        tv_end = new QDateTimeEdit(HouseholdElectrical);
        tv_end->setObjectName(QStringLiteral("tv_end"));
        tv_end->setGeometry(QRect(400, 550, 194, 22));
        tv_start = new QDateTimeEdit(HouseholdElectrical);
        tv_start->setObjectName(QStringLiteral("tv_start"));
        tv_start->setGeometry(QRect(400, 510, 194, 22));
        close = new QPushButton(HouseholdElectrical);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(820, 640, 100, 40));
        close->setStyleSheet(QStringLiteral(""));

        retranslateUi(HouseholdElectrical);

        QMetaObject::connectSlotsByName(HouseholdElectrical);
    } // setupUi

    void retranslateUi(QDialog *HouseholdElectrical)
    {
        HouseholdElectrical->setWindowTitle(QApplication::translate("HouseholdElectrical", "Dialog", 0));
        backMain->setText(QApplication::translate("HouseholdElectrical", "\350\277\224\345\233\236", 0));
        pushButton_14->setText(QApplication::translate("HouseholdElectrical", "\346\211\223\345\274\200", 0));
        label_9->setText(QApplication::translate("HouseholdElectrical", "\347\224\265\347\203\255\346\260\264\345\231\250", 0));
        pushButton_13->setText(QApplication::translate("HouseholdElectrical", "\345\205\263\351\227\255", 0));
        pushButton->setText(QApplication::translate("HouseholdElectrical", "\346\211\223\345\274\200", 0));
        warmCls->setText(QApplication::translate("HouseholdElectrical", "\345\205\263\351\227\255", 0));
        washerOpen->setText(QApplication::translate("HouseholdElectrical", "\346\211\223\345\274\200", 0));
        label_12->setText(QApplication::translate("HouseholdElectrical", "\346\264\227\350\241\243\346\234\272", 0));
        washCls->setText(QApplication::translate("HouseholdElectrical", "\345\205\263\351\227\255", 0));
        label_13->setText(QApplication::translate("HouseholdElectrical", "\346\231\276\350\241\243\346\236\266", 0));
        AcOpen->setText(QApplication::translate("HouseholdElectrical", "\346\211\223\345\274\200", 0));
        label_14->setText(QApplication::translate("HouseholdElectrical", "\347\251\272\350\260\203", 0));
        AcCls->setText(QApplication::translate("HouseholdElectrical", "\345\205\263\351\227\255", 0));
        label->setText(QApplication::translate("HouseholdElectrical", "\345\256\266\347\224\265\347\263\273\347\273\237", 0));
        refCls->setText(QApplication::translate("HouseholdElectrical", "\345\205\263\351\227\255", 0));
        label_15->setText(QApplication::translate("HouseholdElectrical", "\345\206\260\347\256\261", 0));
        refOpen->setText(QApplication::translate("HouseholdElectrical", "\346\211\223\345\274\200", 0));
        bask->setText(QApplication::translate("HouseholdElectrical", "\346\232\264\346\231\222", 0));
        shadow->setText(QApplication::translate("HouseholdElectrical", "\351\230\264\345\271\262", 0));
        hot->setText(QApplication::translate("HouseholdElectrical", "\347\203\255", 0));
        cold->setText(QApplication::translate("HouseholdElectrical", "\345\206\267", 0));
        TvCls->setText(QApplication::translate("HouseholdElectrical", "\345\205\263\351\227\255", 0));
        label_11->setText(QApplication::translate("HouseholdElectrical", "\347\224\265\350\247\206", 0));
        TvOpen->setText(QApplication::translate("HouseholdElectrical", "\346\211\223\345\274\200", 0));
        close->setText(QApplication::translate("HouseholdElectrical", "\344\270\200\351\224\256\345\205\263\351\227\255\345\256\266\347\224\265", 0));
    } // retranslateUi

};

namespace Ui {
    class HouseholdElectrical: public Ui_HouseholdElectrical {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUSEHOLDELECTRICAL_H
