/********************************************************************************
** Form generated from reading UI file 'viwe.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIWE_H
#define UI_VIWE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timer
{
public:
    QPushButton *Start;
    QPushButton *Pause;
    QPushButton *Reseat;
    QLabel *label;

    void setupUi(QWidget *Timer)
    {
        if (Timer->objectName().isEmpty())
            Timer->setObjectName(QString::fromUtf8("Timer"));
        Timer->resize(480, 270);
        Start = new QPushButton(Timer);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setGeometry(QRect(40, 220, 75, 24));
        Start->setCursor(QCursor(Qt::PointingHandCursor));
        Pause = new QPushButton(Timer);
        Pause->setObjectName(QString::fromUtf8("Pause"));
        Pause->setGeometry(QRect(180, 220, 91, 24));
        Pause->setCursor(QCursor(Qt::PointingHandCursor));
        Reseat = new QPushButton(Timer);
        Reseat->setObjectName(QString::fromUtf8("Reseat"));
        Reseat->setGeometry(QRect(310, 220, 75, 24));
        Reseat->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(Timer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(64, 35, 352, 130));

        retranslateUi(Timer);

        QMetaObject::connectSlotsByName(Timer);
    } // setupUi

    void retranslateUi(QWidget *Timer)
    {
        Timer->setWindowTitle(QCoreApplication::translate("Timer", "Form", nullptr));
        Start->setText(QCoreApplication::translate("Timer", "Start", nullptr));
        Pause->setText(QCoreApplication::translate("Timer", "Pause/Resume", nullptr));
        Reseat->setText(QCoreApplication::translate("Timer", "Reseat", nullptr));
        label->setText(QCoreApplication::translate("Timer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timer: public Ui_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIWE_H
