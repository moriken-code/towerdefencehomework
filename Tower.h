#ifndef TOWER_H
#define TOWER_H

#include <QPoint>
#include <QSize>
#include <QPixmap>
#include <QObject>
#include <QTimer>
#include <QPainter>

class Tower: QObject{
    Q_OBJECT
public:
    Tower(QPoint pos, QString image);
    void paint(QPainter *painter);

    bool detect();
private:
    QPixmap _map;
    QPoint position;
};

#endif // TOWER_H
