#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Window1.h"
#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent=0);
    //MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent *);
    Window1 window1;

private slots:
    void tomain();
    void togame();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
