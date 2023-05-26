#ifndef FIRSTGAME_H
#define FIRSTGAME_H

#include <QWidget>

namespace Ui {
class firstgame;
}

class firstgame : public QWidget
{
    Q_OBJECT

public:
    explicit firstgame(QWidget *parent = nullptr);
    ~firstgame();

private:
    Ui::firstgame *ui;
};

#endif // FIRSTGAME_H
