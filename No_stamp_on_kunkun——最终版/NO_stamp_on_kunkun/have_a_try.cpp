#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <ui_startpage.h>
#include <QSettings>
#include<mainwindow.h>

have_a_try::have_a_try(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::have_a_try)
{
    ui->setupUi(this);
    connect(ui->goback, &QPushButton::clicked, this, &have_a_try::backSlot);
    ui->sound_slider->setMinimum(0);
    ui->sound_slider->setMaximum(100);
    QSettings File("test.ini", QSettings::IniFormat);
    int sig = File.value("sound_in_game").toInt();
    ui->sound_slider->setValue(sig);
    ui->showsound->setText(tr("游戏内音量：%1").arg(sig));
    connect(ui->sound_slider,&QSlider::valueChanged,this,&have_a_try::soundchange);
    label1=nullptr,label2=nullptr;
    bool all_si = File.value("allsi").toBool();
    ui->radioButton->setChecked(all_si);
    //qDebug()<<"in have_a_try"<<all_si;

    int first = File.value("first").toInt();
    float infi_socre= File.value("infi_score").toFloat();
    label1 = new QLabel(this);
    label1->move(310,110);
    label1->setFixedSize(400, 26);
    QFont font = QFont("华文行楷", 20);
    label1->setFont(font);
    label1->setStyleSheet("QLabel{color:green}");
    label2 = new QLabel(this);
    label2->move(310,210);
    label2->setFixedSize(400, 26);
    label2->setFont(font);
    label2->setStyleSheet("QLabel{color:green}");
    label1->setText(tr("普通模式最高纪录：%1").arg(first));
    label1->show();
    label2->setText(tr("无尽模式最高纪录：%1").arg(infi_socre));
    label2->show();
    int themeid=File.value("theme_id").toInt();
    if(themeid==0){
        ui->label->setText("主题选择(点击以选择):\n当前：快乐只因");
    }
    else if(themeid==1){
        ui->label->setText("主题选择(点击以选择):\n当前：清新鼠鼠");
    }
}

have_a_try::~have_a_try()
{
    delete ui;
}

void have_a_try::record_label(){
    QSettings File("test.ini", QSettings::IniFormat);
    int first = File.value("first").toInt();
    float infi_socre= File.value("infi_score").toFloat();
    label1->setText(tr("普通模式最高纪录： %1").arg(first));
    label2->setText(tr("无尽模式最高纪录： %1").arg(infi_socre));
};

void have_a_try::backSlot(){
    emit backSignal();
};

void have_a_try::on_pushButton_clicked()
{
    QSettings File("test.ini", QSettings::IniFormat);
    File.setValue("first", 0);
    File.sync();
    record_label();
}

void have_a_try::soundchange(int s){
    ui->showsound->setText(tr("游戏内音量：%1").arg(s));
    QSettings File("test.ini", QSettings::IniFormat);
    File.setValue("sound_in_game", s);
    emit sound_change_signal();
}


void have_a_try::on_radioButton_clicked()
{
    QSettings File("test.ini", QSettings::IniFormat);
    bool all_si = File.value("allsi").toBool();
    if(all_si){
        all_si=0;
        File.setValue("allsi", all_si);
        //qDebug()<<all_si;
    }
    else{
        all_si=1;
        File.setValue("allsi", all_si);
        //qDebug()<<all_si;
    }
    emit all_silence_signal();
}


void have_a_try::on_pushButton_2_clicked()
{
    QSettings File("test.ini", QSettings::IniFormat);
    File.setValue("infi_score", 0);
    File.sync();
    record_label();
}

void have_a_try::on_kunkun_clicked()
{
    QSettings File("test.ini", QSettings::IniFormat);
    File.setValue("theme_id", 0);
    emit themechange_signal();
    ui->label->setText("主题选择(点击以选择):\n当前：快乐只因");
}


void have_a_try::on_keda_clicked()
{
    QSettings File("test.ini", QSettings::IniFormat);
    File.setValue("theme_id", 1);
    emit themechange_signal();
    ui->label->setText("主题选择(点击以选择):\n当前：清新鼠鼠");
}

