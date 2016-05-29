#ifndef BRICK_H
#define BRICK_H

#include<QGraphicsItem>
#include<QGraphicsPixmapItem>
#include <QObject>
#include<QGraphicsScene>
class brick1:public QObject,public QGraphicsPixmapItem{
     Q_OBJECT
public:
     brick1(QGraphicsPixmapItem *parent1 = 0);
     void setpos_(int,int);

private:
    QGraphicsPixmapItem * p_brike;

};
#endif // BRICK_H
