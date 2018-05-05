/****************************************************************************
** Meta object code from reading C++ file 'connectionsmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/app/models/connectionsmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectionsManager_t {
    QByteArrayData data[34];
    char stringdata0[507];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectionsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectionsManager_t qt_meta_stringdata_ConnectionsManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ConnectionsManager"
QT_MOC_LITERAL(1, 19, 14), // "editConnection"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "ServerConfig"
QT_MOC_LITERAL(4, 48, 6), // "config"
QT_MOC_LITERAL(5, 55, 25), // "connectionAboutToBeEdited"
QT_MOC_LITERAL(6, 81, 4), // "name"
QT_MOC_LITERAL(7, 86, 11), // "openConsole"
QT_MOC_LITERAL(8, 98, 39), // "QSharedPointer<RedisClient::C..."
QT_MOC_LITERAL(9, 138, 10), // "connection"
QT_MOC_LITERAL(10, 149, 15), // "openServerStats"
QT_MOC_LITERAL(11, 165, 12), // "openValueTab"
QT_MOC_LITERAL(12, 178, 25), // "ConnectionsTree::KeyItem&"
QT_MOC_LITERAL(13, 204, 3), // "key"
QT_MOC_LITERAL(14, 208, 8), // "inNewTab"
QT_MOC_LITERAL(15, 217, 12), // "newKeyDialog"
QT_MOC_LITERAL(16, 230, 21), // "std::function<void()>"
QT_MOC_LITERAL(17, 252, 8), // "callback"
QT_MOC_LITERAL(18, 261, 7), // "dbIndex"
QT_MOC_LITERAL(19, 269, 9), // "keyPrefix"
QT_MOC_LITERAL(20, 279, 11), // "closeDbKeys"
QT_MOC_LITERAL(21, 291, 6), // "filter"
QT_MOC_LITERAL(22, 298, 20), // "requestBulkOperation"
QT_MOC_LITERAL(23, 319, 34), // "BulkOperations::Manager::Oper..."
QT_MOC_LITERAL(24, 354, 2), // "op"
QT_MOC_LITERAL(25, 357, 10), // "keyPattern"
QT_MOC_LITERAL(26, 368, 16), // "addNewConnection"
QT_MOC_LITERAL(27, 385, 12), // "saveToConfig"
QT_MOC_LITERAL(28, 398, 16), // "updateConnection"
QT_MOC_LITERAL(29, 415, 17), // "importConnections"
QT_MOC_LITERAL(30, 433, 27), // "saveConnectionsConfigToFile"
QT_MOC_LITERAL(31, 461, 22), // "testConnectionSettings"
QT_MOC_LITERAL(32, 484, 17), // "createEmptyConfig"
QT_MOC_LITERAL(33, 502, 4) // "size"

    },
    "ConnectionsManager\0editConnection\0\0"
    "ServerConfig\0config\0connectionAboutToBeEdited\0"
    "name\0openConsole\0"
    "QSharedPointer<RedisClient::Connection>\0"
    "connection\0openServerStats\0openValueTab\0"
    "ConnectionsTree::KeyItem&\0key\0inNewTab\0"
    "newKeyDialog\0std::function<void()>\0"
    "callback\0dbIndex\0keyPrefix\0closeDbKeys\0"
    "filter\0requestBulkOperation\0"
    "BulkOperations::Manager::Operation\0"
    "op\0keyPattern\0addNewConnection\0"
    "saveToConfig\0updateConnection\0"
    "importConnections\0saveConnectionsConfigToFile\0"
    "testConnectionSettings\0createEmptyConfig\0"
    "size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    1,  102,    2, 0x06 /* Public */,
       7,    1,  105,    2, 0x06 /* Public */,
      10,    1,  108,    2, 0x06 /* Public */,
      11,    3,  111,    2, 0x06 /* Public */,
      15,    4,  118,    2, 0x06 /* Public */,
      20,    3,  127,    2, 0x06 /* Public */,
      20,    2,  134,    2, 0x26 /* Public | MethodCloned */,
      22,    5,  139,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      26,    2,  150,    2, 0x02 /* Public */,
      26,    1,  155,    2, 0x22 /* Public | MethodCloned */,
      28,    1,  158,    2, 0x02 /* Public */,
      29,    1,  161,    2, 0x02 /* Public */,
      30,    1,  164,    2, 0x02 /* Public */,
      31,    1,  167,    2, 0x02 /* Public */,
      32,    0,  170,    2, 0x02 /* Public */,
      33,    0,  171,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 12, QMetaType::Bool,    9,   13,   14,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 16, QMetaType::Int, QMetaType::QString,    9,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::QRegExp,    9,   18,   21,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   18,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, 0x80000000 | 23, QMetaType::QRegExp, 0x80000000 | 16,    9,   18,   24,   25,   17,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   27,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Bool, 0x80000000 | 3,    4,
    0x80000000 | 3,
    QMetaType::Int,

       0        // eod
};

void ConnectionsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionsManager *_t = static_cast<ConnectionsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editConnection((*reinterpret_cast< ServerConfig(*)>(_a[1]))); break;
        case 1: _t->connectionAboutToBeEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->openConsole((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1]))); break;
        case 3: _t->openServerStats((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1]))); break;
        case 4: _t->openValueTab((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1])),(*reinterpret_cast< ConnectionsTree::KeyItem(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->newKeyDialog((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1])),(*reinterpret_cast< std::function<void()>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 6: _t->closeDbKeys((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRegExp(*)>(_a[3]))); break;
        case 7: _t->closeDbKeys((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->requestBulkOperation((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< BulkOperations::Manager::Operation(*)>(_a[3])),(*reinterpret_cast< QRegExp(*)>(_a[4])),(*reinterpret_cast< std::function<void()>(*)>(_a[5]))); break;
        case 9: _t->addNewConnection((*reinterpret_cast< const ServerConfig(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->addNewConnection((*reinterpret_cast< const ServerConfig(*)>(_a[1]))); break;
        case 11: _t->updateConnection((*reinterpret_cast< const ServerConfig(*)>(_a[1]))); break;
        case 12: { bool _r = _t->importConnections((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->saveConnectionsConfigToFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->testConnectionSettings((*reinterpret_cast< const ServerConfig(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { ServerConfig _r = _t->createEmptyConfig();
            if (_a[0]) *reinterpret_cast< ServerConfig*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->size();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerConfig >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerConfig >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerConfig >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerConfig >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerConfig >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConnectionsManager::*_t)(ServerConfig );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::editConnection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ConnectionsManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::connectionAboutToBeEdited)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ConnectionsManager::*_t)(QSharedPointer<RedisClient::Connection> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::openConsole)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ConnectionsManager::*_t)(QSharedPointer<RedisClient::Connection> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::openServerStats)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ConnectionsManager::*_t)(QSharedPointer<RedisClient::Connection> , ConnectionsTree::KeyItem & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::openValueTab)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ConnectionsManager::*_t)(QSharedPointer<RedisClient::Connection> , std::function<void()> , int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::newKeyDialog)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ConnectionsManager::*_t)(QSharedPointer<RedisClient::Connection> , int , const QRegExp & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::closeDbKeys)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ConnectionsManager::*_t)(QSharedPointer<RedisClient::Connection> , int , BulkOperations::Manager::Operation , QRegExp , std::function<void()> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConnectionsManager::requestBulkOperation)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject ConnectionsManager::staticMetaObject = {
    { &ConnectionsTree::Model::staticMetaObject, qt_meta_stringdata_ConnectionsManager.data,
      qt_meta_data_ConnectionsManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConnectionsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionsManager.stringdata0))
        return static_cast<void*>(const_cast< ConnectionsManager*>(this));
    if (!strcmp(_clname, "BulkOperations::ConnectionsModel"))
        return static_cast< BulkOperations::ConnectionsModel*>(const_cast< ConnectionsManager*>(this));
    return ConnectionsTree::Model::qt_metacast(_clname);
}

int ConnectionsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectionsTree::Model::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void ConnectionsManager::editConnection(ServerConfig _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectionsManager::connectionAboutToBeEdited(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConnectionsManager::openConsole(QSharedPointer<RedisClient::Connection> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConnectionsManager::openServerStats(QSharedPointer<RedisClient::Connection> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConnectionsManager::openValueTab(QSharedPointer<RedisClient::Connection> _t1, ConnectionsTree::KeyItem & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ConnectionsManager::newKeyDialog(QSharedPointer<RedisClient::Connection> _t1, std::function<void()> _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ConnectionsManager::closeDbKeys(QSharedPointer<RedisClient::Connection> _t1, int _t2, const QRegExp & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 8
void ConnectionsManager::requestBulkOperation(QSharedPointer<RedisClient::Connection> _t1, int _t2, BulkOperations::Manager::Operation _t3, QRegExp _t4, std::function<void()> _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
