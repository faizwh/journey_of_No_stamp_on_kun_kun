
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <ui_startpage.h>
#include<choose.h>
#include<ui_choose.h>
#include<firstgame.h>
#include<ui_firstgame.h>
#include<QMediaPlayer>
#include<QAudioOutput>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player=new QMediaPlayer(this);
    output=new QAudioOutput(this);
    player->setAudioOutput(output);
    player->setSource(QUrl("qrc:/new/kuang/kunkun's music.mp3"));
    player->setLoops(-1);
    player->play();
    connect(ui->page_2, &have_a_try::backSignal, this,&MainWindow::One);
    connect(ui->page, &startpage::check_record_signal, this,&MainWindow::Two);
    connect(ui->page, &startpage::exit_signal, this,&MainWindow::close);
    connect(ui->page,&startpage::choose_signal,this,&MainWindow::Four);
    connect(ui->page_4,&choose::normal_startSignal,this,&MainWindow::Three);
    connect(ui->page_4,&choose::backSignal,this,&MainWindow::One);
    connect(ui->page_3,&firstgame::choose_signal,this,&MainWindow::Four);
    connect(ui->page_3,&firstgame::backhome_signal,this,&MainWindow::One);
    One();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::One(){
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::Two(){
    ui->stackedWidget->setCurrentIndex(1);
    ui->page_2->record_label();
}

void MainWindow::Three(){
    ui->stackedWidget->setCurrentIndex(2);
    ui->page_3->initialize();
}

void MainWindow::Four(){
    player->stop();
    ui->stackedWidget->setCurrentIndex(3);
}
