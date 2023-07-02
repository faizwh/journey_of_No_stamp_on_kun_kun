#ifndef HAVE_A_TRY_H
#define HAVE_A_TRY_H
#include <QWidget>
#include <Qlabel>
namespace Ui {
class have_a_try;
}

class have_a_try : public QWidget
{
    Q_OBJECT
signals:
    void backSignal();
    void sound_change_signal();
    void all_silence_signal();
    void themechange_signal();
public:
    explicit have_a_try(QWidget *parent = nullptr);
    ~have_a_try();
    QLabel *label1;
    QLabel *label2;
    void record_label();

private slots:

    void backSlot();
    void soundchange(int s);
    void on_pushButton_clicked();
    void on_radioButton_clicked();

    void on_pushButton_2_clicked();

    void on_kunkun_clicked();

    void on_keda_clicked();

private:
    Ui::have_a_try *ui;
};

#endif // HAVE_A_TRY_H
