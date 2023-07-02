/********************************************************************************
** Form generated from reading UI file 'have_a_try.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAVE_A_TRY_H
#define UI_HAVE_A_TRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_have_a_try
{
public:
    QPushButton *goback;
    QPushButton *pushButton;
    QSlider *sound_slider;
    QLabel *showsound;
    QListWidget *listWidget_right;
    QLabel *showsound_2;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *kunkun;
    QPushButton *keda;

    void setupUi(QWidget *have_a_try)
    {
        if (have_a_try->objectName().isEmpty())
            have_a_try->setObjectName("have_a_try");
        have_a_try->resize(1080, 720);
        goback = new QPushButton(have_a_try);
        goback->setObjectName("goback");
        goback->setGeometry(QRect(350, 640, 391, 71));
        goback->setMouseTracking(true);
        goback->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"\n"
"\n"
""));
        goback->setAutoRepeat(false);
        goback->setFlat(false);
        pushButton = new QPushButton(have_a_try);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(680, 105, 120, 34));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(20);
        pushButton->setFont(font);
        sound_slider = new QSlider(have_a_try);
        sound_slider->setObjectName("sound_slider");
        sound_slider->setGeometry(QRect(530, 490, 231, 41));
        sound_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"/*1.\346\273\221\345\212\250\350\277\207\347\232\204\346\247\275\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::sub-page:horizontal {\n"
" /*\346\247\275\351\242\234\350\211\262*/\n"
"background: rgb(90,49,255);\n"
" /*\345\244\226\347\216\257\345\214\272\345\237\237\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px;\n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:8px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:8px;\n"
"/*width\345\234\250\350\277\231\351\207\214\346\227\240\346\225\210\357\274\214\344\270\215\345\206\231\345\215\263\345\217\257*/\n"
"}\n"
"\n"
"/*2.\346\234\252\346\273\221\345\212\250\350\277\207\347\232\204\346\247\275\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::add-page:horizontal {\n"
"/*\346\247\275\351\242\234\350\211\262*/\n"
"back"
                        "ground: rgb(255,255, 255);\n"
"/*\345\244\226\347\216\257\345\244\247\345\260\2170px\345\260\261\346\230\257\344\270\215\346\230\276\347\244\272\357\274\214\351\273\230\350\256\244\344\271\237\346\230\2570*/\n"
"border: 0px solid #777;\n"
"/*\345\244\226\347\216\257\345\214\272\345\237\237\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px;\n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:9px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:9px;\n"
"}\n"
" \n"
"/*3.\345\271\263\346\227\266\346\273\221\345\212\250\347\232\204\346\273\221\345\235\227\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::handle:horizontal {\n"
"/*\346\273\221\345\235\227\351\242\234\350\211\262*/\n"
"background: rgb(193,204,208);\n"
"/*\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246*/\n"
"width: 5px;\n"
"/*\346\273\221\345\235\227\345\244\226\347\216\257\344\270\272"
                        "1px\357\274\214\345\206\215\345\212\240\351\242\234\350\211\262*/\n"
"border: 1px solid rgb(193,204,208);\n"
" /*\346\273\221\345\235\227\345\244\226\347\216\257\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px; \n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:6px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"/*4.\346\211\213\345\212\250\346\213\211\345\212\250\346\227\266\346\230\276\347\244\272\347\232\204\346\273\221\345\235\227\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::handle:horizontal:hover {\n"
"/*\346\273\221\345\235\227\351\242\234\350\211\262*/\n"
"background: rgb(193,204,208);\n"
"/*\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246*/\n"
"width: 10px;\n"
"/*\346\273\221\345\235\227\345\244\226\347\216\257\344\270\2721px\357\274\214\345\206\215\345\212\240\351\242\234\350\211\262*/\n"
"border: 1px sol"
                        "id rgb(193,204,208);\n"
