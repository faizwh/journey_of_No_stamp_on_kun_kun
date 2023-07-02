/********************************************************************************
** Form generated from reading UI file 'startpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPAGE_H
#define UI_STARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startpage
{
public:
    QListWidget *listWidget;
    QPushButton *gamestart;
    QPushButton *communication;
    QPushButton *check_record;
    QLabel *speak;
    QPushButton *exit;
    QPushButton *pushButton;

    void setupUi(QWidget *startpage)
    {
        if (startpage->objectName().isEmpty())
            startpage->setObjectName("startpage");
        startpage->resize(1080, 720);
        listWidget = new QListWidget(startpage);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 1080, 720));
        listWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/bei_jing.jpg);"));
        gamestart = new QPushButton(startpage);
        gamestart->setObjectName("gamestart");
        gamestart->setGeometry(QRect(840, 250, 231, 41));
        gamestart->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"\n"
""));
        communication = new QPushButton(startpage);
        communication->setObjectName("communication");
        communication->setGeometry(QRect(70, 380, 201, 41));
        communication->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"\n"
"\n"
""));
        communication->setAutoRepeat(false);
        check_record = new QPushButton(startpage);
        check_record->setObjectName("check_record");
        check_record->setGeometry(QRect(840, 350, 231, 41));
        check_record->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"\n"
"\n"
"\n"
""));
        check_record->setAutoRepeat(false);
        speak = new QLabel(startpage);
        speak->setObjectName("speak");
        speak->setGeometry(QRect(20, 140, 291, 191));
        speak->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\215\216\346\226\207\346\245\267\344\275\223\";\n"
"border-image: url(:/kun_kun_zi.jpg);\n"
"font-color: rgb(255, 85, 0);\n"
""));
        speak->setLineWidth(2);
        speak->setAlignment(Qt::AlignCenter);
        speak->setWordWrap(true);
        speak->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);
        exit = new QPushButton(startpage);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(840, 550, 231, 41));
        exit->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"\n"
"\n"
""));
        pushButton = new QPushButton(startpage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(840, 450, 231, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));

        retranslateUi(startpage);

        QMetaObject::connectSlotsByName(startpage);
    } // setupUi

    void retranslateUi(QWidget *startpage)
    {
        startpage->setWindowTitle(QCoreApplication::translate("startpage", "Form", nullptr));
        gamestart->setText(QCoreApplication::translate("startpage", "\345\274\200     \345\247\213     \346\270\270     \346\210\217", nullptr));
        communication->setText(QCoreApplication::translate("startpage", "\344\272\244(tiao)\346\265\201(xi)", nullptr));
        check_record->setText(QCoreApplication::translate("startpage", "\347\272\252   \345\275\225   \344\270\216   \350\256\276   \347\275\256", nullptr));
        speak->setText(QCoreApplication::translate("startpage", "<html><head/><body><p><span style=\" font-weight:700;\">\347\234\213\344\270\215\345\210\260\346\210\221\357\274\201</span></p></body></html>", nullptr));
        exit->setText(QCoreApplication::translate("startpage", "\345\235\244     \345\235\244     \346\213\234     \346\213\234", nullptr));
        pushButton->setText(QCoreApplication::translate("startpage", "\346\270\270     \346\210\217     \344\273\213     \347\273\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startpage: public Ui_startpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPAGE_H
