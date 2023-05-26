#include "firstgame.h"
#include "ui_firstgame.h"

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
