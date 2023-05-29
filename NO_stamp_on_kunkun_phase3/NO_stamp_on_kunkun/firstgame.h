#ifndef FIRSTGAME_H
#define FIRSTGAME_H

#include <QWidget>
#include <QLabel>
namespace Ui {
class firstgame;
}

class firstgame : public QWidget
{
    Q_OBJECT

public:
    explicit firstgame(QWidget *parent = nullptr);
    ~firstgame();
    QLabel* blocks[30];//留作绘画对象
    QLabel* temp[6];//暂存，屏幕最上方的，等待滑出屏幕后再全部delete
    QLabel* temp2[6];//上方再上方
    void initialize();//游戏初始化，会用到的
    void move();//游戏画面集体运动
signals:
    void start_signal();

private slots:
    void startSlot();

    void on_restart_clicked();

    void on_pushButton_clicked();

private:
    Ui::firstgame *ui;
};

#endif // FIRSTGAME_H
