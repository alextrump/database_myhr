/****************************************************************************
** Meta object code from reading C++ file 'dialog_addstaffabsence.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../_Databases/111MYHR/db_course_work-master/dialog_addstaffabsence.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_addstaffabsence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_addStaffAbsence_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_addStaffAbsence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_addStaffAbsence_t qt_meta_stringdata_Dialog_addStaffAbsence = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Dialog_addStaffAbsence"
QT_MOC_LITERAL(1, 23, 13), // "showInpValues"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "on_createAbsType_clicked"
QT_MOC_LITERAL(4, 63, 6) // "accept"

    },
    "Dialog_addStaffAbsence\0showInpValues\0"
    "\0on_createAbsType_clicked\0accept"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_addStaffAbsence[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog_addStaffAbsence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_addStaffAbsence *_t = static_cast<Dialog_addStaffAbsence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showInpValues(); break;
        case 1: _t->on_createAbsType_clicked(); break;
        case 2: _t->accept(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Dialog_addStaffAbsence::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_addStaffAbsence.data,
      qt_meta_data_Dialog_addStaffAbsence,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog_addStaffAbsence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_addStaffAbsence::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_addStaffAbsence.stringdata0))
        return static_cast<void*>(const_cast< Dialog_addStaffAbsence*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_addStaffAbsence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
