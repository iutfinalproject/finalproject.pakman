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


signals:

public slots:
private:

     QPixmap*brick_img;


};


#endif // BRICK_H
