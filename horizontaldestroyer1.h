#ifndef HORIZONTALDESTROYER1_H
#define HORIZONTALDESTROYER1_H

#include <QObject>
#include"destroyer.h"

class horizontaldestroyer1:public destroyer
{
    Q_OBJECT
public:
    explicit horizontaldestroyer1(int id,int firstx,int firsty,QGraphicsPixmapItem *parent=0);


public slots:
 void move();

};



#endif // HORIZONTALDESTROYER1_H
