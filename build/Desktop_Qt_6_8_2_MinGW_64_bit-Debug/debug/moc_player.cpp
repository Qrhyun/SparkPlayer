/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../player.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6PlayerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6PlayerE = QtMocHelpers::stringData(
    "Player",
    "on_playButton_clicked",
    "",
    "on_stopButton_clicked",
    "on_forwardButton_clicked",
    "on_backwardButton_clicked",
    "updatePosition",
    "position",
    "updateDuration",
    "duration",
    "setPosition",
    "setVolume",
    "volume",
    "updatePlayIcon",
    "QMediaPlayer::PlaybackState",
    "state",
    "openFile",
    "setPlaybackRate",
    "rate",
    "addToPlaylist",
    "removeFromPlaylist",
    "playlistItemDoubleClicked",
    "QListWidgetItem*",
    "item",
    "savePlaylist",
    "loadPlaylist",
    "togglePlaylist",
    "showPlaylistContextMenu",
    "pos",
    "toggleFullScreen",
    "captureScreenshot",
    "openStreamUrl",
    "addStreamToPlaylist",
    "toggleMute"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6PlayerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    0,  153,    2, 0x08,    2 /* Private */,
       4,    0,  154,    2, 0x08,    3 /* Private */,
       5,    0,  155,    2, 0x08,    4 /* Private */,
       6,    1,  156,    2, 0x08,    5 /* Private */,
       8,    1,  159,    2, 0x08,    7 /* Private */,
      10,    1,  162,    2, 0x08,    9 /* Private */,
      11,    1,  165,    2, 0x08,   11 /* Private */,
      13,    1,  168,    2, 0x08,   13 /* Private */,
      16,    0,  171,    2, 0x08,   15 /* Private */,
      17,    1,  172,    2, 0x08,   16 /* Private */,
      19,    0,  175,    2, 0x08,   18 /* Private */,
      20,    0,  176,    2, 0x08,   19 /* Private */,
      21,    1,  177,    2, 0x08,   20 /* Private */,
      24,    0,  180,    2, 0x08,   22 /* Private */,
      25,    0,  181,    2, 0x08,   23 /* Private */,
      26,    0,  182,    2, 0x08,   24 /* Private */,
      27,    1,  183,    2, 0x08,   25 /* Private */,
      29,    0,  186,    2, 0x08,   27 /* Private */,
      30,    0,  187,    2, 0x08,   28 /* Private */,
      31,    0,  188,    2, 0x08,   29 /* Private */,
      32,    0,  189,    2, 0x08,   30 /* Private */,
      33,    0,  190,    2, 0x08,   31 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN6PlayerE.offsetsAndSizes,
    qt_meta_data_ZN6PlayerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6PlayerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Player, std::true_type>,
        // method 'on_playButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stopButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_forwardButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backwardButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updatePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'updateDuration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'setPosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setVolume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updatePlayIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::PlaybackState, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPlaybackRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'addToPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeFromPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playlistItemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'savePlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'togglePlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPlaylistContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'toggleFullScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'captureScreenshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openStreamUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addStreamToPlaylist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleMute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Player *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_playButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_forwardButton_clicked(); break;
        case 3: _t->on_backwardButton_clicked(); break;
        case 4: _t->updatePosition((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->updateDuration((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 6: _t->setPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setVolume((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->updatePlayIcon((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 9: _t->openFile(); break;
        case 10: _t->setPlaybackRate((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->addToPlaylist(); break;
        case 12: _t->removeFromPlaylist(); break;
        case 13: _t->playlistItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 14: _t->savePlaylist(); break;
        case 15: _t->loadPlaylist(); break;
        case 16: _t->togglePlaylist(); break;
        case 17: _t->showPlaylistContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->toggleFullScreen(); break;
        case 19: _t->captureScreenshot(); break;
        case 20: _t->openStreamUrl(); break;
        case 21: _t->addStreamToPlaylist(); break;
        case 22: _t->toggleMute(); break;
        default: ;
        }
    }
}

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6PlayerE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
