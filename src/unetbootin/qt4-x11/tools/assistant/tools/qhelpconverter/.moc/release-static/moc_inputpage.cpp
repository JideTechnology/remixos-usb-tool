/****************************************************************************
** Meta object code from reading C++ file 'inputpage.h'
**
** Created: Thu Mar 5 20:35:23 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inputpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputPage[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputPage[] = {
    "InputPage\0\0getFileName()\0"
};

const QMetaObject InputPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_InputPage,
      qt_meta_data_InputPage, 0 }
};

const QMetaObject *InputPage::metaObject() const
{
    return &staticMetaObject;
}

void *InputPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputPage))
        return static_cast<void*>(const_cast< InputPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int InputPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: getFileName(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
