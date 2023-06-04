#ifndef FIRSTGAME_H
#define FIRSTGAME_H

#include "Qtimer"
#include <QWidget>
#include <QLabel>
#include <QKeyEvent>
#include<QMediaPlayer>
#include<QAudioOutput>
#include <QMessageBox>
#include <QFile>
const int blockwidth= 130;
const int blockheight= 110;
const int xdis= 130;
const int ydis= 120;

class QMediaPlayer;
class QAudioOutput;
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
    bool blocks_if[30];
    bool temp_if[6];
    bool temp2_if[6];
    void initialize();//游戏初始化，会用到的
    void move();//游戏画面集体运动
    void Lose();//判断游戏结束
    bool endgame=false;
    void keyPressEvent(QKeyEvent* event);//用于检测是否敲对了正确的位置
    void keyReleaseEvent(QKeyEvent* event);
    bool pressable=true;
    int counter=0;
    QMediaPlayer* player_click=nullptr;
    QMediaPlayer* player_click_2=nullptr;
    QAudioOutput* output_click=nullptr;
    QAudioOutput* output_click_2=nullptr;
    QMediaPlayer* player_lose=nullptr;
    QAudioOutput* output_lose=nullptr;
    QTimer* classic_timer = nullptr;
    QPixmap* kunkun;
    QPixmap* faiz;
    bool havestart=false;
    int countDown;
signals:
    void start_signal();

    void choose_signal();

    void backhome_signal();

private slots:
    void startSlot();

    void on_restart_clicked();

    void ChooseSlot();

    void BackhomeSlot();


private:
    Ui::firstgame *ui;
};
#endif // FIRSTGAME_H
