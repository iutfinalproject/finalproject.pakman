#ifndef PLAYER_H
#define PLAYER_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QList>
#include<QPixmap>
#include"score.h"
#include"health.h"
class player:public QObject ,public QGraphicsPixmapItem{
public:
    explicit player(QGraphicsPixmapItem *parent);
    bool accident();
    void getkey();
    void destroyehuman();
    void gettreasure();
public slots:
   virtual void keyPressEvent(QKeyEvent *event)=0;
protected:
    int x;
    int y;
    int change;
    int change_;
    int change_d;
    int change_u;
    int numbertreasure;
    QPixmap *player_img;
    score numberscore;
    Health numberhealth;

};
#endif // PLAYER_H
