#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QVideoWidget>
#include <QFileDialog>
#include <QMenu>
#include <QActionGroup>
#include <QListWidget>
#include <QPushButton>
#include <QTimer>
#include <QMap>
#include <QStandardPaths>
#include <QDir>
#include <QMediaMetaData>
#include <QDateTime>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Player; }
QT_END_NAMESPACE

class Player : public QMainWindow
{
    Q_OBJECT

public:
    Player(QWidget *parent = nullptr);
    ~Player();
    void  closeEvent(QCloseEvent *event) override;
private slots:
    void on_playButton_clicked();
    void on_stopButton_clicked();
    void on_forwardButton_clicked();
    void on_backwardButton_clicked();
    void updatePosition(qint64 position);
    void updateDuration(qint64 duration);
    void setPosition(int position);
    void setVolume(int volume);
    void updatePlayIcon(QMediaPlayer::PlaybackState state);
    void openFile();
    void setPlaybackRate(double rate);
    void addToPlaylist();                    // 添加到播放列表
    void removeFromPlaylist();               // 从播放列表移除
    void playlistItemDoubleClicked(QListWidgetItem* item); // 双击播放列表项
    void savePlaylist();                     // 保存播放列表
    void loadPlaylist();                     // 加载播放列表
    void togglePlaylist();  // 添加这行
    void showPlaylistContextMenu(const QPoint &pos);  // 保留这个
    void toggleFullScreen();  // 添加这行
    void captureScreenshot();  // 截图功能
    void openStreamUrl();
    void addStreamToPlaylist();
    void toggleMute();
private:
    Ui::Player *ui;
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutput;
    QVideoWidget *videoWidget;
    QString formatTime(qint64 milliseconds);
    void createMenus();
    void createPlaybackRateMenu();
    void playFile(const QString& filePath);  // 播放指定文件
    
    QMenu *playbackRateMenu;
    QActionGroup *rateGroup;
    QDockWidget *playlistDock;              // 播放列表停靠窗口
    QListWidget *playlistWidget;            // 播放列表控件
    QString currentPlaylistFile;             // 当前播放列表文件路径
    QPushButton *togglePlaylistButton;  // 添加这行
    bool isFullScreen;  // 添加这行
    QMap<QString, qint64> lastPositions;  // 记录每个文件的上次播放位置
    QString defaultPlaylistFile;  // 添加默认播放列表文件路径
    void saveDefaultPlaylist();   // 保存默认播放列表
    void loadDefaultPlaylist();   // 加载默认播放列表
    void saveSettings();
    void loadSettings();

    // 播放模式
    enum PlayMode {
        Sequential,  // 顺序播放
        Loop,       // 列表循环
        SingleLoop, // 单曲循环
        Random      // 随机播放
    };
    
    PlayMode playMode;
    QAction *playModeAction;
    void setPlayMode(PlayMode mode);
    void playNext();
    void playPrevious();
    void togglePlayMode();      // 添加这行
    void updatePlayModeIcon();  // 添加这行
    
    QString lastPlayedFile;

    // 添加成员
    QMenu *aspectRatioMenu;
    double videoAspectRatio = 0.0;
    void setAspectRatio(double ratio);

    // 播放历史记录结构
    struct PlayHistory {
        QString filePath;
        QString fileName;
        QDateTime playTime;
        qint64 duration;
        qint64 lastPosition;
    };
    // 在 PlayHistory 结构体定义后添加
    friend QDataStream &operator<<(QDataStream &out, const PlayHistory &history)
    {
        out << history.filePath
            << history.fileName
            << history.playTime
            << history.duration
            << history.lastPosition;
        return out;
    }

    friend QDataStream &operator>>(QDataStream &in, PlayHistory &history)
    {
        in >> history.filePath
           >> history.fileName
           >> history.playTime
           >> history.duration
           >> history.lastPosition;
        return in;
    }
    
    QList<PlayHistory> playHistory;
    QString historyFile;  // 历史记录文件路径
    
    void savePlayHistory();
    void loadPlayHistory();
    void addToHistory(const QString &filePath);
    void showHistoryMenu();
    void clearHistory();

    void generateThumbnail();
    void showThumbnailPreview(int position);
    QLabel *thumbnailPreview;

    // 添加预览相关成员
    QMediaPlayer *previewPlayer;
    QVideoWidget *previewVideoWidget;
    QLabel *previewTimeLabel;

    // 添加预览关闭定时器
    QTimer *previewHideTimer;

    // 网络流媒体相关
    QList<QString> recentStreams;
    void saveStreamHistory();
    void loadStreamHistory();
    QString streamHistoryFile;  // 流媒体历史记录文件路径

    // 主题相关
    enum Theme {
        Light,
        Dark,
        Custom
    };
    
    QString currentTheme;
    void applyTheme(const QString &themeName);
    void loadStyleSheet(const QString &stylePath);
    void setupThemeMenu();
    void setupPlaylistStyle();
    QMenu *themeMenu = nullptr;

    int lastVolume = 0;  // 用于存储静音前的音量


protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
};



#endif // PLAYER_H 
