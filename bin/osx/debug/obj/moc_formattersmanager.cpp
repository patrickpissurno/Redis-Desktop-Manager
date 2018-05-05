/****************************************************************************
** Meta object code from reading C++ file 'formattersmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/modules/value-editor/formattersmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formattersmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ValueEditor__FormattersManager_t {
    QByteArrayData data[13];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ValueEditor__FormattersManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ValueEditor__FormattersManager_t qt_meta_stringdata_ValueEditor__FormattersManager = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ValueEditor::FormattersManager"
QT_MOC_LITERAL(1, 31, 5), // "error"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3), // "msg"
QT_MOC_LITERAL(4, 42, 6), // "decode"
QT_MOC_LITERAL(5, 49, 13), // "formatterName"
QT_MOC_LITERAL(6, 63, 4), // "data"
QT_MOC_LITERAL(7, 68, 8), // "QJSValue"
QT_MOC_LITERAL(8, 77, 10), // "jsCallback"
QT_MOC_LITERAL(9, 88, 7), // "isValid"
QT_MOC_LITERAL(10, 96, 6), // "encode"
QT_MOC_LITERAL(11, 103, 12), // "getPlainList"
QT_MOC_LITERAL(12, 116, 14) // "formattersPath"

    },
    "ValueEditor::FormattersManager\0error\0"
    "\0msg\0decode\0formatterName\0data\0QJSValue\0"
    "jsCallback\0isValid\0encode\0getPlainList\0"
    "formattersPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValueEditor__FormattersManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    3,   47,    2, 0x02 /* Public */,
       9,    3,   54,    2, 0x02 /* Public */,
      10,    3,   61,    2, 0x02 /* Public */,
      11,    0,   68,    2, 0x02 /* Public */,
      12,    0,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, 0x80000000 | 7,    5,    6,    8,
    QMetaType::QStringList,
    QMetaType::QString,

       0        // eod
};

void ValueEditor::FormattersManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormattersManager *_t = static_cast<FormattersManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->decode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3]))); break;
        case 2: _t->isValid((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3]))); break;
        case 3: _t->encode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3]))); break;
        case 4: { QStringList _r = _t->getPlainList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->formattersPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormattersManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormattersManager::error)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ValueEditor::FormattersManager::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ValueEditor__FormattersManager.data,
      qt_meta_data_ValueEditor__FormattersManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ValueEditor::FormattersManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValueEditor::FormattersManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ValueEditor__FormattersManager.stringdata0))
        return static_cast<void*>(const_cast< FormattersManager*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ValueEditor::FormattersManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ValueEditor::FormattersManager::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
