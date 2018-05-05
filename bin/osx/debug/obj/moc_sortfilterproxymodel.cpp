/****************************************************************************
** Meta object code from reading C++ file 'sortfilterproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/modules/value-editor/sortfilterproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortfilterproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SortFilterProxyModel_t {
    QByteArrayData data[15];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SortFilterProxyModel_t qt_meta_stringdata_SortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SortFilterProxyModel"
QT_MOC_LITERAL(1, 21, 19), // "getOriginalRowIndex"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 1), // "i"
QT_MOC_LITERAL(4, 44, 6), // "source"
QT_MOC_LITERAL(5, 51, 8), // "sortRole"
QT_MOC_LITERAL(6, 60, 9), // "sortOrder"
QT_MOC_LITERAL(7, 70, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(8, 84, 10), // "filterRole"
QT_MOC_LITERAL(9, 95, 12), // "filterString"
QT_MOC_LITERAL(10, 108, 12), // "filterSyntax"
QT_MOC_LITERAL(11, 121, 12), // "FilterSyntax"
QT_MOC_LITERAL(12, 134, 6), // "RegExp"
QT_MOC_LITERAL(13, 141, 8), // "Wildcard"
QT_MOC_LITERAL(14, 150, 11) // "FixedString"

    },
    "SortFilterProxyModel\0getOriginalRowIndex\0"
    "\0i\0source\0sortRole\0sortOrder\0Qt::SortOrder\0"
    "filterRole\0filterString\0filterSyntax\0"
    "FilterSyntax\0RegExp\0Wildcard\0FixedString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortFilterProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   22, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Int, QMetaType::Int,    3,

 // properties: name, type, flags
       4, QMetaType::QObjectStar, 0x00095103,
       5, QMetaType::QByteArray, 0x00095103,
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::QByteArray, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,

 // enums: name, flags, count, data
      11, 0x0,    3,   44,

 // enum data: key, value
      12, uint(SortFilterProxyModel::RegExp),
      13, uint(SortFilterProxyModel::Wildcard),
      14, uint(SortFilterProxyModel::FixedString),

       0        // eod
};

void SortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SortFilterProxyModel *_t = static_cast<SortFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->getOriginalRowIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SortFilterProxyModel *_t = static_cast<SortFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->sortRole(); break;
        case 2: *reinterpret_cast< Qt::SortOrder*>(_v) = _t->sortOrder(); break;
        case 3: *reinterpret_cast< QByteArray*>(_v) = _t->filterRole(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->filterString(); break;
        case 5: *reinterpret_cast< FilterSyntax*>(_v) = _t->filterSyntax(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SortFilterProxyModel *_t = static_cast<SortFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setSortRole(*reinterpret_cast< QByteArray*>(_v)); break;
        case 2: _t->setSortOrder(*reinterpret_cast< Qt::SortOrder*>(_v)); break;
        case 3: _t->setFilterRole(*reinterpret_cast< QByteArray*>(_v)); break;
        case 4: _t->setFilterString(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFilterSyntax(*reinterpret_cast< FilterSyntax*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SortFilterProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_SortFilterProxyModel.data,
      qt_meta_data_SortFilterProxyModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SortFilterProxyModel.stringdata0))
        return static_cast<void*>(const_cast< SortFilterProxyModel*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< SortFilterProxyModel*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< SortFilterProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int SortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
