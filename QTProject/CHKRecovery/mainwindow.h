#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QStatusBar>
#include <QProgressBar>
#include <QTreeWidget>
#include <QGridLayout>
#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QFileInfo>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QMenuBar *menu;
        QMenu *toolMenu;
            QAction *editTool;
        QMenu *helpMenu;
            QAction *help;
            QAction *about;
    QToolBar *tool;
        QAction *find;
        QAction *rec;
    QStatusBar *status;
        QProgressBar *progress;
    QWidget *mainwidget;
        QGridLayout *mainLayout;
            QTreeWidget *filetree;

    QDir *recdir;

    QFileInfoList GetFileList(QDir dir);
    QFileInfoList FilterSuffix(QFileInfoList filelist);


private slots:
    void on_findpath();
    void on_recpath();
    void on_help();

};

#endif // MAINWINDOW_H
