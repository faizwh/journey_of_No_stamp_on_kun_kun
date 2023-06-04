/****************************************************************************
** Meta object code from reading C++ file 'firstgame.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NO_stamp_on_kunkun/firstgame.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firstgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSfirstgameENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSfirstgameENDCLASS = QtMocHelpers::stringData(
    "firstgame",
    "start_signal",
    "",
    "choose_signal",
    "backhome_signal",
    "startSlot",
    "on_restart_clicked",
    "ChooseSlot",
    "BackhomeSlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSfirstgameENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[10];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[16];
    char stringdata5[10];
    char stringdata6[19];
    char stringdata7[11];
    char stringdata8[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSfirstgameENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSfirstgameENDCLASS_t qt_meta_stringdata_CLASSfirstgameENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "firstgame"
        QT_MOC_LITERAL(10, 12),  // "start_signal"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 13),  // "choose_signal"
        QT_MOC_LITERAL(38, 15),  // "backhome_signal"
        QT_MOC_LITERAL(54, 9),  // "startSlot"
        QT_MOC_LITERAL(64, 18),  // "on_restart_clicked"
        QT_MOC_LITERAL(83, 10),  // "ChooseSlot"
        QT_MOC_LITERAL(94, 12)   // "BackhomeSlot"
    },
    "firstgame",
    "start_signal",
    "",
    "choose_signal",
    "backhome_signal",
    "startSlot",
    "on_restart_clicked",
    "ChooseSlot",
    "BackhomeSlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSfirstgameENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject firstgame::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSfirstgameENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSfirstgameENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSfirstgameENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<firstgame, std::true_type>,
        // method 'start_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backhome_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_restart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ChooseSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BackhomeSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void firstgame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<firstgame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start_signal(); break;
        case 1: _t->choose_signal(); break;
        case 2: _t->backhome_signal(); break;
        case 3: _t->startSlot(); break;
        case 4: _t->on_restart_clicked(); break;
        case 5: _t->ChooseSlot(); break;
        case 6: _t->BackhomeSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (firstgame::*)();
            if (_t _q_method = &firstgame::start_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (firstgame::*)();
            if (_t _q_method = &firstgame::choose_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (firstgame::*)();
            if (_t _q_method = &firstgame::backhome_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *firstgame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *firstgame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSfirstgameENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int firstgame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void firstgame::start_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void firstgame::choose_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void firstgame::backhome_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
