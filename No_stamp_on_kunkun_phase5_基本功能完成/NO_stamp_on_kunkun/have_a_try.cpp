#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <ui_startpage.h>
#include <QSettings>

have_a_try::have_a_try(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::have_a_try)
{
    ui->setupUi(this);
    connect(ui->goback, &QPushButton::clicked, this, &have_a_try::backSlot);
}

have_a_try::~have_a_try()
{
    delete ui;
}

void have_a_try::record_label(){
    QSettings File("test.ini", QSettings::IniFormat);
    int first = File.value("first").toInt();
    label1 = new QLabel(this);
    label1->move(600,110);
    QFont font = QFont("华文行楷", 18);
    label1->setFont(font);
    label1->setStyleSheet("QLabel{color:blue}");
    label1->setText(tr("普通模式最高纪录： %1").arg(first));
    label1->show();
};

void have_a_try::backSlot(){
    delete (label1);
    emit backSignal();
};

void have_a_try::on_pushButton_clicked()
{
    QSettings File("test.ini", QSettings::IniFormat);
    File.setValue("first", 0);
    File.sync();
    delete (label1);
    record_label();
}

