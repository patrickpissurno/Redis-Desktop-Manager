/****************************************************************************
** Meta object code from reading C++ file 'qxtsshclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/3rdparty/qredisclient/3rdparty/qsshclient/qxtsshclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxtsshclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QxtSshClient_t {
    QByteArrayData data[9];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QxtSshClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QxtSshClient_t qt_meta_stringdata_QxtSshClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QxtSshClient"
QT_MOC_LITERAL(1, 13, 9), // "connected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "disconnected"
QT_MOC_LITERAL(4, 37, 5), // "error"
QT_MOC_LITERAL(5, 43, 19), // "QxtSshClient::Error"
QT_MOC_LITERAL(6, 63, 22), // "authenticationRequired"
QT_MOC_LITERAL(7, 86, 41), // "QList<QxtSshClient::Authentic..."
QT_MOC_LITERAL(8, 128, 16) // "availableMethods"

    },
    "QxtSshClient\0connected\0\0disconnected\0"
    "error\0QxtSshClient::Error\0"
    "authenticationRequired\0"
    "QList<QxtSshClient::AuthenticationMethod>\0"
    "availableMethods"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QxtSshClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void QxtSshClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QxtSshClient *_t = static_cast<QxtSshClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QxtSshClient::Error(*)>(_a[1]))); break;
        case 3: _t->authenticationRequired((*reinterpret_cast< QList<QxtSshClient::AuthenticationMethod>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QxtSshClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QxtSshClient::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QxtSshClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QxtSshClient::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QxtSshClient::*_t)(QxtSshClient::Error );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QxtSshClient::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QxtSshClient::*_t)(QList<QxtSshClient::AuthenticationMethod> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QxtSshClient::authenticationRequired)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QxtSshClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QxtSshClient.data,
      qt_meta_data_QxtSshClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QxtSshClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QxtSshClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QxtSshClient.stringdata0))
        return static_cast<void*>(const_cast< QxtSshClient*>(this));
    return QObject::qt_metacast(_clname);
}

int QxtSshClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QxtSshClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QxtSshClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QxtSshClient::error(QxtSshClient::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QxtSshClient::authenticationRequired(QList<QxtSshClient::AuthenticationMethod> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
