/****************************************************************************
** Meta object code from reading C++ file 'valueviewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/modules/value-editor/valueviewmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valueviewmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ValueEditor__ValueViewModel_t {
    QByteArrayData data[20];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ValueEditor__ValueViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ValueEditor__ValueViewModel_t qt_meta_stringdata_ValueEditor__ValueViewModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ValueEditor::ValueViewModel"
QT_MOC_LITERAL(1, 28, 10), // "rowsLoaded"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "start"
QT_MOC_LITERAL(4, 46, 5), // "count"
QT_MOC_LITERAL(5, 52, 5), // "error"
QT_MOC_LITERAL(6, 58, 11), // "isRowLoaded"
QT_MOC_LITERAL(7, 70, 1), // "i"
QT_MOC_LITERAL(8, 72, 6), // "addRow"
QT_MOC_LITERAL(9, 79, 3), // "row"
QT_MOC_LITERAL(10, 83, 9), // "updateRow"
QT_MOC_LITERAL(11, 93, 9), // "deleteRow"
QT_MOC_LITERAL(12, 103, 6), // "getRow"
QT_MOC_LITERAL(13, 110, 8), // "loadRows"
QT_MOC_LITERAL(14, 119, 5), // "limit"
QT_MOC_LITERAL(15, 125, 10), // "isMultiRow"
QT_MOC_LITERAL(16, 136, 6), // "reload"
QT_MOC_LITERAL(17, 143, 13), // "totalRowCount"
QT_MOC_LITERAL(18, 157, 8), // "pageSize"
QT_MOC_LITERAL(19, 166, 14) // "getColumnNames"

    },
    "ValueEditor::ValueViewModel\0rowsLoaded\0"
    "\0start\0count\0error\0isRowLoaded\0i\0"
    "addRow\0row\0updateRow\0deleteRow\0getRow\0"
    "loadRows\0limit\0isMultiRow\0reload\0"
    "totalRowCount\0pageSize\0getColumnNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValueEditor__ValueViewModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    1,   84,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   87,    2, 0x02 /* Public */,
       8,    1,   90,    2, 0x02 /* Public */,
      10,    2,   93,    2, 0x02 /* Public */,
      11,    1,   98,    2, 0x02 /* Public */,
      12,    1,  101,    2, 0x02 /* Public */,
      13,    2,  104,    2, 0x02 /* Public */,
      15,    0,  109,    2, 0x02 /* Public */,
      16,    0,  110,    2, 0x02 /* Public */,
      17,    0,  111,    2, 0x02 /* Public */,
      18,    0,  112,    2, 0x02 /* Public */,
      19,    0,  113,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QVariantMap,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariantMap,    7,    9,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::QVariantMap, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   14,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::QVariantList,

       0        // eod
};

void ValueEditor::ValueViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValueViewModel *_t = static_cast<ValueViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowsLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->isRowLoaded((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->addRow((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 4: _t->updateRow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 5: _t->deleteRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { QVariantMap _r = _t->getRow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->loadRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { bool _r = _t->isMultiRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->reload(); break;
        case 10: { int _r = _t->totalRowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->pageSize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { QVariantList _r = _t->getColumnNames();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ValueViewModel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ValueViewModel::rowsLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ValueViewModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ValueViewModel::error)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ValueEditor::ValueViewModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ValueEditor__ValueViewModel.data,
      qt_meta_data_ValueEditor__ValueViewModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ValueEditor::ValueViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValueEditor::ValueViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ValueEditor__ValueViewModel.stringdata0))
        return static_cast<void*>(const_cast< ValueViewModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ValueEditor::ValueViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ValueEditor::ValueViewModel::rowsLoaded(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ValueEditor::ValueViewModel::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
