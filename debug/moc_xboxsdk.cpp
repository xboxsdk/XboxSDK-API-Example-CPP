/****************************************************************************
** Meta object code from reading C++ file 'xboxsdk.h'
**
** Created: Thu Jun 28 21:14:45 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../xboxsdk.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xboxsdk.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XboxSDK[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      41,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_XboxSDK[] = {
    "XboxSDK\0\0requestFinsihed(QNetworkReply*)\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject XboxSDK::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_XboxSDK,
      qt_meta_data_XboxSDK, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XboxSDK::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XboxSDK::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XboxSDK::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XboxSDK))
        return static_cast<void*>(const_cast< XboxSDK*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int XboxSDK::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: requestFinsihed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
