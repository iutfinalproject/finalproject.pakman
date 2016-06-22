#ifndef PLAYER_2_H
#define PLAYER_2_H
#include"player.h"
#include<QKeyEvent>
class player_2:public player{
    Q_OBJECT
public:
    explicit player_2(int ,int,QGraphicsPixmapItem *parent2=0);

private slots:
    virtual void keyPressEvent(QKeyEvent *event);

};
#endif // PLAYER_2_H
