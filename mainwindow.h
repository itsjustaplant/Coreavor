#pragma once

#include <QMainWindow>
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString currentFile;
    QGraphicsScene *scene;
    QPixmap image;
    int zoomin{0};

private slots:
    void open();
    void zoomIn();
    void zoomOut();
    void properties();
    void openContainingFolder();
    void exit();
    void showImage();
    void previousImage();
    void nextImage();
    void about();
    void trash();
    void fullscreen();
    void rotate();
    void save();
    void saveAs();
    void setAsDesktopBackground();
    void print();
    void scaleImageToFitWindow();
    void mouseDoubleClickEvent(QMouseEvent *e);
    void resizeEvent(QResizeEvent *e);
};
