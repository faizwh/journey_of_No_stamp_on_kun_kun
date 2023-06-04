#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QWidget>

namespace Ui {
class startpage;
}

class startpage : public QWidget
{
    Q_OBJECT
signals:
    void check_record_signal();//切换到记录表的信号
    void exit_signal();//退出信号
    void choose_signal();//进行模式选择
public:
    explicit startpage(QWidget *parent = nullptr);
    ~startpage();

private slots:
    void on_communication_clicked();

    void checkSlot();//切换到记录表的信息操作

    void exitSlot();//退出信号发送

    void gamestartSlot();//游戏开始信号发送

private:
    Ui::startpage *ui;
};

#endif // STARTPAGE_H
