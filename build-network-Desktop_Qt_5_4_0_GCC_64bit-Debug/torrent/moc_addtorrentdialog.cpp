/****************************************************************************
** Meta object code from reading C++ file 'addtorrentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../network/torrent/addtorrentdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtorrentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddTorrentDialog_t {
    QByteArrayData data[7];
    char stringdata[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddTorrentDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddTorrentDialog_t qt_meta_stringdata_AddTorrentDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddTorrentDialog"
QT_MOC_LITERAL(1, 17, 10), // "setTorrent"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "torrentFile"
QT_MOC_LITERAL(4, 41, 13), // "selectTorrent"
QT_MOC_LITERAL(5, 55, 17), // "selectDestination"
QT_MOC_LITERAL(6, 73, 14) // "enableOkButton"

    },
    "AddTorrentDialog\0setTorrent\0\0torrentFile\0"
    "selectTorrent\0selectDestination\0"
    "enableOkButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTorrentDialog[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddTorrentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddTorrentDialog *_t = static_cast<AddTorrentDialog *>(_o);
        switch (_id) {
        case 0: _t->setTorrent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectTorrent(); break;
        case 2: _t->selectDestination(); break;
        case 3: _t->enableOkButton(); break;
        default: ;
        }
    }
}

const QMetaObject AddTorrentDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddTorrentDialog.data,
      qt_meta_data_AddTorrentDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddTorrentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTorrentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddTorrentDialog.stringdata))
        return static_cast<void*>(const_cast< AddTorrentDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddTorrentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
