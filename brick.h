#ifndef BRICK_H
#define BRICK_H
#include <QObject>


#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class brick : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
     brick(int ,int,int,QGraphicsPixmapItem *parent = 0);
     void setpos_(int,int);

private:

     QPixmap*brick_img;


};


#endif // BRICK_H
