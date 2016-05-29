#ifndef BRICK_H
#define BRICK_H

#include <QObject>



#include<QGraphicsPixmapItem>
#include<QGraphicsItem>

class brick : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit brick(int ,int,int,QGraphicsPixmapItem *parent = 0);
     void setpos_(int,int);
     void setBrick(int);

signals:

public slots:
private:
     int h;
     int w;
     QPixmap*brick_img;
     int height_brick_img;
     int num__brick_img;
     QGraphicsPixmapItem *a;

};


#endif // BRICK_H
