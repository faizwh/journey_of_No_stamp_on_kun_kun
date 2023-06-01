#include "firstgame.h"
#include "ui_firstgame.h"
#include <QPalette>
#include<QTime>
#include<QTimer>
#include<iostream>
#include <QPropertyAnimation>
#include <QPalette>
#include <QParallelAnimationGroup>
#include<QGraphicsView>
#include<QGraphicsScene>
#include <QMediaPlayer>
#include <QKeyEvent>
QMediaPlayer* laohan=new QMediaPlayer;
firstgame::firstgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::firstgame)
{
    ui->setupUi(this);
    for(int i=0;i<30;++i){
        blocks[i]=nullptr;
    }
    for(int i=0;i<6;++i){
        temp[i]=nullptr;
    }
    this->setFocusPolicy(Qt::StrongFocus);
    this->grabKeyboard();
}

firstgame::~firstgame()
{
    delete ui;
}

void firstgame::startSlot(){
    emit start_signal();
};

void firstgame::initialize(){
    counter=0;
    ui->score_label->setText(QString::number(counter));
    QTime time= QTime::currentTime();
    srand(time.msec()+time.second()*1000);

    for(int i=0;i<5;++i){
        int n=rand()%6;
        for(int j=0;j<6;++j){
            if(j==n){
                blocks[i*6+j]=new QLabel(this);
                blocks_if[i*6+j]=true;
                blocks[i*6+j]->setScaledContents(true);
                blocks[i*6+j]->setAutoFillBackground(true);
                blocks[i*6+j]->setStyleSheet("QLabel{background-color:rgb(0,0,0);}");  //设置样式表
                blocks[i*6+j]->setStyleSheet("image: url(:/kunkun_block.jpg);");
                blocks[i*6+j]->setGeometry(270+((i*6+j)%6)*xdis,40+(i*6+j)/6*ydis,blockwidth,blockheight);
                //label->setGeometry(x,y,width,height)(x,y)是左上角的坐标
                blocks[i*6+j]->lower();
                blocks[i*6+j]->show();
            }
            else{
                blocks[i*6+j]=new QLabel(this);
                blocks_if[i*6+j]=false;
                blocks[i*6+j]->setScaledContents(true);
                blocks[i*6+j]->setStyleSheet("QLabel{background-color:rgb(0,0,0);}");  //设置样式表
                blocks[i*6+j]->setStyleSheet("image: url(:/faiz_block.jpg);");
                blocks[i*6+j]->setGeometry(270+((i*6+j)%6)*xdis,40+(i*6+j)/6*ydis,blockwidth,blockheight);
                blocks[i*6+j]->lower();
                blocks[i*6+j]->show();
            }
        }
    }
    int n=rand()%6;
    for(int j=0;j<6;++j){
        if(j==n){
            temp[j]=new QLabel(this);
            temp_if[j]=true;
            temp[j]->setScaledContents(true);
            temp[j]->setAutoFillBackground(true);
            temp[j]->setStyleSheet("QLabel{background-color:rgb(0,0,0);}");  //设置样式表
            temp[j]->setStyleSheet("image: url(:/kunkun_block.jpg);");
            temp[j]->setGeometry(270+j*xdis,40-ydis,blockwidth,blockheight);
            //label->setGeometry(x,y,width,height)(x,y)是左上角的坐标
            temp[j]->lower();
            temp[j]->show();
        }
        else{
            temp[j]=new QLabel(this);
            temp_if[j]=false;
            temp[j]->setScaledContents(true);
            temp[j]->setStyleSheet("QLabel{background-color:rgb(0,0,0);}");  //设置样式表
            temp[j]->setStyleSheet("image: url(:/faiz_block.jpg);");
            temp[j]->setGeometry(270+j*xdis,40-ydis,blockwidth,blockheight);
            temp[j]->lower();
            temp[j]->show();
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
    for(int i=0;i<6;++i){
        if(temp[i]!=nullptr){
            delete temp[i];
        }
    }
    initialize();
    //if数组们都得到了覆写，所以不需要初始化
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

void firstgame::move(){
    setEnabled(false);
    QTime time= QTime::currentTime();
    srand(time.msec()+time.second()*1000);
    int n=rand()%6;
    for(int j=0;j<6;++j){
        if(j==n){
            temp2[j]=new QLabel(this);
            temp2_if[j]=true;
            temp2[j]->setScaledContents(true);
            temp2[j]->setAutoFillBackground(true);
            temp2[j]->setStyleSheet("QLabel{background-color:rgb(0,0,0);}");  //设置样式表
            temp2[j]->setStyleSheet("image: url(:/kunkun_block.jpg);");
            temp2[j]->setGeometry(270+j*xdis,40-ydis*2,blockwidth,blockheight);
            //label->setGeometry(x,y,width,height)(x,y)是左上角的坐标
            temp2[j]->lower();
            temp2[j]->show();
        }
        else{
            temp2[j]=new QLabel(this);
            temp2_if[j]=false;
            temp2[j]->setScaledContents(true);
            temp2[j]->setStyleSheet("QLabel{background-color:rgb(0,0,0);}");  //设置样式表
            temp2[j]->setStyleSheet("image: url(:/faiz_block.jpg);");
            temp2[j]->setGeometry(270+j*xdis,40-ydis*2,blockwidth,blockheight);
            temp2[j]->lower();
            temp2[j]->show();
        }
    }
    QParallelAnimationGroup *group = new QParallelAnimationGroup;
    for (int i = 0; i < 30; ++i) {
        QPropertyAnimation *animation = new QPropertyAnimation(blocks[i], "pos");
        animation->setDuration(50); // 动画持续时间为0.1秒
        animation->setStartValue(blocks[i]->pos()); // 起始位置为当前位置
        animation->setEndValue(QPoint(blocks[i]->pos().x(), blocks[i]->pos().y()+120)); // 结束位置为(i * 20, 200)
        if(i>=24){
           connect(animation, &QPropertyAnimation::finished, blocks[i], &QLabel::deleteLater);
        }
        group->addAnimation(animation); // 添加到动画组中
    }
    for (int i = 0; i < 6; ++i) {
        QPropertyAnimation *animation = new QPropertyAnimation(temp[i], "pos");
        animation->setDuration(50); // 动画持续时间为0.1秒
        animation->setStartValue(temp[i]->pos()); // 起始位置为当前位置
        animation->setEndValue(QPoint(temp[i]->pos().x(), temp[i]->pos().y()+120)); // 结束位置为(i * 20, 200)
        group->addAnimation(animation); // 添加到动画组中
    }
    for (int i = 0; i < 6; ++i) {
        QPropertyAnimation *animation = new QPropertyAnimation(temp2[i], "pos");
        animation->setDuration(50); // 动画持续时间为0.1秒
        animation->setStartValue(temp2[i]->pos()); // 起始位置为当前位置
        animation->setEndValue(QPoint(temp2[i]->pos().x(), temp2[i]->pos().y()+120)); //
        group->addAnimation(animation); // 添加到动画组中
    }
    group->start(); // 启动所有动画
    for(int i=23;i>=0;--i){
        blocks[i+6]=blocks[i];
        blocks_if[i+6]=blocks_if[i];
    }
    for(int i=5;i>=0;--i){
        blocks[i]=temp[i];
        blocks_if[i]=temp_if[i];
        temp[i]=temp2[i];
        temp_if[i]=temp2_if[i];
    }
    //有待补充键盘禁用等等细节
    qDebug() <<"Move";
    setEnabled(true);
}

void firstgame::keyPressEvent(QKeyEvent *event){
    if(pressable){
        //qDebug() <<pressable;
        pressable=false;
        event->accept();
    switch (event->key())
    {
    case Qt::Key_A:
        event->accept();
        //qDebug() <<"A_press";
        if(blocks_if[24]){
            //留待添加音效
            move();
            ++counter;
            ui->score_label->setText(QString::number(counter));
        }
        else{
            qDebug() <<"Lose";
        }
        break;
    // A键
    case Qt::Key_S:
        event->accept();
        //qDebug() <<"S_press";
        if(blocks_if[25]){
            //留待添加音效
            move();
            ++counter;
            ui->score_label->setText(QString::number(counter));
        }
        else{
            qDebug() <<"Lose";
        }
        break;
    // F1键
    case Qt::Key_D:
        event->accept();
        //qDebug() <<"D_press";
        if(blocks_if[26]){
            //留待添加音效
            move();
            ++counter;
            ui->score_label->setText(QString::number(counter));
        }
        else{
            qDebug() <<"Lose";
        }
        break;
    case Qt::Key_J:
        event->accept();
        //qDebug() <<"J_press";
        if(blocks_if[27]){
            //留待添加音效
            move();
            ++counter;
            ui->score_label->setText(QString::number(counter));
        }
        else{
            qDebug() <<"Lose";
        }
        break;

    case Qt::Key_K:
        event->accept();
        //qDebug() <<"K_press";
        if(blocks_if[28]){
        //留待添加音效
            move();
            ++counter;
            ui->score_label->setText(QString::number(counter));
        }
        else{
            qDebug() <<"Lose";
        }
        break;
    case Qt::Key_L:
        event->accept();
        //qDebug() <<"L_press";
        if(blocks_if[29]){
            //留待添加音效
            move();
            ++counter;
            ui->score_label->setText(QString::number(counter));
        }
        else{
            qDebug() <<"Lose";
        }
        break;
    }
    }
    else{
    //qDebug() <<pressable;
    event->ignore();
    }
}

void firstgame::keyReleaseEvent(QKeyEvent* event){
    if(!event->isAutoRepeat()){
    if(!pressable){
    qDebug() <<"release";
    qDebug() <<pressable;
    pressable=true;
    }
    }
}
