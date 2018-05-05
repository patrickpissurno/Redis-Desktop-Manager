/****************************************************************************
** Meta object code from reading C++ file 'tabviewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/modules/common/tabviewmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabviewmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabViewModel_t {
    QByteArrayData data[12];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabViewModel_t qt_meta_stringdata_TabViewModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TabViewModel"
QT_MOC_LITERAL(1, 13, 16), // "changeCurrentTab"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 1), // "i"
QT_MOC_LITERAL(4, 33, 7), // "openTab"
QT_MOC_LITERAL(5, 41, 39), // "QSharedPointer<RedisClient::C..."
QT_MOC_LITERAL(6, 81, 10), // "connection"
QT_MOC_LITERAL(7, 92, 26), // "closeAllTabsWithConnection"
QT_MOC_LITERAL(8, 119, 8), // "closeTab"
QT_MOC_LITERAL(9, 128, 13), // "setCurrentTab"
QT_MOC_LITERAL(10, 142, 8), // "getValue"
QT_MOC_LITERAL(11, 151, 9) // "tabsCount"

    },
    "TabViewModel\0changeCurrentTab\0\0i\0"
    "openTab\0QSharedPointer<RedisClient::Connection>\0"
    "connection\0closeAllTabsWithConnection\0"
    "closeTab\0setCurrentTab\0getValue\0"
    "tabsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x02 /* Public */,
       9,    1,   61,    2, 0x02 /* Public */,
      10,    1,   64,    2, 0x02 /* Public */,
      11,    0,   67,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::QObjectStar, QMetaType::Int,    3,
    QMetaType::Int,

       0        // eod
};

void TabViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabViewModel *_t = static_cast<TabViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCurrentTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->openTab((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1]))); break;
        case 2: _t->closeAllTabsWithConnection((*reinterpret_cast< QSharedPointer<RedisClient::Connection>(*)>(_a[1]))); break;
        case 3: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setCurrentTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { QObject* _r = _t->getValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->tabsCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<RedisClient::Connection> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TabViewModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TabViewModel::changeCurrentTab)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TabViewModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_TabViewModel.data,
      qt_meta_data_TabViewModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TabViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabViewModel.stringdata0))
        return static_cast<void*>(const_cast< TabViewModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int TabViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TabViewModel::changeCurrentTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
