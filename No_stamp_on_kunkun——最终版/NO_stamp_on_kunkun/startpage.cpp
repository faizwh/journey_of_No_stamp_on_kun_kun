#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <ui_startpage.h>
#include<choose.h>
#include<ui_choose.h>
#include<Qtime>
startpage::startpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startpage)
{
    ui->setupUi(this);
    ui->speak->setText("欢迎来到别踩坤坤！");
    connect(ui->check_record, &QPushButton::clicked, this, &startpage::checkSlot);
    connect(ui->exit, &QPushButton::clicked, this, &startpage::exitSlot);
    connect(ui->gamestart,&QPushButton::clicked,this,&startpage::gamestartSlot);
    have_confess=0;
}

startpage::~startpage()
{
    delete ui;
}

void startpage::on_communication_clicked()
{
    if(!have_confess){
        have_confess=1;
        ui->speak->setText("其实本来想在这里放游戏说明的，还是请你点开右边的按钮看一下吧");
        return;
    }
    if(have_confess==1){
        have_confess=2;
        ui->speak->setText("前面这些话只能看到一眼，因为再多看一眼......");
        return;
    }
    QTime time= QTime::currentTime();
    srand(time.msec()+time.second()*1000);
    int n=rand()%90;
    bool yes=0;
    while(!yes){
        if(n%10==0&&ui->speak->text()!="你干嘛~哎呦"){
            ui->speak->setText("你干嘛~哎呦");
            yes=true;
        }
        else if(n%10==1&&ui->speak->text()!="厉不厉害你坤哥"){
            ui->speak->setText("厉不厉害你坤哥");
            yes=true;
        }
        else if(n%10==2&&ui->speak->text()!="其实我平常很厉害的你知道吗"){
            ui->speak->setText("其实我平常很厉害的你知道吗");
            yes=true;
        }
        else if(n%10==3&&ui->speak->text()!="油饼食不食"){
            ui->speak->setText("油饼食不食");
            yes=true;
        }
        else if(n%10==4&&ui->speak->text()!="平心而论，感觉不如原神"){
            ui->speak->setText("平心而论，感觉不如原神");
            yes=true;
        }
        else if(n%10==5&&ui->speak->text()!="真ikun，你已经很努力了"){
            ui->speak->setText("真ikun，你已经很努力了");
            yes=true;
        }
        else if(n%10==6&&ui->speak->text()!="不好奇这里为什么字体不一样吗？鸽鸽担心有的ikun文化没和初中生同步"){
            ui->speak->setText("不好奇这里为什么字体不一样吗？鸽鸽担心有人文化没和初中生同步");
            yes=true;
        }
        else if(n%10==7&&ui->speak->text()!="ikun们，成为他，而不是等待他！"){
            ui->speak->setText("ikun们，成为他，而不是等待他！");
            yes=true;
        }
        else if(n%10==8&&ui->speak->text()!="其实右边没个游戏的大标题也挺不好的，可实在找不到一个合适的样式了"){
            ui->speak->setText("其实右边没个游戏的大标题也挺不好的，可实在找不到一个合适的样式了");
            yes=true;
        }
        else if(n%10==9&&ui->speak->text()!="我想告诉你，别让你的人生糊弄糊弄就过去了，有些气是不能咽下去的"){
            ui->speak->setText("我想告诉你，别让你的人生糊弄糊弄就过去了，有些气是不能咽下去的");
            yes=true;
        }
        else{
            n=rand()%90;
        }
    }
}


void startpage::checkSlot(){
    emit check_record_signal();
}

void startpage::exitSlot(){
    emit exit_signal();
}

void startpage::gamestartSlot(){
    emit choose_signal();
}

void startpage::on_pushButton_clicked()
{
    emit intro_signal();
}

