/****************************************************************************
** Meta object code from reading C++ file 'mobileWindow.h'
**
** Created: Sun 6. Jan 19:36:33 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../modules/mobile/mobileWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mobileWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MobileWindow_t {
    QByteArrayData data[20];
    char stringdata[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MobileWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MobileWindow_t qt_meta_stringdata_MobileWindow = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 4),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 4),
QT_MOC_LITERAL(4, 24, 4),
QT_MOC_LITERAL(5, 29, 4),
QT_MOC_LITERAL(6, 34, 4),
QT_MOC_LITERAL(7, 39, 4),
QT_MOC_LITERAL(8, 44, 4),
QT_MOC_LITERAL(9, 49, 4),
QT_MOC_LITERAL(10, 54, 4),
QT_MOC_LITERAL(11, 59, 4),
QT_MOC_LITERAL(12, 64, 11),
QT_MOC_LITERAL(13, 76, 7),
QT_MOC_LITERAL(14, 84, 11),
QT_MOC_LITERAL(15, 96, 4),
QT_MOC_LITERAL(16, 101, 6),
QT_MOC_LITERAL(17, 108, 15),
QT_MOC_LITERAL(18, 124, 14),
QT_MOC_LITERAL(19, 139, 6)
    },
    "MobileWindow\0add1\0\0add2\0add3\0add4\0"
    "add5\0add6\0add7\0add8\0add9\0add0\0addAsterisk\0"
    "addHash\0removeDigit\0call\0hangUp\0"
    "contactSelected\0mobileSelected\0number\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MobileWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08,
       3,    0,  100,    2, 0x08,
       4,    0,  101,    2, 0x08,
       5,    0,  102,    2, 0x08,
       6,    0,  103,    2, 0x08,
       7,    0,  104,    2, 0x08,
       8,    0,  105,    2, 0x08,
       9,    0,  106,    2, 0x08,
      10,    0,  107,    2, 0x08,
      11,    0,  108,    2, 0x08,
      12,    0,  109,    2, 0x08,
      13,    0,  110,    2, 0x08,
      14,    0,  111,    2, 0x08,
      15,    0,  112,    2, 0x08,
      16,    0,  113,    2, 0x08,
      17,    0,  114,    2, 0x08,
      18,    1,  115,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void MobileWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MobileWindow *_t = static_cast<MobileWindow *>(_o);
        switch (_id) {
        case 0: _t->add1(); break;
        case 1: _t->add2(); break;
        case 2: _t->add3(); break;
        case 3: _t->add4(); break;
        case 4: _t->add5(); break;
        case 5: _t->add6(); break;
        case 6: _t->add7(); break;
        case 7: _t->add8(); break;
        case 8: _t->add9(); break;
        case 9: _t->add0(); break;
        case 10: _t->addAsterisk(); break;
        case 11: _t->addHash(); break;
        case 12: _t->removeDigit(); break;
        case 13: _t->call(); break;
        case 14: _t->hangUp(); break;
        case 15: _t->contactSelected(); break;
        case 16: _t->mobileSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MobileWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MobileWindow.data,
      qt_meta_data_MobileWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MobileWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MobileWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MobileWindow.stringdata))
        return static_cast<void*>(const_cast< MobileWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MobileWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