" /*\346\273\221\345\235\227\345\244\226\347\216\257\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 5px; \n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:4px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:4px;\n"
"}"));
        sound_slider->setOrientation(Qt::Horizontal);
        showsound = new QLabel(have_a_try);
        showsound->setObjectName("showsound");
        showsound->setGeometry(QRect(330, 480, 171, 71));
        showsound->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        showsound->setAlignment(Qt::AlignCenter);
        showsound->setWordWrap(true);
        listWidget_right = new QListWidget(have_a_try);
        listWidget_right->setObjectName("listWidget_right");
        listWidget_right->setGeometry(QRect(0, 0, 1080, 720));
        listWidget_right->setStyleSheet(QString::fromUtf8("border-image: url(:/star.jpg);"));
        showsound_2 = new QLabel(have_a_try);
        showsound_2->setObjectName("showsound_2");
        showsound_2->setGeometry(QRect(330, 570, 201, 71));
        showsound_2->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        showsound_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        showsound_2->setWordWrap(true);
        radioButton = new QRadioButton(have_a_try);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(580, 580, 151, 51));
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {width:150px;height:50px;border-radius:7px} QRadioButton::indicator::unchecked {\n"
"        border-image: url(:switch_off.jpg);\n"
"    }\n"
"QRadioButton::indicator::checked {\n"
"        border-image: url(:switch_on.jpg);\n"
"    }"));
        pushButton_2 = new QPushButton(have_a_try);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(680, 205, 120, 34));
        pushButton_2->setFont(font);
        label = new QLabel(have_a_try);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 360, 201, 111));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"border-image: url(:/kun_kun_zi.jpg);\n"
""));
        label->setWordWrap(true);
        label_2 = new QLabel(have_a_try);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 380, 91, 91));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/kunkun_chicken.jpg);"));
        label_2->setWordWrap(true);
        label_3 = new QLabel(have_a_try);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(860, 390, 81, 71));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/keda_duck.jpg);"));
        label_3->setWordWrap(true);
        kunkun = new QPushButton(have_a_try);
        kunkun->setObjectName("kunkun");
        kunkun->setGeometry(QRect(570, 400, 111, 51));
        kunkun->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        keda = new QPushButton(have_a_try);
        keda->setObjectName("keda");
        keda->setGeometry(QRect(730, 400, 111, 51));
        keda->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        listWidget_right->raise();
        goback->raise();
        pushButton->raise();
        sound_slider->raise();
        showsound_2->raise();
        radioButton->raise();
        showsound->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        kunkun->raise();
        keda->raise();

        retranslateUi(have_a_try);

        goback->setDefault(true);


        QMetaObject::connectSlotsByName(have_a_try);
    } // setupUi

    void retranslateUi(QWidget *have_a_try)
    {
        have_a_try->setWindowTitle(QCoreApplication::translate("have_a_try", "Form", nullptr));
        goback->setText(QCoreApplication::translate("have_a_try", "\346\210\221\344\274\232\345\245\275\345\245\275\345\212\252\345\212\233\347\232\204(\346\221\201\346\255\244\350\277\224\345\233\236)", nullptr));
        pushButton->setText(QCoreApplication::translate("have_a_try", "\346\270\205\351\231\244\350\256\260\345\275\225", nullptr));
        showsound->setText(QCoreApplication::translate("have_a_try", "\346\270\270\346\210\217\345\206\205\351\237\263\351\207\217", nullptr));
        showsound_2->setText(QCoreApplication::translate("have_a_try", "\345\205\250\351\235\231\351\237\263", nullptr));
        radioButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("have_a_try", "\346\270\205\351\231\244\350\256\260\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("have_a_try", "\344\270\273\351\242\230\351\200\211\346\213\251(\347\202\271\345\207\273\344\273\245\351\200\211\346\213\251)", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        kunkun->setText(QCoreApplication::translate("have_a_try", "\345\277\253\344\271\220\345\217\252\345\233\240", nullptr));
        keda->setText(QCoreApplication::translate("have_a_try", "\346\270\205\346\226\260\351\274\240\351\274\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class have_a_try: public Ui_have_a_try {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAVE_A_TRY_H
