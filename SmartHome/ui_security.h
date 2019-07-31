/********************************************************************************
** Form generated from reading UI file 'security.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITY_H
#define UI_SECURITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Security
{
public:
    QPushButton *backMain;
    QLabel *label;
    QPushButton *pushButton_8;
    QLabel *label_3;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Security)
    {
        if (Security->objectName().isEmpty())
            Security->setObjectName(QString::fromUtf8("Security"));
        Security->resize(1100, 700);
        backMain = new QPushButton(Security);
        backMain->setObjectName(QString::fromUtf8("backMain"));
        backMain->setGeometry(QRect(960, 640, 100, 40));
        label = new QLabel(Security);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 30, 111, 31));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Academy Engraved LET\";"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_8 = new QPushButton(Security);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(230, 300, 61, 28));
        label_3 = new QLabel(Security);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 340, 72, 15));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_7 = new QPushButton(Security);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(300, 300, 61, 28));

        retranslateUi(Security);

        QMetaObject::connectSlotsByName(Security);
    } // setupUi

    void retranslateUi(QDialog *Security)
    {
        Security->setWindowTitle(QCoreApplication::translate("Security", "Dialog", nullptr));
        backMain->setText(QCoreApplication::translate("Security", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("Security", "\345\256\211\351\230\262\347\263\273\347\273\237", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Security", "\346\211\223\345\274\200", nullptr));
        label_3->setText(QCoreApplication::translate("Security", "\351\227\250\351\224\201", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Security", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Security: public Ui_Security {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITY_H
