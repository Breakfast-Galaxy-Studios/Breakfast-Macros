/****************************************************************************
** Meta object code from reading C++ file 'MacroApp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MacroApp.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MacroApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MacroApp_t {
    const uint offsetsAndSize[26];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MacroApp_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MacroApp_t qt_meta_stringdata_MacroApp = {
    {
QT_MOC_LITERAL(0, 8), // "MacroApp"
QT_MOC_LITERAL(9, 20), // "settingsButtonAction"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 15), // "openMacroEditor"
QT_MOC_LITERAL(47, 11), // "QModelIndex"
QT_MOC_LITERAL(59, 5), // "index"
QT_MOC_LITERAL(65, 17), // "deleteMacroAction"
QT_MOC_LITERAL(83, 20), // "newMacroButtonAction"
QT_MOC_LITERAL(104, 20), // "RestoreWindowTrigger"
QT_MOC_LITERAL(125, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(159, 2), // "RW"
QT_MOC_LITERAL(162, 21), // "listContextMenuAction"
QT_MOC_LITERAL(184, 3) // "pos"

    },
    "MacroApp\0settingsButtonAction\0\0"
    "openMacroEditor\0QModelIndex\0index\0"
    "deleteMacroAction\0newMacroButtonAction\0"
    "RestoreWindowTrigger\0"
    "QSystemTrayIcon::ActivationReason\0RW\0"
    "listContextMenuAction\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MacroApp[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    1,   51,    2, 0x08,    2 /* Private */,
       6,    0,   54,    2, 0x08,    4 /* Private */,
       7,    0,   55,    2, 0x08,    5 /* Private */,
       8,    1,   56,    2, 0x08,    6 /* Private */,
      11,    1,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QPoint,   12,

       0        // eod
};

void MacroApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroApp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->settingsButtonAction(); break;
        case 1: _t->openMacroEditor((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->deleteMacroAction(); break;
        case 3: _t->newMacroButtonAction(); break;
        case 4: _t->RestoreWindowTrigger((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 5: _t->listContextMenuAction((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MacroApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MacroApp.offsetsAndSize,
    qt_meta_data_MacroApp,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MacroApp_t
, QtPrivate::TypeAndForceComplete<MacroApp, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>


>,
    nullptr
} };


const QMetaObject *MacroApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MacroApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MacroApp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MacroApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
