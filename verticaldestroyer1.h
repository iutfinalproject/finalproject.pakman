#ifndef VERTICALDESTROYER1_H
#define VERTICALDESTROYER1_H
#include <QObject>
#include"destroyer.h"

class verticaldestroyer1 :public destroyer
{
    Q_OBJECT
public:
    explicit verticaldestroyer1(int id,int firstx,int firsty,QGraphicsPixmapItem *parent=0);


public slots:
  void move();

};
#endif // VERTICALDESTROYER1_H
