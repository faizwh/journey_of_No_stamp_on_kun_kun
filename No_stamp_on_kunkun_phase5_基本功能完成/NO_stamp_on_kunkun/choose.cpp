#include "choose.h"
#include "ui_choose.h"
#include<choose.h>
#include<ui_choose.h>

choose::choose(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choose)
{
    ui->setupUi(this);
    connect(ui->normal_game,&QPushButton::clicked,this,&choose::NormalgameStartSlot);
    connect(ui->back,&QPushButton::clicked,this,&choose::BackSlot);
}

choose::~choose()
{
    delete ui;
}

void choose::NormalgameStartSlot()
{
    emit normal_startSignal();
}

void choose::BackSlot()
{
    emit backSignal();
}

