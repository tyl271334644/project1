/********************************************************************************
** Form generated from reading UI file 'tf_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TF_MENU_H
#define UI_TF_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TF_Menu
{
public:
    QLabel *label_18;
    QDateTimeEdit *StopTime1;
    QSpinBox *light_intensity;
    QLabel *label_15;
    QDateTimeEdit *StopTime2;
    QLabel *label_25;
    QDoubleSpinBox *humidity;
    QLabel *label_21;
    QLabel *label_4;
    QLabel *label_14;
    QLabel *label_23;
    QSpinBox *tem_min;
    QLabel *label_11;
    QPushButton *win_bed2;
    QLabel *label_9;
    QLabel *label_17;
    QLabel *label;
    QRadioButton *radioButton3;
    QRadioButton *radioButton1;
    QFrame *line;
    QPushButton *cur_bed1;
    QDateTimeEdit *StartTime1;
    QPushButton *win_living;
    QLabel *label_24;
    QLabel *label_12;
    QSpinBox *tem_max;
    QLabel *label_3;
    QLabel *label_8;
    QPushButton *cur_living;
    QDateTimeEdit *StartTime2;
    QPushButton *draught;
    QLabel *label_6;
    QFrame *line_2;
    QLabel *label_13;
    QPushButton *home;
    QLabel *label_16;
    QLabel *label_22;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_2;
    QPushButton *win_bed1;
    QPushButton *cur_bed2;
    QLabel *label_10;
    QRadioButton *radioButton4;
    QRadioButton *radioButton2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_26;
    QPushButton *pole_up;
    QPushButton *pole_down;
    QPushButton *pole_stop;
    QRadioButton *radioButton5;
    QRadioButton *radioButton6;
    QRadioButton *radioButton7;
    QRadioButton *radioButton8;

    void setupUi(QWidget *TF_Menu)
    {
        if (TF_Menu->objectName().isEmpty())
            TF_Menu->setObjectName(QStringLiteral("TF_Menu"));
        TF_Menu->resize(1110, 670);
        label_18 = new QLabel(TF_Menu);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(340, 370, 90, 30));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_18->setFont(font);
        StopTime1 = new QDateTimeEdit(TF_Menu);
        StopTime1->setObjectName(QStringLiteral("StopTime1"));
        StopTime1->setGeometry(QRect(430, 200, 200, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        StopTime1->setFont(font1);
        StopTime1->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        light_intensity = new QSpinBox(TF_Menu);
        light_intensity->setObjectName(QStringLiteral("light_intensity"));
        light_intensity->setGeometry(QRect(830, 380, 90, 50));
        light_intensity->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        light_intensity->setMinimum(100);
        light_intensity->setMaximum(999);
        light_intensity->setSingleStep(10);
        label_15 = new QLabel(TF_Menu);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(340, 220, 90, 30));
        label_15->setFont(font);
        StopTime2 = new QDateTimeEdit(TF_Menu);
        StopTime2->setObjectName(QStringLiteral("StopTime2"));
        StopTime2->setGeometry(QRect(780, 200, 200, 50));
        StopTime2->setFont(font1);
        StopTime2->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        label_25 = new QLabel(TF_Menu);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(930, 390, 30, 30));
        label_25->setFont(font);
        humidity = new QDoubleSpinBox(TF_Menu);
        humidity->setObjectName(QStringLiteral("humidity"));
        humidity->setGeometry(QRect(640, 380, 90, 50));
        humidity->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        humidity->setValue(55);
        label_21 = new QLabel(TF_Menu);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(540, 430, 30, 30));
        label_21->setFont(font);
        label_4 = new QLabel(TF_Menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 160, 50, 30));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_14 = new QLabel(TF_Menu);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(340, 150, 90, 30));
        label_14->setFont(font);
        label_23 = new QLabel(TF_Menu);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(810, 330, 130, 20));
        label_23->setFont(font2);
        tem_min = new QSpinBox(TF_Menu);
        tem_min->setObjectName(QStringLiteral("tem_min"));
        tem_min->setGeometry(QRect(440, 370, 90, 30));
        tem_min->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        label_11 = new QLabel(TF_Menu);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(430, 20, 131, 20));
        label_11->setFont(font2);
        win_bed2 = new QPushButton(TF_Menu);
        win_bed2->setObjectName(QStringLiteral("win_bed2"));
        win_bed2->setGeometry(QRect(230, 250, 70, 70));
        win_bed2->setStyleSheet(QStringLiteral("border-image: url(:/window.png);"));
        label_9 = new QLabel(TF_Menu);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 540, 65, 30));
        label_9->setFont(font2);
        label_17 = new QLabel(TF_Menu);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(690, 210, 90, 30));
        label_17->setFont(font);
        label = new QLabel(TF_Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 131, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        radioButton3 = new QRadioButton(TF_Menu);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));
        radioButton3->setGeometry(QRect(740, 100, 70, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        radioButton3->setFont(font4);
        radioButton1 = new QRadioButton(TF_Menu);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setGeometry(QRect(390, 100, 70, 30));
        radioButton1->setFont(font4);
        line = new QFrame(TF_Menu);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(320, 20, 20, 571));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        cur_bed1 = new QPushButton(TF_Menu);
        cur_bed1->setObjectName(QStringLiteral("cur_bed1"));
        cur_bed1->setGeometry(QRect(130, 70, 70, 70));
        cur_bed1->setStyleSheet(QStringLiteral("border-image: url(:/curtain.png);"));
        StartTime1 = new QDateTimeEdit(TF_Menu);
        StartTime1->setObjectName(QStringLiteral("StartTime1"));
        StartTime1->setGeometry(QRect(430, 140, 200, 50));
        StartTime1->setFont(font1);
        StartTime1->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        win_living = new QPushButton(TF_Menu);
        win_living->setObjectName(QStringLiteral("win_living"));
        win_living->setGeometry(QRect(30, 250, 70, 70));
        win_living->setStyleSheet(QStringLiteral("border-image: url(:/window.png);"));
        label_24 = new QLabel(TF_Menu);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(740, 390, 30, 30));
        label_24->setFont(font);
        label_12 = new QLabel(TF_Menu);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(760, 20, 130, 20));
        label_12->setFont(font2);
        tem_max = new QSpinBox(TF_Menu);
        tem_max->setObjectName(QStringLiteral("tem_max"));
        tem_max->setGeometry(QRect(440, 430, 90, 30));
        tem_max->setStyleSheet(QStringLiteral("background-color: rgb(234, 234, 234);"));
        label_3 = new QLabel(TF_Menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 160, 50, 30));
        label_3->setFont(font2);
        label_8 = new QLabel(TF_Menu);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 490, 50, 30));
        label_8->setFont(font2);
        cur_living = new QPushButton(TF_Menu);
        cur_living->setObjectName(QStringLiteral("cur_living"));
        cur_living->setGeometry(QRect(30, 70, 70, 70));
        cur_living->setStyleSheet(QStringLiteral("border-image: url(:/curtain.png);"));
        StartTime2 = new QDateTimeEdit(TF_Menu);
        StartTime2->setObjectName(QStringLiteral("StartTime2"));
        StartTime2->setGeometry(QRect(780, 140, 200, 50));
        StartTime2->setFont(font1);
        StartTime2->setStyleSheet(QLatin1String("background-color: rgb(234, 234, 234);\n"
"\n"
""));
        draught = new QPushButton(TF_Menu);
        draught->setObjectName(QStringLiteral("draught"));
        draught->setGeometry(QRect(60, 400, 70, 70));
        draught->setStyleSheet(QStringLiteral("border-image: url(:/fan.png);"));
        label_6 = new QLabel(TF_Menu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 320, 50, 30));
        label_6->setFont(font2);
        line_2 = new QFrame(TF_Menu);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(340, 280, 681, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(TF_Menu);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(420, 330, 130, 20));
        label_13->setFont(font2);
        home = new QPushButton(TF_Menu);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(200, 400, 70, 70));
        home->setFont(font2);
        home->setStyleSheet(QStringLiteral("border-image: url(:/menu.png);"));
        label_16 = new QLabel(TF_Menu);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(690, 150, 90, 30));
        label_16->setFont(font);
        label_22 = new QLabel(TF_Menu);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(630, 330, 130, 20));
        label_22->setFont(font2);
        label_19 = new QLabel(TF_Menu);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(340, 430, 90, 30));
        label_19->setFont(font);
        label_20 = new QLabel(TF_Menu);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(540, 370, 30, 30));
        label_20->setFont(font);
        label_2 = new QLabel(TF_Menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 160, 50, 30));
        label_2->setFont(font2);
        win_bed1 = new QPushButton(TF_Menu);
        win_bed1->setObjectName(QStringLiteral("win_bed1"));
        win_bed1->setGeometry(QRect(130, 250, 70, 70));
        win_bed1->setStyleSheet(QStringLiteral("border-image: url(:/window.png);"));
        cur_bed2 = new QPushButton(TF_Menu);
        cur_bed2->setObjectName(QStringLiteral("cur_bed2"));
        cur_bed2->setGeometry(QRect(230, 70, 70, 70));
        cur_bed2->setStyleSheet(QStringLiteral("border-image: url(:/curtain.png);"));
        label_10 = new QLabel(TF_Menu);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 490, 65, 30));
        label_10->setFont(font2);
        radioButton4 = new QRadioButton(TF_Menu);
        radioButton4->setObjectName(QStringLiteral("radioButton4"));
        radioButton4->setGeometry(QRect(830, 100, 70, 30));
        radioButton4->setFont(font4);
        radioButton2 = new QRadioButton(TF_Menu);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        radioButton2->setGeometry(QRect(510, 100, 70, 30));
        radioButton2->setFont(font4);
        radioButton2->setAcceptDrops(false);
        radioButton2->setChecked(true);
        label_7 = new QLabel(TF_Menu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 320, 50, 30));
        label_7->setFont(font2);
        label_5 = new QLabel(TF_Menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 320, 50, 30));
        label_5->setFont(font2);
        label_26 = new QLabel(TF_Menu);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(520, 490, 50, 50));
        label_26->setStyleSheet(QStringLiteral("border-image: url(:/hanger.png);"));
        pole_up = new QPushButton(TF_Menu);
        pole_up->setObjectName(QStringLiteral("pole_up"));
        pole_up->setGeometry(QRect(620, 500, 70, 70));
        pole_up->setStyleSheet(QStringLiteral("border-image: url(:/up.png);"));
        pole_down = new QPushButton(TF_Menu);
        pole_down->setObjectName(QStringLiteral("pole_down"));
        pole_down->setGeometry(QRect(720, 500, 70, 70));
        pole_down->setStyleSheet(QStringLiteral("border-image: url(:/down.png);"));
        pole_stop = new QPushButton(TF_Menu);
        pole_stop->setObjectName(QStringLiteral("pole_stop"));
        pole_stop->setGeometry(QRect(820, 500, 70, 70));
        pole_stop->setStyleSheet(QStringLiteral("border-image: url(:/stop.png);"));
        radioButton5 = new QRadioButton(TF_Menu);
        radioButton5->setObjectName(QStringLiteral("radioButton5"));
        radioButton5->setGeometry(QRect(390, 60, 120, 30));
        radioButton5->setFont(font4);
        radioButton6 = new QRadioButton(TF_Menu);
        radioButton6->setObjectName(QStringLiteral("radioButton6"));
        radioButton6->setGeometry(QRect(510, 60, 70, 30));
        radioButton6->setFont(font4);
        radioButton7 = new QRadioButton(TF_Menu);
        radioButton7->setObjectName(QStringLiteral("radioButton7"));
        radioButton7->setGeometry(QRect(740, 60, 70, 30));
        radioButton7->setFont(font4);
        radioButton8 = new QRadioButton(TF_Menu);
        radioButton8->setObjectName(QStringLiteral("radioButton8"));
        radioButton8->setGeometry(QRect(830, 60, 70, 30));
        radioButton8->setFont(font4);

        retranslateUi(TF_Menu);

        QMetaObject::connectSlotsByName(TF_Menu);
    } // setupUi

    void retranslateUi(QWidget *TF_Menu)
    {
        TF_Menu->setWindowTitle(QApplication::translate("TF_Menu", "TF_Menu", 0));
        label_18->setText(QApplication::translate("TF_Menu", "\346\234\200\344\275\216\346\270\251\345\272\246\357\274\232", 0));
        label_15->setText(QApplication::translate("TF_Menu", "\345\205\263\351\227\255\346\227\266\351\227\264\357\274\232", 0));
        label_25->setText(QApplication::translate("TF_Menu", "Lx", 0));
        label_21->setText(QApplication::translate("TF_Menu", "\342\204\203", 0));
        label_4->setText(QApplication::translate("TF_Menu", "\346\254\241\345\215\247", 0));
        label_14->setText(QApplication::translate("TF_Menu", "\345\274\200\345\220\257\346\227\266\351\227\264\357\274\232", 0));
        label_23->setText(QApplication::translate("TF_Menu", "\345\205\211\345\274\272\351\230\210\345\200\274\350\256\276\345\256\232", 0));
        label_11->setText(QApplication::translate("TF_Menu", "\347\252\227\345\270\230\345\256\232\346\227\266", 0));
        win_bed2->setText(QString());
        label_9->setText(QApplication::translate("TF_Menu", "\346\231\276\350\241\243\346\235\206", 0));
        label_17->setText(QApplication::translate("TF_Menu", "\345\205\263\351\227\255\346\227\266\351\227\264\357\274\232", 0));
        label->setText(QApplication::translate("TF_Menu", "\351\200\232\351\243\216\347\263\273\347\273\237", 0));
        radioButton3->setText(QApplication::translate("TF_Menu", "\345\274\200\345\220\257", 0));
        radioButton1->setText(QApplication::translate("TF_Menu", "\345\274\200\345\220\257", 0));
        cur_bed1->setText(QString());
        win_living->setText(QString());
        label_24->setText(QApplication::translate("TF_Menu", "%", 0));
        label_12->setText(QApplication::translate("TF_Menu", "\347\252\227\346\210\267\345\256\232\346\227\266", 0));
        label_3->setText(QApplication::translate("TF_Menu", "\344\270\273\345\215\247", 0));
        label_8->setText(QApplication::translate("TF_Menu", "\351\243\216\346\234\272", 0));
        cur_living->setText(QString());
        draught->setText(QString());
        label_6->setText(QApplication::translate("TF_Menu", "\344\270\273\345\215\247", 0));
        label_13->setText(QApplication::translate("TF_Menu", "\346\270\251\345\272\246\350\214\203\345\233\264\350\256\276\345\256\232", 0));
        home->setText(QString());
        label_16->setText(QApplication::translate("TF_Menu", "\345\274\200\345\220\257\346\227\266\351\227\264\357\274\232", 0));
        label_22->setText(QApplication::translate("TF_Menu", "\346\271\277\345\272\246\351\230\210\345\200\274\350\256\276\345\256\232", 0));
        label_19->setText(QApplication::translate("TF_Menu", "\346\234\200\351\253\230\346\270\251\345\272\246\357\274\232", 0));
        label_20->setText(QApplication::translate("TF_Menu", "\342\204\203", 0));
        label_2->setText(QApplication::translate("TF_Menu", "\345\256\242\345\216\205", 0));
        win_bed1->setText(QString());
        cur_bed2->setText(QString());
        label_10->setText(QApplication::translate("TF_Menu", "\344\270\273\350\217\234\345\215\225", 0));
        radioButton4->setText(QApplication::translate("TF_Menu", "\345\205\263\351\227\255", 0));
        radioButton2->setText(QApplication::translate("TF_Menu", "\345\205\263\351\227\255", 0));
        label_7->setText(QApplication::translate("TF_Menu", "\346\254\241\345\215\247", 0));
        label_5->setText(QApplication::translate("TF_Menu", "\345\256\242\345\216\205", 0));
        label_26->setText(QString());
        pole_up->setText(QString());
        pole_down->setText(QString());
        pole_stop->setText(QString());
        radioButton5->setText(QApplication::translate("TF_Menu", "\345\256\242\345\216\205", 0));
        radioButton6->setText(QApplication::translate("TF_Menu", "\345\215\247\345\256\244", 0));
        radioButton7->setText(QApplication::translate("TF_Menu", "\345\256\242\345\216\205", 0));
        radioButton8->setText(QApplication::translate("TF_Menu", "\345\215\247\345\256\244", 0));
    } // retranslateUi

};

namespace Ui {
    class TF_Menu: public Ui_TF_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TF_MENU_H
