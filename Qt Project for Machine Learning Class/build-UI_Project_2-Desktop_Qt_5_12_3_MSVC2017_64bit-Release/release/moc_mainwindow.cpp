/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI_Project_2(BP)/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "get_pertent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "value"
QT_MOC_LITERAL(4, 30, 17), // "learning_finished"
QT_MOC_LITERAL(5, 48, 15), // "tesing_finished"
QT_MOC_LITERAL(6, 64, 22), // "on_inputButton_clicked"
QT_MOC_LITERAL(7, 87, 24), // "on_settingButton_clicked"
QT_MOC_LITERAL(8, 112, 25), // "on_learningButton_clicked"
QT_MOC_LITERAL(9, 138, 24), // "on_testingButton_clicked"
QT_MOC_LITERAL(10, 163, 27), // "on_pushButton_start_clicked"
QT_MOC_LITERAL(11, 191, 20), // "on_NewButton_clicked"
QT_MOC_LITERAL(12, 212, 21), // "on_SaveButton_clicked"
QT_MOC_LITERAL(13, 234, 21), // "on_LoadButton_clicked"
QT_MOC_LITERAL(14, 256, 23), // "on_error_Button_clicked"
QT_MOC_LITERAL(15, 280, 26) // "on_TwoByTwo_Button_clicked"

    },
    "MainWindow\0get_pertent\0\0value\0"
    "learning_finished\0tesing_finished\0"
    "on_inputButton_clicked\0on_settingButton_clicked\0"
    "on_learningButton_clicked\0"
    "on_testingButton_clicked\0"
    "on_pushButton_start_clicked\0"
    "on_NewButton_clicked\0on_SaveButton_clicked\0"
    "on_LoadButton_clicked\0on_error_Button_clicked\0"
    "on_TwoByTwo_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
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
        case 0: _t->get_pertent((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->learning_finished(); break;
        case 2: _t->tesing_finished(); break;
        case 3: _t->on_inputButton_clicked(); break;
        case 4: _t->on_settingButton_clicked(); break;
        case 5: _t->on_learningButton_clicked(); break;
        case 6: _t->on_testingButton_clicked(); break;
        case 7: _t->on_pushButton_start_clicked(); break;
        case 8: _t->on_NewButton_clicked(); break;
        case 9: _t->on_SaveButton_clicked(); break;
        case 10: _t->on_LoadButton_clicked(); break;
        case 11: _t->on_error_Button_clicked(); break;
        case 12: _t->on_TwoByTwo_Button_clicked(); break;
        default: ;
        }
    }
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
