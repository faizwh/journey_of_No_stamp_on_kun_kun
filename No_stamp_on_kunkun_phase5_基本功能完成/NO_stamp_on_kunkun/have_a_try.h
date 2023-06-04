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
public:
    explicit have_a_try(QWidget *parent = nullptr);
    ~have_a_try();
    QLabel *label1;
    void record_label();

private slots:

    void backSlot();

    void on_pushButton_clicked();

private:
    Ui::have_a_try *ui;
};

#endif // HAVE_A_TRY_H
