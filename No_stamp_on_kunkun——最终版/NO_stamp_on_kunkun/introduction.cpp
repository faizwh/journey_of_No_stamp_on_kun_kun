#include "introduction.h"
#include "qscrollarea.h"
#include "ui_introduction.h"

introduction::introduction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::introduction)
{
    ui->setupUi(this);
    ui->scrollArea->setWidget(ui->label);
}

introduction::~introduction()
{
    delete ui;
}

void introduction::on_pushButton_clicked()
{
    emit back_signal();
}

