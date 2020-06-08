#include "Tower.h"
#include <QPoint>
#include <QPainter>
#include <QDebug>

Tower::Tower(QPoint pos, QString image):QObject(0),_map(image)
{
    qDebug()<<"created"<<endl;
    this->position=pos;
}

void Tower::paint(QPainter* painter)
{
    painter->drawPixmap(position,_map);
}




