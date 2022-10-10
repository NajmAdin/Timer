/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame;
    QLabel *Timer;
    QPushButton *Start;
    QPushButton *Pause;
    QPushButton *Reseat;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(480, 270);
        frame = new QFrame(Widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 480, 270));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Timer = new QLabel(frame);
        Timer->setObjectName(QString::fromUtf8("Timer"));
        Timer->setGeometry(QRect(64, 35, 352, 130));
        QFont font;
        font.setPointSize(85);
        Timer->setFont(font);
        Start = new QPushButton(frame);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setGeometry(QRect(64, 220, 75, 24));
        Start->setCursor(QCursor(Qt::PointingHandCursor));
        Pause = new QPushButton(frame);
        Pause->setObjectName(QString::fromUtf8("Pause"));
        Pause->setGeometry(QRect(204, 220, 90, 24));
        Pause->setCursor(QCursor(Qt::PointingHandCursor));
        Reseat = new QPushButton(frame);
        Reseat->setObjectName(QString::fromUtf8("Reseat"));
        Reseat->setGeometry(QRect(341, 220, 75, 24));
        Reseat->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Timer->setText(QCoreApplication::translate("Widget", "00:00.0", nullptr));
        Start->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        Pause->setText(QCoreApplication::translate("Widget", "Pause/Resume", nullptr));
        Reseat->setText(QCoreApplication::translate("Widget", "Reseat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
