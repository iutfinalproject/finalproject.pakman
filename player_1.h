#ifndef PLAYER_1_H
#define PLAYER_1_H
#include"player.h"
#include<QKeyEvent>
class player_1:public player{
    Q_OBJECT
public:
    explicit player_1(int,int,QGraphicsPixmapItem *parent2=0);

private slots:
    virtual void keyPressEvent(QKeyEvent *event);
};

#endif // PLAYER_1_H
