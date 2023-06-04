/********************************************************************************
** Form generated from reading UI file 'choose.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_H
#define UI_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choose
{
public:
    QLabel *label;
    QPushButton *normal_game;
    QPushButton *back;

    void setupUi(QWidget *choose)
    {
        if (choose->objectName().isEmpty())
            choose->setObjectName("choose");
        choose->resize(1080, 720);
        label = new QLabel(choose);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1080, 720));
        normal_game = new QPushButton(choose);
        normal_game->setObjectName("normal_game");
        normal_game->setGeometry(QRect(450, 200, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(24);
        normal_game->setFont(font);
        back = new QPushButton(choose);
        back->setObjectName("back");
        back->setGeometry(QRect(450, 430, 181, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font1.setPointSize(20);
        back->setFont(font1);

        retranslateUi(choose);

        QMetaObject::connectSlotsByName(choose);
    } // setupUi

    void retranslateUi(QWidget *choose)
    {
        choose->setWindowTitle(QCoreApplication::translate("choose", "Form", nullptr));
        label->setText(QString());
        normal_game->setText(QCoreApplication::translate("choose", "\346\231\256\351\200\232\346\250\241\345\274\217", nullptr));
        back->setText(QCoreApplication::translate("choose", "\345\233\236\345\210\260\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choose: public Ui_choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
