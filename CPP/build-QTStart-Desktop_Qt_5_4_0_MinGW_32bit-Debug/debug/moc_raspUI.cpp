/****************************************************************************
** Meta object code from reading C++ file 'raspUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QTStart/raspUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'raspUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RaspUI_t {
    QByteArrayData data[8];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RaspUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RaspUI_t qt_meta_stringdata_RaspUI = {
    {
QT_MOC_LITERAL(0, 0, 6), // "RaspUI"
QT_MOC_LITERAL(1, 7, 29), // "on_configAcceptSerial_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "on_serialButton_clicked"
QT_MOC_LITERAL(4, 62, 25), // "on_ethernetButton_clicked"
QT_MOC_LITERAL(5, 88, 21), // "on_wifiButton_clicked"
QT_MOC_LITERAL(6, 110, 27), // "on_configAcceptWifi_clicked"
QT_MOC_LITERAL(7, 138, 31) // "on_configAcceptEthernet_clicked"

    },
    "RaspUI\0on_configAcceptSerial_clicked\0"
    "\0on_serialButton_clicked\0"
    "on_ethernetButton_clicked\0"
    "on_wifiButton_clicked\0on_configAcceptWifi_clicked\0"
    "on_configAcceptEthernet_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RaspUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RaspUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RaspUI *_t = static_cast<RaspUI *>(_o);
        switch (_id) {
        case 0: _t->on_configAcceptSerial_clicked(); break;
        case 1: _t->on_serialButton_clicked(); break;
        case 2: _t->on_ethernetButton_clicked(); break;
        case 3: _t->on_wifiButton_clicked(); break;
        case 4: _t->on_configAcceptWifi_clicked(); break;
        case 5: _t->on_configAcceptEthernet_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RaspUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RaspUI.data,
      qt_meta_data_RaspUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RaspUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RaspUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RaspUI.stringdata))
        return static_cast<void*>(const_cast< RaspUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int RaspUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE