/****************************************************************************
** Meta object code from reading C++ file 'brushmanagerproxy.h'
**
** Created: Thu Mar 5 20:50:49 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../formeditor/brushmanagerproxy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'brushmanagerproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__BrushManagerProxy[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      41,   39,   38,   38, 0x08,
      73,   68,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__BrushManagerProxy[] = {
    "qdesigner_internal::BrushManagerProxy\0"
    "\0,\0brushAdded(QString,QBrush)\0name\0"
    "brushRemoved(QString)\0"
};

const QMetaObject qdesigner_internal::BrushManagerProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__BrushManagerProxy,
      qt_meta_data_qdesigner_internal__BrushManagerProxy, 0 }
};

const QMetaObject *qdesigner_internal::BrushManagerProxy::metaObject() const
{
    return &staticMetaObject;
}

void *qdesigner_internal::BrushManagerProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__BrushManagerProxy))
        return static_cast<void*>(const_cast< BrushManagerProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::BrushManagerProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: d_func()->brushAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 1: d_func()->brushRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
