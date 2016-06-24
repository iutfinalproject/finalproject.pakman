#ifndef PLAYER_1_H
#define PLAYER_1_H
#include"player.h"
#include<QKeyEvent>
class player_1:public player{
    Q_OBJECT
public:
    explicit player_1(int,int,int,QGraphicsPixmapItem *parent2=0);

private slots:
    virtual void keyPressEvent(QKeyEvent *event);
    void end_level1();
    void end_level2();
    void end_level3();
    void end_level4();
signals:
    void setstep1();
    void setstep2();
    void setstep3();
    void setstep4();
};

#endif // PLAYER_1_H
