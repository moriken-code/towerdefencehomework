#ifndef WINDOW1_H
#define WINDOW1_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include "Tower.h"
#include <QMouseEvent>

class Window1:public QMainWindow{
    Q_OBJECT
public:
    explicit Window1(QWidget* parent=0);
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent *event);
private:
    QPushButton *button;
    QList<Tower*> Towerlist;

private slots :
    void changeslot();
signals:
    void mysignal();
};

#endif // WINDOW1_H
