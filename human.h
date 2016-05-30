#ifndef HUMAN_H
#define HUMAN_H
#include"creature.h"
#include<QKeyEvent>
class human:public creature{
public:
    explicit human(QGraphicsPixmapItem *parent);
private slots:
    void keyPressEvent(QKeyEvent *event);


};
#endif // HUMAN_H
