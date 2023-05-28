/********************************************************************************
** Form generated from reading UI file 'firstgame.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTGAME_H
#define UI_FIRSTGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstgame
{
public:
    QListView *listView;
    QLabel *yourscoreshow;
    QLabel *score_label;
    QPushButton *back_to_main;
    QPushButton *pushButton;
    QPushButton *restart;
    QListView *listView_2;

    void setupUi(QWidget *firstgame)
    {
        if (firstgame->objectName().isEmpty())
            firstgame->setObjectName("firstgame");
        firstgame->resize(1080, 720);
        listView = new QListView(firstgame);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 0, 240, 720));
        yourscoreshow = new QLabel(firstgame);
        yourscoreshow->setObjectName("yourscoreshow");
        yourscoreshow->setGeometry(QRect(20, 60, 71, 51));
        score_label = new QLabel(firstgame);
        score_label->setObjectName("score_label");
        score_label->setGeometry(QRect(120, 70, 71, 31));
        back_to_main = new QPushButton(firstgame);
        back_to_main->setObjectName("back_to_main");
        back_to_main->setGeometry(QRect(50, 230, 121, 71));
        pushButton = new QPushButton(firstgame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 390, 121, 81));
        restart = new QPushButton(firstgame);
        restart->setObjectName("restart");
        restart->setGeometry(QRect(50, 140, 121, 61));
        listView_2 = new QListView(firstgame);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(240, 635, 840, 85));

        retranslateUi(firstgame);

        QMetaObject::connectSlotsByName(firstgame);
    } // setupUi

    void retranslateUi(QWidget *firstgame)
    {
        firstgame->setWindowTitle(QCoreApplication::translate("firstgame", "Form", nullptr));
        yourscoreshow->setText(QCoreApplication::translate("firstgame", "\344\275\240\347\232\204\345\210\206\346\225\260\357\274\232", nullptr));
        score_label->setText(QCoreApplication::translate("firstgame", "423626918", nullptr));
        back_to_main->setText(QCoreApplication::translate("firstgame", "\351\200\200\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        pushButton->setText(QCoreApplication::translate("firstgame", "\351\200\200\345\233\236\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        restart->setText(QCoreApplication::translate("firstgame", "\351\207\215\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstgame: public Ui_firstgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTGAME_H
