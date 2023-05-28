#include "firstgame.h"
#include "ui_firstgame.h"
#include <QPalette>
#include<QTime>
#include<QTimer>
#include<iostream>
#include <QPropertyAnimation>
firstgame::firstgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::firstgame)
{
    ui->setupUi(this);
}

firstgame::~firstgame()
{
    delete ui;
}

void firstgame::startSlot(){
    emit start_signal();
};

void firstgame::initialize(){

    QTime time= QTime::currentTime();
    srand(time.msec()+time.second()*1000);

    for(int i=0;i<5;++i){
        int n=rand()%6;
        for(int j=0;j<6;++j){
            if(j==n){
                blocks[i*6+j]=new QLabel(this);
                blocks[i*6+j]->setScaledContents(true);
                blocks[i*6+j]->setStyleSheet("border-image: url(:/kunkun_block.jpg);");
                blocks[i*6+j]->setGeometry(270+((i*6+j)%6)*130,40+(i*6+j)/6*115,125,110);
                //label->setGeometry(x,y,width,height)(x,y)是左上角的坐标
                blocks[i*6+j]->show();
            }
            else{
                blocks[i*6+j]=new QLabel(this);
                blocks[i*6+j]->setScaledContents(true);
                blocks[i*6+j]->setStyleSheet("border-image: url(:/faiz_block.jpg);");
                blocks[i*6+j]->setGeometry(270+((i*6+j)%6)*130,40+(i*6+j)/6*115,125,110);
                blocks[i*6+j]->show();
            }
        }
    }
}

void firstgame::on_restart_clicked()
{
    ui->restart->setEnabled(false);
    for(int i=0;i<30;++i){
        if(blocks[i]!=nullptr){
            delete blocks[i];
        }
    }
    initialize();

    QTimer::singleShot(100,this,[this](){
        QPropertyAnimation *animation = new QPropertyAnimation(ui->restart, "opacity");
        // 设置动画的持续时间为500毫秒
        animation->setDuration(500);
        // 设置动画的起始值为1.0（完全不透明）
        animation->setStartValue(1.0);
        // 设置动画的结束值为0.0（完全透明）
        animation->setEndValue(0.0);
        // 启动动画
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        // 执行一些耗时操作
        // 创建一个QPropertyAnimation对象，设置动画目标为按钮的透明度属性
        QPropertyAnimation *animation2 = new QPropertyAnimation(ui->restart, "opacity");
        // 设置动画的持续时间为500毫秒
        animation2->setDuration(500);
        // 设置动画的起始值为0.0（完全透明）
        animation2->setStartValue(0.0);
        // 设置动画的结束值为1.0（完全不透明）
        animation2->setEndValue(1.0);
        // 启动动画
        animation2->start(QAbstractAnimation::DeleteWhenStopped);
        ui->restart->setEnabled(true);
    });
}

