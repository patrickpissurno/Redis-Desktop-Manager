/****************************************************************************
** Meta object code from reading C++ file 'sync.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/3rdparty/qredisclient/src/qredisclient/utils/sync.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RedisClient__SignalWaiter_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedisClient__SignalWaiter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedisClient__SignalWaiter_t qt_meta_stringdata_RedisClient__SignalWaiter = {
    {
QT_MOC_LITERAL(0, 0, 25), // "RedisClient::SignalWaiter"
QT_MOC_LITERAL(1, 26, 7), // "succeed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "aborted"
QT_MOC_LITERAL(4, 43, 5), // "abort"
QT_MOC_LITERAL(5, 49, 7) // "success"

    },
    "RedisClient::SignalWaiter\0succeed\0\0"
    "aborted\0abort\0success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedisClient__SignalWaiter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RedisClient::SignalWaiter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalWaiter *_t = static_cast<SignalWaiter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->succeed(); break;
        case 1: _t->aborted(); break;
        case 2: _t->abort(); break;
        case 3: _t->success(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SignalWaiter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalWaiter::succeed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SignalWaiter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignalWaiter::aborted)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RedisClient::SignalWaiter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RedisClient__SignalWaiter.data,
      qt_meta_data_RedisClient__SignalWaiter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RedisClient::SignalWaiter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedisClient::SignalWaiter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RedisClient__SignalWaiter.stringdata0))
        return static_cast<void*>(const_cast< SignalWaiter*>(this));
    return QObject::qt_metacast(_clname);
}

int RedisClient::SignalWaiter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RedisClient::SignalWaiter::succeed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RedisClient::SignalWaiter::aborted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_RedisClient__CommandExecutor_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedisClient__CommandExecutor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedisClient__CommandExecutor_t qt_meta_stringdata_RedisClient__CommandExecutor = {
    {
QT_MOC_LITERAL(0, 0, 28) // "RedisClient::CommandExecutor"

    },
    "RedisClient::CommandExecutor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedisClient__CommandExecutor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RedisClient::CommandExecutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject RedisClient::CommandExecutor::staticMetaObject = {
    { &SignalWaiter::staticMetaObject, qt_meta_stringdata_RedisClient__CommandExecutor.data,
      qt_meta_data_RedisClient__CommandExecutor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RedisClient::CommandExecutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedisClient::CommandExecutor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RedisClient__CommandExecutor.stringdata0))
        return static_cast<void*>(const_cast< CommandExecutor*>(this));
    return SignalWaiter::qt_metacast(_clname);
}

int RedisClient::CommandExecutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SignalWaiter::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
