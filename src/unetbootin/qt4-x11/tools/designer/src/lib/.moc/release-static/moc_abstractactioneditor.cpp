/****************************************************************************
** Meta object code from reading C++ file 'abstractactioneditor.h'
**
** Created: Thu Mar 5 20:46:41 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sdk/abstractactioneditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractactioneditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDesignerActionEditorInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      43,   32,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QDesignerActionEditorInterface[] = {
    "QDesignerActionEditorInterface\0\0"
    "formWindow\0setFormWindow(QDesignerFormWindowInterface*)\0"
};

const QMetaObject QDesignerActionEditorInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesignerActionEditorInterface,
      qt_meta_data_QDesignerActionEditorInterface, 0 }
};

const QMetaObject *QDesignerActionEditorInterface::metaObject() const
{
    return &staticMetaObject;
}

void *QDesignerActionEditorInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerActionEditorInterface))
        return static_cast<void*>(const_cast< QDesignerActionEditorInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesignerActionEditorInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
