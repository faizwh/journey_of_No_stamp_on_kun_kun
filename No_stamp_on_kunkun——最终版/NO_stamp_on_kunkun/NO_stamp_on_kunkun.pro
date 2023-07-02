QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG+=resources_big

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    choose.cpp \
    firstgame.cpp \
    have_a_try.cpp \
    introduction.cpp \
    main.cpp \
    mainwindow.cpp \
    startpage.cpp

HEADERS += \
    choose.h \
    firstgame.h \
    have_a_try.h \
    introduction.h \
    mainwindow.h \
    startpage.h

FORMS += \
    choose.ui \
    firstgame.ui \
    have_a_try.ui \
    introduction.ui \
    mainwindow.ui \
    startpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    music.qrc \
    pictures.qrc

DISTFILES +=
