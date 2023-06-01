
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <ui_startpage.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->page_2, &have_a_try::backSignal, this,&MainWindow::One);
    connect(ui->page, &startpage::check_record_signal, this,&MainWindow::Two);
    connect(ui->page, &startpage::exit_signal, this,&MainWindow::close);
    connect(ui->page,&startpage::start_signal,this,&MainWindow::Three);
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
}

void MainWindow::Three(){
    ui->stackedWidget->setCurrentIndex(2);
    ui->page_3->initialize();
}
