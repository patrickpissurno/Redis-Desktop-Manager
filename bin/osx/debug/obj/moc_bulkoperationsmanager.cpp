/****************************************************************************
** Meta object code from reading C++ file 'bulkoperationsmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/modules/bulk-operations/bulkoperationsmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bulkoperationsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BulkOperations__Manager_t {
    QByteArrayData data[33];
    char stringdata0[496];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BulkOperations__Manager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BulkOperations__Manager_t qt_meta_stringdata_BulkOperations__Manager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "BulkOperations::Manager"
QT_MOC_LITERAL(1, 24, 10), // "openDialog"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "operationName"
QT_MOC_LITERAL(4, 50, 12), // "affectedKeys"
QT_MOC_LITERAL(5, 63, 1), // "r"
QT_MOC_LITERAL(6, 65, 17), // "operationFinished"
QT_MOC_LITERAL(7, 83, 5), // "error"
QT_MOC_LITERAL(8, 89, 1), // "e"
QT_MOC_LITERAL(9, 91, 21), // "connectionNameChanged"
QT_MOC_LITERAL(10, 113, 14), // "dbIndexChanged"
QT_MOC_LITERAL(11, 128, 17), // "keyPatternChanged"
QT_MOC_LITERAL(12, 146, 24), // "operationProgressChanged"
QT_MOC_LITERAL(13, 171, 20), // "requestBulkOperation"
QT_MOC_LITERAL(14, 192, 39), // "QSharedPointer<RedisClient::C..."
QT_MOC_LITERAL(15, 232, 10), // "connection"
QT_MOC_LITERAL(16, 243, 7), // "dbIndex"
QT_MOC_LITERAL(17, 251, 9), // "Operation"
QT_MOC_LITERAL(18, 261, 2), // "op"
QT_MOC_LITERAL(19, 264, 10), // "keyPattern"
QT_MOC_LITERAL(20, 275, 21), // "std::function<void()>"
QT_MOC_LITERAL(21, 297, 8), // "callback"
QT_MOC_LITERAL(22, 306, 12), // "hasOperation"
QT_MOC_LITERAL(23, 319, 24), // "multiConnectionOperation"
QT_MOC_LITERAL(24, 344, 14), // "clearOperation"
QT_MOC_LITERAL(25, 359, 12), // "runOperation"
QT_MOC_LITERAL(26, 372, 16), // "targetConnection"
QT_MOC_LITERAL(27, 389, 8), // "targetDb"
QT_MOC_LITERAL(28, 398, 15), // "getAffectedKeys"
QT_MOC_LITERAL(29, 414, 27), // "notifyAboutOperationSuccess"
QT_MOC_LITERAL(30, 442, 20), // "getTargetConnections"
QT_MOC_LITERAL(31, 463, 14), // "connectionName"
QT_MOC_LITERAL(32, 478, 17) // "operationProgress"

    },
    "BulkOperations::Manager\0openDialog\0\0"
    "operationName\0affectedKeys\0r\0"
    "operationFinished\0error\0e\0"
    "connectionNameChanged\0dbIndexChanged\0"
    "keyPatternChanged\0operationProgressChanged\0"
    "requestBulkOperation\0"
    "QSharedPointer<RedisClient::Connection>\0"
    "connection\0dbIndex\0Operation\0op\0"
    "keyPattern\0std::function<void()>\0"
    "callback\0hasOperation\0multiConnectionOperation\0"
    "clearOperation\0runOperation\0"
    "targetConnection\0targetDb\0getAffectedKeys\0"
    "notifyAboutOperationSuccess\0"
    "getTargetConnections\0connectionName\0"
    "operationProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BulkOperations__Manager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       4,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    1,  107,    2, 0x06 /* Public */,
       6,    0,  110,    2, 0x06 /* Public */,
       7,    1,  111,    2, 0x06 /* Public */,
       9,    0,  114,    2, 0x06 /* Public */,
      10,    0,  115,    2, 0x06 /* Public */,
      11,    0,  116,    2, 0x06 /* Public */,
      12,    0,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    5,  118,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      22,    0,  129,    2, 0x02 /* Public */,
      23,    0,  130,    2, 0x02 /* Public */,
      24,    0,  131,    2, 0x02 /* Public */,
      25,    2,  132,    2, 0x02 /* Public */,
      25,    1,  137,    2, 0x22 /* Public | MethodCloned */,
      25,    0,  140,    2, 0x22 /* Public | MethodCloned */,
      28,    0,  141,    2, 0x02 /* Public */,
      29,    0,  142,    2, 0x02 /* Public */,
      30,    0,  143,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int, 0x80000000 | 17, QMetaType::QRegExp, 0x80000000 | 20,   15,   16,   18,   19,   21,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariant,

 // properties: name, type, flags
      31, QMetaType::QString, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      19, QMetaType::QString, 0x00495001,
      32, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       4,
       5,
       6,
       7,

       0        // eod
};

void BulkOperations::Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Manager *_t = static_cast<Manager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->affectedKeys((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->operationFinished(); break;
        case 3: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->connectionNameChanged(); break;
        case 5: _t->dbIndexChanged(); break;
        case 6: _t->keyPatternChanged(); break;
        case 7: _t->operationProgressChanged(); break;
        case 8: _t->requestBulkOperation((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Operation(*)>(_a[3])),(*reinterpret_cast< QRegExp(*)>(_a[4])),(*reinterpret_cast< std::function<void()>(*)>(_a[5]))); break;
        case 9: { bool _r = _t->hasOperation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->multiConnectionOperation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->clearOperation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->runOperation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->runOperation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->runOperation(); break;
        case 15: _t->getAffectedKeys(); break;
        case 16: _t->notifyAboutOperationSuccess(); break;
        case 17: { QVariant _r = _t->getTargetConnections();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Manager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::openDialog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Manager::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::affectedKeys)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Manager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::operationFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Manager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::error)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Manager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::connectionNameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Manager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::dbIndexChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Manager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::keyPatternChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Manager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::operationProgressChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Manager *_t = static_cast<Manager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->connectionName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->dbIndex(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->keyPattern(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->operationProgress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BulkOperations::Manager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BulkOperations__Manager.data,
      qt_meta_data_BulkOperations__Manager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BulkOperations::Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BulkOperations::Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BulkOperations__Manager.stringdata0))
        return static_cast<void*>(const_cast< Manager*>(this));
    return QObject::qt_metacast(_clname);
}

int BulkOperations::Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BulkOperations::Manager::openDialog(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BulkOperations::Manager::affectedKeys(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BulkOperations::Manager::operationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BulkOperations::Manager::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BulkOperations::Manager::connectionNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BulkOperations::Manager::dbIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BulkOperations::Manager::keyPatternChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void BulkOperations::Manager::operationProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
