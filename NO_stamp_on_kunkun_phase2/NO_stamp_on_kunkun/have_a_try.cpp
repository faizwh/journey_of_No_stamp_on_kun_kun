#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <ui_startpage.h>

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

void have_a_try::backSlot(){
    emit backSignal();
};
