/****************************************************************************
** Meta object code from reading C++ file 'keymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../Documents/GitHub/Redis-Desktop-Manager/src/modules/value-editor/keymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ValueEditor__ModelSignals_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ValueEditor__ModelSignals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ValueEditor__ModelSignals_t qt_meta_stringdata_ValueEditor__ModelSignals = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ValueEditor::ModelSignals"
QT_MOC_LITERAL(1, 26, 10), // "dataLoaded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7) // "removed"

    },
    "ValueEditor::ModelSignals\0dataLoaded\0"
    "\0removed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValueEditor__ModelSignals[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ValueEditor::ModelSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelSignals *_t = static_cast<ModelSignals *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataLoaded(); break;
        case 1: _t->removed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModelSignals::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelSignals::dataLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModelSignals::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelSignals::removed)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ValueEditor::ModelSignals::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ValueEditor__ModelSignals.data,
      qt_meta_data_ValueEditor__ModelSignals,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ValueEditor::ModelSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValueEditor::ModelSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ValueEditor__ModelSignals.stringdata0))
        return static_cast<void*>(const_cast< ModelSignals*>(this));
    return QObject::qt_metacast(_clname);
}

int ValueEditor::ModelSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ValueEditor::ModelSignals::dataLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ValueEditor::ModelSignals::removed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
