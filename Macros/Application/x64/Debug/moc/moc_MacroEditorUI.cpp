/****************************************************************************
** Meta object code from reading C++ file 'MacroEditorUI.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MacroEditorUI.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MacroEditorUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MacroEditorUI_t {
    const uint offsetsAndSize[26];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MacroEditorUI_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MacroEditorUI_t qt_meta_stringdata_MacroEditorUI = {
    {
QT_MOC_LITERAL(0, 13), // "MacroEditorUI"
QT_MOC_LITERAL(14, 15), // "saveMacroAction"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 19), // "saveMacroNameAction"
QT_MOC_LITERAL(51, 9), // "newAction"
QT_MOC_LITERAL(61, 12), // "removeAction"
QT_MOC_LITERAL(74, 10), // "editAction"
QT_MOC_LITERAL(85, 11), // "QModelIndex"
QT_MOC_LITERAL(97, 5), // "index"
QT_MOC_LITERAL(103, 15), // "keyChooseAction"
QT_MOC_LITERAL(119, 21), // "listContextMenuAction"
QT_MOC_LITERAL(141, 3), // "pos"
QT_MOC_LITERAL(145, 5) // "state"

    },
    "MacroEditorUI\0saveMacroAction\0\0"
    "saveMacroNameAction\0newAction\0"
    "removeAction\0editAction\0QModelIndex\0"
    "index\0keyChooseAction\0listContextMenuAction\0"
    "pos\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MacroEditorUI[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    1,   66,    2, 0x08,    5 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,
      10,    1,   70,    2, 0x08,    8 /* Private */,
       1,    1,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void MacroEditorUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MacroEditorUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->saveMacroAction(); break;
        case 1: _t->saveMacroNameAction(); break;
        case 2: _t->newAction(); break;
        case 3: _t->removeAction(); break;
        case 4: _t->editAction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->keyChooseAction(); break;
        case 6: _t->listContextMenuAction((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->saveMacroAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MacroEditorUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MacroEditorUI.offsetsAndSize,
    qt_meta_data_MacroEditorUI,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MacroEditorUI_t
, QtPrivate::TypeAndForceComplete<MacroEditorUI, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MacroEditorUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MacroEditorUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MacroEditorUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MacroEditorUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
