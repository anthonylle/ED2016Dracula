/****************************************************************************
** Meta object code from reading C++ file 'juego.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../JuegoDracula/juego.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'juego.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Juego_t {
    QByteArrayData data[12];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Juego_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Juego_t qt_meta_stringdata_Juego = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Juego"
QT_MOC_LITERAL(1, 6, 11), // "correrReloj"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 18), // "on_btnMazo_clicked"
QT_MOC_LITERAL(4, 38, 28), // "on_btnCarta1Jugador1_clicked"
QT_MOC_LITERAL(5, 67, 28), // "on_btnCarta2Jugador1_clicked"
QT_MOC_LITERAL(6, 96, 28), // "on_btnCarta3Jugador1_clicked"
QT_MOC_LITERAL(7, 125, 28), // "on_btnCarta4Jugador1_clicked"
QT_MOC_LITERAL(8, 154, 28), // "on_btnCarta1Jugador2_clicked"
QT_MOC_LITERAL(9, 183, 28), // "on_btnCarta2Jugador2_clicked"
QT_MOC_LITERAL(10, 212, 28), // "on_btnCarta3Jugador2_clicked"
QT_MOC_LITERAL(11, 241, 28) // "on_btnCarta4Jugador2_clicked"

    },
    "Juego\0correrReloj\0\0on_btnMazo_clicked\0"
    "on_btnCarta1Jugador1_clicked\0"
    "on_btnCarta2Jugador1_clicked\0"
    "on_btnCarta3Jugador1_clicked\0"
    "on_btnCarta4Jugador1_clicked\0"
    "on_btnCarta1Jugador2_clicked\0"
    "on_btnCarta2Jugador2_clicked\0"
    "on_btnCarta3Jugador2_clicked\0"
    "on_btnCarta4Jugador2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Juego[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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
        case 0: _t->correrReloj(); break;
        case 1: _t->on_btnMazo_clicked(); break;
        case 2: _t->on_btnCarta1Jugador1_clicked(); break;
        case 3: _t->on_btnCarta2Jugador1_clicked(); break;
        case 4: _t->on_btnCarta3Jugador1_clicked(); break;
        case 5: _t->on_btnCarta4Jugador1_clicked(); break;
        case 6: _t->on_btnCarta1Jugador2_clicked(); break;
        case 7: _t->on_btnCarta2Jugador2_clicked(); break;
        case 8: _t->on_btnCarta3Jugador2_clicked(); break;
        case 9: _t->on_btnCarta4Jugador2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
