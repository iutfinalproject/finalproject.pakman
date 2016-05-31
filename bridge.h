#ifndef BRIDGE_H
#define BRIDGE_H

#include<QGraphicsItem>
#include<QGraphicsPixmapItem>
#include <QObject>
#include<QGraphicsScene>
class bridge : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    bridge(int, int,QGraphicsPixmapItem *parent=0);

private:
    QPixmap * mybridge;
};

#endif // BRIDGE_H
