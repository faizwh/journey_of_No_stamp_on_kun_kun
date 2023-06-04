#ifndef CHOOSE_H
#define CHOOSE_H

#include <QWidget>

namespace Ui {
class choose;
}

class choose : public QWidget
{
    Q_OBJECT
signals:
    void normal_startSignal();
    void backSignal();
public:
    explicit choose(QWidget *parent = nullptr);
    ~choose();

private slots:
    void NormalgameStartSlot();

    void BackSlot();

private:
    Ui::choose *ui;
};

#endif // CHOOSE_H
