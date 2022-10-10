#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include<string>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
     ui->setupUi(this);
     timer = new QTimer(this);
     ui->Pause->setDisabled(1);
     ui->Pause->setStyleSheet("QPushButton{\
                              background:#F2784B;\
                                color: #D9D9D9}");
     connect(ui->Start, &QPushButton::released, this, &Widget::start);
     connect(ui->Pause, &QPushButton::released, this, &Widget::pause);
     connect(ui->Reseat, &QPushButton::released, this, &Widget::reseat);
     connect(timer, &QTimer::timeout, this, QOverload<>::of(&Widget::count));
     color();
       setFixedSize(480, 270);
}

Widget::~Widget()
{
    delete ui;
}

void Widget:: start(){

    ui->Start->setDisabled(1);
    ui->Start->setStyleSheet("QPushButton{\
                             background:#F2784B;\
                               color: #D9D9D9}");
    ui->Pause->setDisabled(0);
    ui->Pause->setStyleSheet("QPushButton{\
                             background:#F2594B;\
                               color: #D9D9D9}");
    timer->start(100);


}

void Widget::pause(){
    if(resume==0){
        resume=1;
        timer->stop();
    }
    else{
        resume=0;
        timer->start(100);
    }

}

void Widget::reseat(){
    timer->stop();
    ui->Timer->setText("00:00.0");
    ui->Pause->setDisabled(1);
    ui->Pause->setStyleSheet("QPushButton{\
                             background:#F2784B;\
                               color: #D9D9D9}");
    ui->Start->setDisabled(0);
    ui->Start->setStyleSheet("QPushButton{\
                             background:#F2594B;\
                               color: #D9D9D9}");
}


void Widget::color(){

    ui->frame->setStyleSheet("QFrame{\
                                 background:#262626;\
                                }\
                              QPushButton{\
                                      background:#F2594B;\
                                        color: #D9D9D9}\
                                    QLabel{\
                                           color: #D9D9D9\
                                       }");

}

using namespace std;
void Widget::count(){
    //00:00.0
    string str = ui->Timer->text().toStdString();
    if(str[6]=='9'){
        str[6]='0';
        if(str[4]=='9'){
            str[4]='0';
            if(str[3]=='5'){
                str[3]='0';
                if(str[1]=='9'){
                    str[1]='0';
                    if(str[0]=='5'){
                        str[0]='0';
                    }
                    else {
                        str[0]++;
                    }

                }
                else {
                    str[1]++;
                }

            }
            else {
                str[3]++;
            }

        }
        else {
            str[4]++;
        }

    }
    else {
        str[6]++;
    }

    ui->Timer->setText(QString::fromLocal8Bit(str.c_str()));
}
