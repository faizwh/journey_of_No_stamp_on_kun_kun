#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <ui_startpage.h>
#include<Qtime>
startpage::startpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startpage)
{
    ui->setupUi(this);
    ui->speak->setText("你只能看到我一眼，因为再多....");
    connect(ui->check_record, &QPushButton::clicked, this, &startpage::checkSlot);
    connect(ui->exit, &QPushButton::clicked, this, &startpage::exitSlot);

}

startpage::~startpage()
{
    delete ui;
}

void startpage::on_communication_clicked()
{
    QTime time= QTime::currentTime();
    srand(time.msec()+time.second()*1000);
    int n=rand()%80;
    bool yes=0;
    while(!yes){
        if(n%8==0&&ui->speak->text()!="你干嘛~哎呦"){
            ui->speak->setText("你干嘛~哎呦");
            yes=true;
        }
        else if(n%8==1&&ui->speak->text()!="厉不厉害你坤哥"){
            ui->speak->setText("厉不厉害你坤哥");
            yes=true;
        }
        else if(n%8==2&&ui->speak->text()!="其实我平常很厉害的你知道吗"){
            ui->speak->setText("其实我平常很厉害的你知道吗");
            yes=true;
        }
        else if(n%8==3&&ui->speak->text()!="油饼食不食"){
            ui->speak->setText("油饼食不食");
            yes=true;
        }
        else if(n%8==4&&ui->speak->text()!="平心而论，感觉不如原神"){
            ui->speak->setText("平心而论，感觉不如原神");
            yes=true;
        }
        else if(n%8==5&&ui->speak->text()!="真ikun，你已经很努力了"){
            ui->speak->setText("真ikun，你已经很努力了");
            yes=true;
        }
        else if(n%8==6&&ui->speak->text()!="不好奇这里为什么字体不一样吗？鸽鸽担心有的ikun文化没和初中生同步"){
            ui->speak->setText("不好奇这里为什么字体不一样吗？鸽鸽担心有人文化没和初中生同步");
            yes=true;
        }
        else if(n%8==7&&ui->speak->text()!="ikun们，成为他，而不是等待他！"){
            ui->speak->setText("ikun们，成为他，而不是等待他！");
            yes=true;
        }
        else{
            n=rand()%80;
        }
    }
}


void startpage::checkSlot(){
    emit check_record_signal();
};

void startpage::exitSlot(){
    emit exit_signal();
}
