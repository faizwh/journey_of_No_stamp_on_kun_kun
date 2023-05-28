
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT
    startpage* start=nullptr;
    have_a_try* record=nullptr;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void game_signal();

private slots:
    //相当一部分用于切换信号
    void One();
    void Two();
    void Three();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
