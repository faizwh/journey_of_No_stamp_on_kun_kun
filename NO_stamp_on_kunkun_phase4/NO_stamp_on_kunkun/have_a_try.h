#ifndef HAVE_A_TRY_H
#define HAVE_A_TRY_H
#include <QWidget>
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

private slots:

    void backSlot();

private:
    Ui::have_a_try *ui;
};

#endif // HAVE_A_TRY_H
