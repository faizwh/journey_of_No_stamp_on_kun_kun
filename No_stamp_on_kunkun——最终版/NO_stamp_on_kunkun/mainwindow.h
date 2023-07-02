
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <have_a_try.h>
#include <ui_have_a_try.h>
#include <startpage.h>
#include <choose.h>
#include<QMediaPlayer>
#include<QAudioOutput>
class QMediaPlayer;
class QAudioOutput;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT
    startpage* start=nullptr;
    have_a_try* record=nullptr;
    QString beijin_music[3]={"qrc:/new/kuang/kun_kun_music.mp3","qrc:/new/kuang/duck_music.mp3"};
    QAudioOutput* output=nullptr;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMediaPlayer* player=nullptr;
    friend class have_a_try;
    void sound_change();
    void all_silence_change();
    void theme_change();
signals:
    void game_signal();

private slots:
    //相当一部分用于切换信号
    void One();
    void Two();
    void Three_normal();
    void Three_infinity();
    void Four();
    void Five();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
