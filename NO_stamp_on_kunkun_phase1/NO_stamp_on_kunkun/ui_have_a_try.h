/********************************************************************************
** Form generated from reading UI file 'have_a_try.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAVE_A_TRY_H
#define UI_HAVE_A_TRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_have_a_try
{
public:
    QListView *Ding_Zhen;
    QPushButton *goback;

    void setupUi(QWidget *have_a_try)
    {
        if (have_a_try->objectName().isEmpty())
            have_a_try->setObjectName("have_a_try");
        have_a_try->resize(1080, 720);
        Ding_Zhen = new QListView(have_a_try);
        Ding_Zhen->setObjectName("Ding_Zhen");
        Ding_Zhen->setGeometry(QRect(0, 0, 571, 721));
        Ding_Zhen->setStyleSheet(QString::fromUtf8("border-image: url(:/ding_zhen_555.jpeg);"));
        goback = new QPushButton(have_a_try);
        goback->setObjectName("goback");
        goback->setGeometry(QRect(130, 640, 391, 71));
        goback->setMouseTracking(true);
        goback->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"\n"
"\n"
""));
        goback->setAutoRepeat(false);
        goback->setFlat(false);

        retranslateUi(have_a_try);

        goback->setDefault(true);


        QMetaObject::connectSlotsByName(have_a_try);
    } // setupUi

    void retranslateUi(QWidget *have_a_try)
    {
        have_a_try->setWindowTitle(QCoreApplication::translate("have_a_try", "Form", nullptr));
        goback->setText(QCoreApplication::translate("have_a_try", "\346\210\221\344\274\232\345\245\275\345\245\275\345\212\252\345\212\233\347\232\204(\346\221\201\346\255\244\350\277\224\345\233\236)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class have_a_try: public Ui_have_a_try {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAVE_A_TRY_H
