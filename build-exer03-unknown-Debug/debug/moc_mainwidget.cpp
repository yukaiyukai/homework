/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lab03/mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainWidget_t {
    QByteArrayData data[19];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainWidget_t qt_meta_stringdata_mainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainWidget"
QT_MOC_LITERAL(1, 11, 19), // "handleMarkerClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "on_btnStart_clicked"
QT_MOC_LITERAL(4, 52, 15), // "updateDataChart"
QT_MOC_LITERAL(5, 68, 16), // "QList<QDateTime>"
QT_MOC_LITERAL(6, 85, 4), // "date"
QT_MOC_LITERAL(7, 90, 12), // "QList<qreal>"
QT_MOC_LITERAL(8, 103, 7), // "lineOne"
QT_MOC_LITERAL(9, 111, 7), // "lineTwo"
QT_MOC_LITERAL(10, 119, 22), // "on_cbShowPoint_clicked"
QT_MOC_LITERAL(11, 142, 25), // "on_btnLegendAlign_clicked"
QT_MOC_LITERAL(12, 168, 23), // "on_cbLegendBold_clicked"
QT_MOC_LITERAL(13, 192, 25), // "on_cbLegendItalic_clicked"
QT_MOC_LITERAL(14, 218, 17), // "on_rbTemp_clicked"
QT_MOC_LITERAL(15, 236, 16), // "on_rbAQI_clicked"
QT_MOC_LITERAL(16, 253, 12), // "on_dataError"
QT_MOC_LITERAL(17, 266, 5), // "error"
QT_MOC_LITERAL(18, 272, 20) // "on_savechart_clicked"

    },
    "mainWidget\0handleMarkerClicked\0\0"
    "on_btnStart_clicked\0updateDataChart\0"
    "QList<QDateTime>\0date\0QList<qreal>\0"
    "lineOne\0lineTwo\0on_cbShowPoint_clicked\0"
    "on_btnLegendAlign_clicked\0"
    "on_cbLegendBold_clicked\0"
    "on_cbLegendItalic_clicked\0on_rbTemp_clicked\0"
    "on_rbAQI_clicked\0on_dataError\0error\0"
    "on_savechart_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainWidget[] = {

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
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    3,   71,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    1,   84,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 7,    6,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,

       0        // eod
};

void mainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainWidget *_t = static_cast<mainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleMarkerClicked(); break;
        case 1: _t->on_btnStart_clicked(); break;
        case 2: _t->updateDataChart((*reinterpret_cast< QList<QDateTime>(*)>(_a[1])),(*reinterpret_cast< QList<qreal>(*)>(_a[2])),(*reinterpret_cast< QList<qreal>(*)>(_a[3]))); break;
        case 3: _t->on_cbShowPoint_clicked(); break;
        case 4: _t->on_btnLegendAlign_clicked(); break;
        case 5: _t->on_cbLegendBold_clicked(); break;
        case 6: _t->on_cbLegendItalic_clicked(); break;
        case 7: _t->on_rbTemp_clicked(); break;
        case 8: _t->on_rbAQI_clicked(); break;
        case 9: _t->on_dataError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_savechart_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDateTime> >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
            }
            break;
        }
    }
}

const QMetaObject mainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mainWidget.data,
      qt_meta_data_mainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
