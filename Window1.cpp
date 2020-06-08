#include "Window1.h"
#include "Tower.h"
#include <QMainWindow>
#include <QPainter>
#include <QObject>
#include <QPushButton>
#include <QMouseEvent>
#include <QDebug>

Window1::Window1(QWidget* parent):QMainWindow(parent)
{
    this->setFixedSize(800,600);
    QPushButton *button= new QPushButton("return",this);
    button->setParent(this);
    button->setFixedSize(100,50);
    connect(button,SIGNAL(clicked()),this,SLOT(changeslot()));
}

void Window1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,800,600,QPixmap(":/Images/map1.jpg"));


}

void Window1::changeslot()
{
    emit mysignal();
}

void Window1::mousePressEvent(QMouseEvent *event)
{
    //qDebug()<<event->x()<<event->y()<<endl;
    QPoint pressPos = event->pos();
    Tower *tower = new Tower(pressPos,":/Images/tower.png");
}
