/****************************************************************************
** Meta object code from reading C++ file 'juego.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../JuegoDracula/juego.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'juego.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Juego_t {
    QByteArrayData data[14];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Juego_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Juego_t qt_meta_stringdata_Juego = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Juego"
QT_MOC_LITERAL(1, 6, 6), // "miSlot"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 10), // "ponerIcono"
QT_MOC_LITERAL(4, 25, 13), // "nombreArchivo"
QT_MOC_LITERAL(5, 39, 21), // "on_btnMatriz1_clicked"
QT_MOC_LITERAL(6, 61, 21), // "on_btnMatriz2_clicked"
QT_MOC_LITERAL(7, 83, 21), // "on_btnMatriz3_clicked"
QT_MOC_LITERAL(8, 105, 21), // "on_btnMatriz4_clicked"
QT_MOC_LITERAL(9, 127, 21), // "on_btnMatriz5_clicked"
QT_MOC_LITERAL(10, 149, 21), // "on_btnMatriz6_clicked"
QT_MOC_LITERAL(11, 171, 21), // "on_btnMatriz7_clicked"
QT_MOC_LITERAL(12, 193, 21), // "on_btnMatriz8_clicked"
QT_MOC_LITERAL(13, 215, 21) // "on_btnMatriz9_clicked"

    },
    "Juego\0miSlot\0\0ponerIcono\0nombreArchivo\0"
    "on_btnMatriz1_clicked\0on_btnMatriz2_clicked\0"
    "on_btnMatriz3_clicked\0on_btnMatriz4_clicked\0"
    "on_btnMatriz5_clicked\0on_btnMatriz6_clicked\0"
    "on_btnMatriz7_clicked\0on_btnMatriz8_clicked\0"
    "on_btnMatriz9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Juego[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Juego::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Juego *_t = static_cast<Juego *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->miSlot(); break;
        case 1: _t->ponerIcono((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_btnMatriz1_clicked(); break;
        case 3: _t->on_btnMatriz2_clicked(); break;
        case 4: _t->on_btnMatriz3_clicked(); break;
        case 5: _t->on_btnMatriz4_clicked(); break;
        case 6: _t->on_btnMatriz5_clicked(); break;
        case 7: _t->on_btnMatriz6_clicked(); break;
        case 8: _t->on_btnMatriz7_clicked(); break;
        case 9: _t->on_btnMatriz8_clicked(); break;
        case 10: _t->on_btnMatriz9_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Juego::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Juego.data,
      qt_meta_data_Juego,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Juego::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Juego::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Juego.stringdata0))
        return static_cast<void*>(const_cast< Juego*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Juego::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
