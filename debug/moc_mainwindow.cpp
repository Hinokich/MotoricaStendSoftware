/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MotoricaStendInterface/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[404];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "startListening"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "refreshData"
QT_MOC_LITERAL(4, 39, 16), // "realtimeDataSlot"
QT_MOC_LITERAL(5, 56, 28), // "on_pushButtonConnect_clicked"
QT_MOC_LITERAL(6, 85, 26), // "on_pushButtonStart_clicked"
QT_MOC_LITERAL(7, 112, 26), // "on_pushButtonPause_clicked"
QT_MOC_LITERAL(8, 139, 25), // "on_pushButtonStop_clicked"
QT_MOC_LITERAL(9, 165, 25), // "on_pushButtonOpen_clicked"
QT_MOC_LITERAL(10, 191, 26), // "on_pushButtonClose_clicked"
QT_MOC_LITERAL(11, 218, 35), // "on_spinBoxTimeShake_editingFi..."
QT_MOC_LITERAL(12, 254, 37), // "on_spinBoxTimeCooling_editing..."
QT_MOC_LITERAL(13, 292, 38), // "on_spinBoxForceMinimum_editin..."
QT_MOC_LITERAL(14, 331, 37), // "on_spinBoxCurrentStop_editing..."
QT_MOC_LITERAL(15, 369, 34) // "on_spinBoxTempStop_editingFin..."

    },
    "MainWindow\0startListening\0\0refreshData\0"
    "realtimeDataSlot\0on_pushButtonConnect_clicked\0"
    "on_pushButtonStart_clicked\0"
    "on_pushButtonPause_clicked\0"
    "on_pushButtonStop_clicked\0"
    "on_pushButtonOpen_clicked\0"
    "on_pushButtonClose_clicked\0"
    "on_spinBoxTimeShake_editingFinished\0"
    "on_spinBoxTimeCooling_editingFinished\0"
    "on_spinBoxForceMinimum_editingFinished\0"
    "on_spinBoxCurrentStop_editingFinished\0"
    "on_spinBoxTempStop_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startListening(); break;
        case 1: _t->refreshData(); break;
        case 2: _t->realtimeDataSlot(); break;
        case 3: _t->on_pushButtonConnect_clicked(); break;
        case 4: _t->on_pushButtonStart_clicked(); break;
        case 5: _t->on_pushButtonPause_clicked(); break;
        case 6: _t->on_pushButtonStop_clicked(); break;
        case 7: _t->on_pushButtonOpen_clicked(); break;
        case 8: _t->on_pushButtonClose_clicked(); break;
        case 9: _t->on_spinBoxTimeShake_editingFinished(); break;
        case 10: _t->on_spinBoxTimeCooling_editingFinished(); break;
        case 11: _t->on_spinBoxForceMinimum_editingFinished(); break;
        case 12: _t->on_spinBoxCurrentStop_editingFinished(); break;
        case 13: _t->on_spinBoxTempStop_editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startListening)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::startListening()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
