/****************************************************************************
** Meta object code from reading C++ file 'abstracttransporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/3rdparty/qredisclient/src/qredisclient/transporters/abstracttransporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstracttransporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RedisClient__AbstractTransporter_t {
    QByteArrayData data[21];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedisClient__AbstractTransporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedisClient__AbstractTransporter_t qt_meta_stringdata_RedisClient__AbstractTransporter = {
    {
QT_MOC_LITERAL(0, 0, 32), // "RedisClient::AbstractTransporter"
QT_MOC_LITERAL(1, 33, 13), // "errorOccurred"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "logEvent"
QT_MOC_LITERAL(4, 57, 9), // "connected"
QT_MOC_LITERAL(5, 67, 12), // "commandAdded"
QT_MOC_LITERAL(6, 80, 12), // "queueIsEmpty"
QT_MOC_LITERAL(7, 93, 4), // "init"
QT_MOC_LITERAL(8, 98, 18), // "disconnectFromHost"
QT_MOC_LITERAL(9, 117, 10), // "addCommand"
QT_MOC_LITERAL(10, 128, 7), // "Command"
QT_MOC_LITERAL(11, 136, 14), // "cancelCommands"
QT_MOC_LITERAL(12, 151, 9), // "readyRead"
QT_MOC_LITERAL(13, 161, 16), // "executionTimeout"
QT_MOC_LITERAL(14, 178, 9), // "reconnect"
QT_MOC_LITERAL(15, 188, 11), // "reconnectTo"
QT_MOC_LITERAL(16, 200, 4), // "host"
QT_MOC_LITERAL(17, 205, 4), // "port"
QT_MOC_LITERAL(18, 210, 19), // "processCommandQueue"
QT_MOC_LITERAL(19, 230, 17), // "runProcessingLoop"
QT_MOC_LITERAL(20, 248, 21) // "cancelRunningCommands"

    },
    "RedisClient::AbstractTransporter\0"
    "errorOccurred\0\0logEvent\0connected\0"
    "commandAdded\0queueIsEmpty\0init\0"
    "disconnectFromHost\0addCommand\0Command\0"
    "cancelCommands\0readyRead\0executionTimeout\0"
    "reconnect\0reconnectTo\0host\0port\0"
    "processCommandQueue\0runProcessingLoop\0"
    "cancelRunningCommands"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedisClient__AbstractTransporter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    0,  100,    2, 0x06 /* Public */,
       5,    0,  101,    2, 0x06 /* Public */,
       6,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  103,    2, 0x0a /* Public */,
       8,    0,  104,    2, 0x0a /* Public */,
       9,    1,  105,    2, 0x0a /* Public */,
      11,    1,  108,    2, 0x0a /* Public */,
      12,    0,  111,    2, 0x0a /* Public */,
      13,    0,  112,    2, 0x09 /* Protected */,
      14,    0,  113,    2, 0x09 /* Protected */,
      15,    2,  114,    2, 0x09 /* Protected */,
      18,    0,  119,    2, 0x09 /* Protected */,
      19,    0,  120,    2, 0x09 /* Protected */,
      20,    0,  121,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RedisClient::AbstractTransporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractTransporter *_t = static_cast<AbstractTransporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->logEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->connected(); break;
        case 3: _t->commandAdded(); break;
        case 4: _t->queueIsEmpty(); break;
        case 5: _t->init(); break;
        case 6: _t->disconnectFromHost(); break;
        case 7: _t->addCommand((*reinterpret_cast< const Command(*)>(_a[1]))); break;
        case 8: _t->cancelCommands((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: _t->readyRead(); break;
        case 10: _t->executionTimeout(); break;
        case 11: _t->reconnect(); break;
        case 12: _t->reconnectTo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->processCommandQueue(); break;
        case 14: _t->runProcessingLoop(); break;
        case 15: _t->cancelRunningCommands(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractTransporter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTransporter::errorOccurred)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractTransporter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTransporter::logEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractTransporter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTransporter::connected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AbstractTransporter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTransporter::commandAdded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AbstractTransporter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractTransporter::queueIsEmpty)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject RedisClient::AbstractTransporter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RedisClient__AbstractTransporter.data,
      qt_meta_data_RedisClient__AbstractTransporter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RedisClient::AbstractTransporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedisClient::AbstractTransporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RedisClient__AbstractTransporter.stringdata0))
        return static_cast<void*>(const_cast< AbstractTransporter*>(this));
    return QObject::qt_metacast(_clname);
}

int RedisClient::AbstractTransporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void RedisClient::AbstractTransporter::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RedisClient::AbstractTransporter::logEvent(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RedisClient::AbstractTransporter::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RedisClient::AbstractTransporter::commandAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RedisClient::AbstractTransporter::queueIsEmpty()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_RedisClient__ResponseEmitter_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedisClient__ResponseEmitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedisClient__ResponseEmitter_t qt_meta_stringdata_RedisClient__ResponseEmitter = {
    {
QT_MOC_LITERAL(0, 0, 28), // "RedisClient::ResponseEmitter"
QT_MOC_LITERAL(1, 29, 8), // "response"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8) // "Response"

    },
    "RedisClient::ResponseEmitter\0response\0"
    "\0Response"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedisClient__ResponseEmitter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,

       0        // eod
};

void RedisClient::ResponseEmitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResponseEmitter *_t = static_cast<ResponseEmitter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->response((*reinterpret_cast< Response(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ResponseEmitter::*_t)(Response , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResponseEmitter::response)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RedisClient::ResponseEmitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RedisClient__ResponseEmitter.data,
      qt_meta_data_RedisClient__ResponseEmitter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RedisClient::ResponseEmitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedisClient::ResponseEmitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RedisClient__ResponseEmitter.stringdata0))
        return static_cast<void*>(const_cast< ResponseEmitter*>(this));
    return QObject::qt_metacast(_clname);
}

int RedisClient::ResponseEmitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RedisClient::ResponseEmitter::response(Response _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
