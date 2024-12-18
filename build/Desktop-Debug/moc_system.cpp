/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../system.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TSystem_t {
    QByteArrayData data[21];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TSystem_t qt_meta_stringdata_TSystem = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TSystem"
QT_MOC_LITERAL(1, 8, 18), // "show_current_tasks"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "QVector<TTask>"
QT_MOC_LITERAL(4, 43, 23), // "show_current_processors"
QT_MOC_LITERAL(5, 67, 26), // "remove_task_from_processor"
QT_MOC_LITERAL(6, 94, 14), // "warning_signal"
QT_MOC_LITERAL(7, 109, 8), // "finished"
QT_MOC_LITERAL(8, 118, 12), // "current_time"
QT_MOC_LITERAL(9, 131, 21), // "set_task_to_processor"
QT_MOC_LITERAL(10, 153, 6), // "TTask*"
QT_MOC_LITERAL(11, 160, 10), // "new_record"
QT_MOC_LITERAL(12, 171, 15), // "QVector<TTask*>"
QT_MOC_LITERAL(13, 187, 4), // "tact"
QT_MOC_LITERAL(14, 192, 12), // "add_to_queue"
QT_MOC_LITERAL(15, 205, 11), // "add_to_list"
QT_MOC_LITERAL(16, 217, 5), // "reset"
QT_MOC_LITERAL(17, 223, 7), // "control"
QT_MOC_LITERAL(18, 231, 22), // "changeProcessorsNumber"
QT_MOC_LITERAL(19, 254, 17), // "changeTasksNumber"
QT_MOC_LITERAL(20, 272, 17) // "task_to_processor"

    },
    "TSystem\0show_current_tasks\0\0QVector<TTask>\0"
    "show_current_processors\0"
    "remove_task_from_processor\0warning_signal\0"
    "finished\0current_time\0set_task_to_processor\0"
    "TTask*\0new_record\0QVector<TTask*>\0"
    "tact\0add_to_queue\0add_to_list\0reset\0"
    "control\0changeProcessorsNumber\0"
    "changeTasksNumber\0task_to_processor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    1,  100,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       7,    0,  106,    2, 0x06 /* Public */,
       8,    1,  107,    2, 0x06 /* Public */,
       9,    2,  110,    2, 0x06 /* Public */,
      11,    2,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  120,    2, 0x08 /* Private */,
      14,    1,  121,    2, 0x08 /* Private */,
      15,    1,  124,    2, 0x08 /* Private */,
      16,    0,  127,    2, 0x08 /* Private */,
      17,    1,  128,    2, 0x08 /* Private */,
      18,    1,  131,    2, 0x08 /* Private */,
      19,    1,  134,    2, 0x08 /* Private */,
      20,    1,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void TSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_current_tasks((*reinterpret_cast< QVector<TTask>(*)>(_a[1]))); break;
        case 1: _t->show_current_processors((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->remove_task_from_processor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->warning_signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->finished(); break;
        case 5: _t->current_time((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->set_task_to_processor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< TTask*(*)>(_a[2]))); break;
        case 7: _t->new_record((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVector<TTask*>(*)>(_a[2]))); break;
        case 8: _t->tact(); break;
        case 9: _t->add_to_queue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->add_to_list((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->reset(); break;
        case 12: _t->control((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->changeProcessorsNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->changeTasksNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->task_to_processor((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TSystem::*)(QVector<TTask> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::show_current_tasks)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TSystem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::show_current_processors)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TSystem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::remove_task_from_processor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TSystem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::warning_signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::finished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TSystem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::current_time)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TSystem::*)(int , TTask * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::set_task_to_processor)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TSystem::*)(int , QVector<TTask*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSystem::new_record)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TSystem.data,
    qt_meta_data_TSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void TSystem::show_current_tasks(QVector<TTask> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TSystem::show_current_processors(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TSystem::remove_task_from_processor(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TSystem::warning_signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TSystem::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TSystem::current_time(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TSystem::set_task_to_processor(int _t1, TTask * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TSystem::new_record(int _t1, QVector<TTask*> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
