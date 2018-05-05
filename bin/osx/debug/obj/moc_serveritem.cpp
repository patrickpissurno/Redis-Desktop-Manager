/****************************************************************************
** Meta object code from reading C++ file 'serveritem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/modules/connections-tree/items/serveritem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serveritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectionsTree__ServerItem_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectionsTree__ServerItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectionsTree__ServerItem_t qt_meta_stringdata_ConnectionsTree__ServerItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ConnectionsTree::ServerItem"
QT_MOC_LITERAL(1, 28, 19), // "editActionRequested"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "deleteActionRequested"
QT_MOC_LITERAL(4, 71, 4), // "load"
QT_MOC_LITERAL(5, 76, 6), // "unload"
QT_MOC_LITERAL(6, 83, 6), // "reload"
QT_MOC_LITERAL(7, 90, 4), // "edit"
QT_MOC_LITERAL(8, 95, 6), // "remove"
QT_MOC_LITERAL(9, 102, 11) // "openConsole"

    },
    "ConnectionsTree::ServerItem\0"
    "editActionRequested\0\0deleteActionRequested\0"
    "load\0unload\0reload\0edit\0remove\0"
    "openConsole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionsTree__ServerItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConnectionsTree::ServerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerItem *_t = static_cast<ServerItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editActionRequested(); break;
        case 1: _t->deleteActionRequested(); break;
        case 2: _t->load(); break;
        case 3: _t->unload(); break;
        case 4: _t->reload(); break;
        case 5: _t->edit(); break;
        case 6: _t->remove(); break;
        case 7: _t->openConsole(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ServerItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ServerItem::editActionRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ServerItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ServerItem::deleteActionRequested)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ConnectionsTree::ServerItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConnectionsTree__ServerItem.data,
      qt_meta_data_ConnectionsTree__ServerItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ConnectionsTree::ServerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionsTree::ServerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionsTree__ServerItem.stringdata0))
        return static_cast<void*>(const_cast< ServerItem*>(this));
    if (!strcmp(_clname, "TreeItem"))
        return static_cast< TreeItem*>(const_cast< ServerItem*>(this));
    return QObject::qt_metacast(_clname);
}

int ConnectionsTree::ServerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ConnectionsTree::ServerItem::editActionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ConnectionsTree::ServerItem::deleteActionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
