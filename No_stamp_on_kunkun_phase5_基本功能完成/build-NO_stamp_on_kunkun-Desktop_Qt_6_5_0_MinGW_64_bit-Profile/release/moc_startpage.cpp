/****************************************************************************
** Meta object code from reading C++ file 'startpage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NO_stamp_on_kunkun/startpage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startpage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSstartpageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSstartpageENDCLASS = QtMocHelpers::stringData(
    "startpage",
    "check_record_signal",
    "",
    "exit_signal",
    "choose_signal",
    "on_communication_clicked",
    "checkSlot",
    "exitSlot",
    "gamestartSlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSstartpageENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[10];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[14];
    char stringdata5[25];
    char stringdata6[10];
    char stringdata7[9];
    char stringdata8[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSstartpageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSstartpageENDCLASS_t qt_meta_stringdata_CLASSstartpageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "startpage"
        QT_MOC_LITERAL(10, 19),  // "check_record_signal"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 11),  // "exit_signal"
        QT_MOC_LITERAL(43, 13),  // "choose_signal"
        QT_MOC_LITERAL(57, 24),  // "on_communication_clicked"
        QT_MOC_LITERAL(82, 9),  // "checkSlot"
        QT_MOC_LITERAL(92, 8),  // "exitSlot"
        QT_MOC_LITERAL(101, 13)   // "gamestartSlot"
    },
    "startpage",
    "check_record_signal",
    "",
    "exit_signal",
    "choose_signal",
    "on_communication_clicked",
    "checkSlot",
    "exitSlot",
    "gamestartSlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSstartpageENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject startpage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSstartpageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSstartpageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSstartpageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<startpage, std::true_type>,
        // method 'check_record_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exit_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_communication_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exitSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gamestartSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void startpage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<startpage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->check_record_signal(); break;
        case 1: _t->exit_signal(); break;
        case 2: _t->choose_signal(); break;
        case 3: _t->on_communication_clicked(); break;
        case 4: _t->checkSlot(); break;
        case 5: _t->exitSlot(); break;
        case 6: _t->gamestartSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (startpage::*)();
            if (_t _q_method = &startpage::check_record_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (startpage::*)();
            if (_t _q_method = &startpage::exit_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (startpage::*)();
            if (_t _q_method = &startpage::choose_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *startpage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *startpage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSstartpageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int startpage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void startpage::check_record_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void startpage::exit_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void startpage::choose_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
