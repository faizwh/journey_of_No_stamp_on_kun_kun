#include<QSettings>
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

    QSettings File("test.ini", QSettings::IniFormat);
    int sig = File.value("sound_in_game").toInt();
    bool all_si = File.value("allsi").toBool();
    int themeid= File.value("theme_id").toInt();
    output->setVolume(((float)sig)/100);
    player->setAudioOutput(output);
    if(!all_si){
        player->setSource(QUrl(beijin_music[themeid]));
    }
    //qDebug()<<"in mainwindow"<<all_si<<File.value("allsi").toInt();
    player->setLoops(-1);
    player->play();
    connect(ui->page_2, &have_a_try::backSignal, this,&MainWindow::One);

    connect(ui->page, &startpage::check_record_signal, this,&MainWindow::Two);
    connect(ui->page, &startpage::exit_signal, this,&MainWindow::close);
    connect(ui->page,&startpage::choose_signal,this,&MainWindow::Four);
    connect(ui->page,&startpage::intro_signal,this,&MainWindow::Five);

    connect(ui->page_4,&choose::normal_startSignal,this,&MainWindow::Three_normal);
    connect(ui->page_4,&choose::backSignal,this,&MainWindow::One);
    connect(ui->page_4,&choose::infi_startsignal,this,&MainWindow::Three_infinity);

    connect(ui->page_3,&firstgame::choose_signal,this,&MainWindow::Four);
    connect(ui->page_3,&firstgame::backhome_signal,this,&MainWindow::One);

    connect(ui->page_2,&have_a_try::sound_change_signal, this,&MainWindow::sound_change);
    connect(ui->page_2,&have_a_try::all_silence_signal, this,&MainWindow::all_silence_change);
    connect(ui->page_2,&have_a_try::themechange_signal,this,&MainWindow::theme_change);

    connect(ui->page_5,&introduction::back_signal,this,&MainWindow::One);
    One();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::One(){
    ui->page->grabKeyboard();
    ui->stackedWidget->setCurrentIndex(0);
    player->play();
}

void MainWindow::Two(){
    ui->page_2->grabKeyboard();
    player->stop();
    ui->stackedWidget->setCurrentIndex(1);
    ui->page_2->record_label();
}

void MainWindow::Three_normal(){
    player->stop();
    ui->page_3->grabKeyboard();
    ui->stackedWidget->setCurrentIndex(2);
    ui->page_3->mode_num=normal_mode;
    ui->page_3->initialize();

}

void MainWindow::Three_infinity(){
    player->stop();
    ui->page_3->grabKeyboard();
    ui->stackedWidget->setCurrentIndex(2);
    ui->page_3->mode_num=infinity_mode;
    ui->page_3->initialize();

}
void MainWindow::Four(){
    player->stop();
    //qDebug()<<player->mediaStatus();
    ui->page_4->grabKeyboard();
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::sound_change(){
    QSettings File("test.ini", QSettings::IniFormat);
    int sig = File.value("sound_in_game").toInt();
    output->setVolume(((float)sig)/100);
    ui->page_3->output_click->setVolume(((float)sig)/100);
    ui->page_3->output_click_2->setVolume(((float)sig)/100);
    ui->page_3->output_lose->setVolume(((float)sig)/100);
}

void MainWindow::all_silence_change(){
    QSettings File("test.ini", QSettings::IniFormat);
    bool all_si = File.value("allsi").toBool();
    int themeid= File.value("theme_id").toInt();
    if(!all_si){
        player->setSource(QUrl(beijin_music[themeid]));
        ui->page_3->theme_change();
    }
    else{
        player->setSource(QUrl(""));
        ui->page_3->player_click->setSource(QUrl(""));
        ui->page_3->player_click_2->setSource(QUrl(""));
        ui->page_3->player_lose->setSource(QUrl(""));
    }
}

void MainWindow::theme_change(){
    QSettings File("test.ini", QSettings::IniFormat);
    ui->page_3->theme_change();
    int themeid= File.value("theme_id").toInt();
    player->setSource(QUrl(beijin_music[themeid]));
    //startpage图片与音乐切换留待补充
}

void MainWindow::Five(){
    player->stop();
    ui->page_5->grabKeyboard();
    ui->stackedWidget->setCurrentIndex(4);
}
