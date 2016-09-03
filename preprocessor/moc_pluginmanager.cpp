/****************************************************************************
** Meta object code from reading C++ file 'pluginmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pluginmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   14,   38,   14, 0x0a,
      57,   14,   38,   14, 0x0a,
      82,   73,   14,   14, 0x0a,
     109,  104,   14,   14, 0x0a,
     136,  126,   14,   14, 0x0a,
     172,  164,   14,   14, 0x0a,
     196,  191,   14,   14, 0x0a,
     219,  191,   14,   14, 0x0a,
     250,  237,   38,   14, 0x0a,
     287,  280,   38,   14, 0x2a,
     355,  312,   38,   14, 0x0a,
     451,  414,   38,   14, 0x2a,
     540,  505,   38,   14, 0x0a,
     622,  593,   38,   14, 0x2a,
     710,  670,   38,   14, 0x0a,
     801,  767,   38,   14, 0x2a,
     862,  853,   38,   14, 0x0a,
     883,   14,   38,   14, 0x0a,
     906,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PluginManager[] = {
    "PluginManager\0\0success\0finished(bool)\0"
    "bool\0loadPlugins()\0unloadPlugins()\0"
    "filename\0setInputFile(QString)\0name\0"
    "setName(QString)\0directory\0"
    "setOutputDirectory(QString)\0enabled\0"
    "setPackaging(bool)\0size\0setDictionarySize(int)\0"
    "setBlockSize(int)\0plugin,async\0"
    "processImporter(QString,bool)\0plugin\0"
    "processImporter(QString)\0"
    "moduleName,importer,router,gpsLookup,async\0"
    "processRoutingModule(QString,QString,QString,QString,bool)\0"
    "moduleName,importer,router,gpsLookup\0"
    "processRoutingModule(QString,QString,QString,QString)\0"
    "moduleName,importer,renderer,async\0"
    "processRenderingModule(QString,QString,QString,bool)\0"
    "moduleName,importer,renderer\0"
    "processRenderingModule(QString,QString,QString)\0"
    "moduleName,importer,addressLookup,async\0"
    "processAddressLookupModule(QString,QString,QString,bool)\0"
    "moduleName,importer,addressLookup\0"
    "processAddressLookupModule(QString,QString,QString)\0"
    "importer\0writeConfig(QString)\0"
    "deleteTemporaryFiles()\0finish()\0"
};

void PluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginManager *_t = static_cast<PluginManager *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->loadPlugins();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->unloadPlugins();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->setInputFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setOutputDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setPackaging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setDictionarySize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setBlockSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { bool _r = _t->processImporter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->processImporter((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->processRoutingModule((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->processRoutingModule((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->processRenderingModule((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->processRenderingModule((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->processAddressLookupModule((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->processAddressLookupModule((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->writeConfig((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->deleteTemporaryFiles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: _t->finish(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PluginManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PluginManager,
      qt_meta_data_PluginManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginManager))
        return static_cast<void*>(const_cast< PluginManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void PluginManager::finished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
