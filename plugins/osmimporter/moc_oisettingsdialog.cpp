/****************************************************************************
** Meta object code from reading C++ file 'oisettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "oisettingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oisettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OISettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   18,   17,   17, 0x0a,
      57,   17,   17,   17, 0x0a,
      79,   17,   17,   17, 0x0a,
      93,   17,   17,   17, 0x0a,
     110,   17,   17,   17, 0x0a,
     122,  117,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OISettingsDialog[] = {
    "OISettingsDialog\0\0currentRow\0"
    "currentLanguageChanged(int)\0"
    "currentIndexChanged()\0addLanguage()\0"
    "deleteLanguage()\0edit()\0text\0"
    "filenameChanged(QString)\0"
};

void OISettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OISettingsDialog *_t = static_cast<OISettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->currentLanguageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged(); break;
        case 2: _t->addLanguage(); break;
        case 3: _t->deleteLanguage(); break;
        case 4: _t->edit(); break;
        case 5: _t->filenameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OISettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OISettingsDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OISettingsDialog,
      qt_meta_data_OISettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OISettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OISettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OISettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OISettingsDialog))
        return static_cast<void*>(const_cast< OISettingsDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int OISettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
