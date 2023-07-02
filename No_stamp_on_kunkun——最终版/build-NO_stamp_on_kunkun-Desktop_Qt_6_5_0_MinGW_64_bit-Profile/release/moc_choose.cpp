/****************************************************************************
** Meta object code from reading C++ file 'choose.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NO_stamp_on_kunkun/choose.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choose.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSchooseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSchooseENDCLASS = QtMocHelpers::stringData(
    "choose",
    "normal_startSignal",
    "",
    "backSignal",
    "infi_startsignal",
    "NormalgameStartSlot",
    "Infi_gameStartSlot",
    "BackSlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSchooseENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[7];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[17];
    char stringdata5[20];
    char stringdata6[19];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSchooseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSchooseENDCLASS_t qt_meta_stringdata_CLASSchooseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "choose"
        QT_MOC_LITERAL(7, 18),  // "normal_startSignal"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 10),  // "backSignal"
        QT_MOC_LITERAL(38, 16),  // "infi_startsignal"
        QT_MOC_LITERAL(55, 19),  // "NormalgameStartSlot"
        QT_MOC_LITERAL(75, 18),  // "Infi_gameStartSlot"
        QT_MOC_LITERAL(94, 8)   // "BackSlot"
    },
    "choose",
    "normal_startSignal",
    "",
    "backSignal",
    "infi_startsignal",
    "NormalgameStartSlot",
    "Infi_gameStartSlot",
    "BackSlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSchooseENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    0,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject choose::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSchooseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSchooseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSchooseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<choose, std::true_type>,
        // method 'normal_startSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'infi_startsignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'NormalgameStartSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Infi_gameStartSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BackSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void choose::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<choose *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->normal_startSignal(); break;
        case 1: _t->backSignal(); break;
        case 2: _t->infi_startsignal(); break;
        case 3: _t->NormalgameStartSlot(); break;
        case 4: _t->Infi_gameStartSlot(); break;
        case 5: _t->BackSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (choose::*)();
            if (_t _q_method = &choose::normal_startSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (choose::*)();
            if (_t _q_method = &choose::backSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (choose::*)();
            if (_t _q_method = &choose::infi_startsignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *choose::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *choose::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSchooseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int choose::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void choose::normal_startSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void choose::backSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void choose::infi_startsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
