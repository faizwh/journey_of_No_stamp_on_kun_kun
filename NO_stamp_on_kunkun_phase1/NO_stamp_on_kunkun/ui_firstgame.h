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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_firstgame
{
public:

    void setupUi(QWidget *firstgame)
    {
        if (firstgame->objectName().isEmpty())
            firstgame->setObjectName("firstgame");
        firstgame->resize(1080, 720);

        retranslateUi(firstgame);

        QMetaObject::connectSlotsByName(firstgame);
    } // setupUi

    void retranslateUi(QWidget *firstgame)
    {
        firstgame->setWindowTitle(QCoreApplication::translate("firstgame", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstgame: public Ui_firstgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTGAME_H
