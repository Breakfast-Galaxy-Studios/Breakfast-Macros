/****************************************************************************
** Meta object code from reading C++ file 'Settings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Settings.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsUI_t {
    const uint offsetsAndSize[26];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SettingsUI_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SettingsUI_t qt_meta_stringdata_SettingsUI = {
    {
QT_MOC_LITERAL(0, 10), // "SettingsUI"
QT_MOC_LITERAL(11, 14), // "darkModeAction"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 1), // "a"
QT_MOC_LITERAL(29, 15), // "debugModeAction"
QT_MOC_LITERAL(45, 16), // "openToTrayAction"
QT_MOC_LITERAL(62, 20), // "minimizeToTrayAction"
QT_MOC_LITERAL(83, 19), // "openOnStartupAction"
QT_MOC_LITERAL(103, 17), // "registerDevAction"
QT_MOC_LITERAL(121, 19), // "resetDeviceIDAction"
QT_MOC_LITERAL(141, 22), // "typeNonMacroKeysAction"
QT_MOC_LITERAL(164, 17), // "registerKeyAction"
QT_MOC_LITERAL(182, 16) // "clearAppendedKey"

    },
    "SettingsUI\0darkModeAction\0\0a\0"
    "debugModeAction\0openToTrayAction\0"
    "minimizeToTrayAction\0openOnStartupAction\0"
    "registerDevAction\0resetDeviceIDAction\0"
    "typeNonMacroKeysAction\0registerKeyAction\0"
    "clearAppendedKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsUI[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x08,    1 /* Private */,
       4,    1,   77,    2, 0x08,    3 /* Private */,
       5,    1,   80,    2, 0x08,    5 /* Private */,
       6,    1,   83,    2, 0x08,    7 /* Private */,
       7,    1,   86,    2, 0x08,    9 /* Private */,
       8,    0,   89,    2, 0x08,   11 /* Private */,
       9,    0,   90,    2, 0x08,   12 /* Private */,
      10,    1,   91,    2, 0x08,   13 /* Private */,
      11,    0,   94,    2, 0x08,   15 /* Private */,
      12,    0,   95,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->darkModeAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->debugModeAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->openToTrayAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->minimizeToTrayAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->openOnStartupAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->registerDevAction(); break;
        case 6: _t->resetDeviceIDAction(); break;
        case 7: _t->typeNonMacroKeysAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->registerKeyAction(); break;
        case 9: _t->clearAppendedKey(); break;
        default: ;
        }
    }
}

const QMetaObject SettingsUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsUI.offsetsAndSize,
    qt_meta_data_SettingsUI,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SettingsUI_t
, QtPrivate::TypeAndForceComplete<SettingsUI, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SettingsUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
