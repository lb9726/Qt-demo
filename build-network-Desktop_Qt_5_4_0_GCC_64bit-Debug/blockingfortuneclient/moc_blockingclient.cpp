/****************************************************************************
** Meta object code from reading C++ file 'blockingclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../network/blockingfortuneclient/blockingclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockingclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BlockingClient_t {
    QByteArrayData data[9];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlockingClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlockingClient_t qt_meta_stringdata_BlockingClient = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BlockingClient"
QT_MOC_LITERAL(1, 15, 17), // "requestNewFortune"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "showFortune"
QT_MOC_LITERAL(4, 46, 7), // "fortune"
QT_MOC_LITERAL(5, 54, 12), // "displayError"
QT_MOC_LITERAL(6, 67, 11), // "socketError"
QT_MOC_LITERAL(7, 79, 7), // "message"
QT_MOC_LITERAL(8, 87, 22) // "enableGetFortuneButton"

    },
    "BlockingClient\0requestNewFortune\0\0"
    "showFortune\0fortune\0displayError\0"
    "socketError\0message\0enableGetFortuneButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlockingClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    2,   38,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,    7,
    QMetaType::Void,

       0        // eod
};

void BlockingClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockingClient *_t = static_cast<BlockingClient *>(_o);
        switch (_id) {
        case 0: _t->requestNewFortune(); break;
        case 1: _t->showFortune((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->displayError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->enableGetFortuneButton(); break;
        default: ;
        }
    }
}

const QMetaObject BlockingClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BlockingClient.data,
      qt_meta_data_BlockingClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BlockingClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockingClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BlockingClient.stringdata))
        return static_cast<void*>(const_cast< BlockingClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int BlockingClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
