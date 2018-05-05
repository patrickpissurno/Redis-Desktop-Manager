/****************************************************************************
** Meta object code from reading C++ file 'qxtsshclient_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/3rdparty/qredisclient/3rdparty/qsshclient/qxtsshclient_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxtsshclient_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QxtSshClientPrivate_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QxtSshClientPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QxtSshClientPrivate_t qt_meta_stringdata_QxtSshClientPrivate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QxtSshClientPrivate"
QT_MOC_LITERAL(1, 20, 11), // "d_readyRead"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "d_connected"
QT_MOC_LITERAL(4, 45, 14), // "d_disconnected"
QT_MOC_LITERAL(5, 60, 18), // "d_channelDestroyed"
QT_MOC_LITERAL(6, 79, 17) // "d_delaydErrorEmit"

    },
    "QxtSshClientPrivate\0d_readyRead\0\0"
    "d_connected\0d_disconnected\0"
    "d_channelDestroyed\0d_delaydErrorEmit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QxtSshClientPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QxtSshClientPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QxtSshClientPrivate *_t = static_cast<QxtSshClientPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_readyRead(); break;
        case 1: _t->d_connected(); break;
        case 2: _t->d_disconnected(); break;
        case 3: _t->d_channelDestroyed(); break;
        case 4: _t->d_delaydErrorEmit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QxtSshClientPrivate::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_QxtSshClientPrivate.data,
      qt_meta_data_QxtSshClientPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QxtSshClientPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QxtSshClientPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QxtSshClientPrivate.stringdata0))
        return static_cast<void*>(const_cast< QxtSshClientPrivate*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int QxtSshClientPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
