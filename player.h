#ifndef PLAYER_H
#define PLAYER_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QList>
#include<QPixmap>
class player:public QObject ,public QGraphicsPixmapItem{
public:
    explicit player(QGraphicsPixmapItem *parent);
    bool accident();
    void getkey();
    void destroyehuman();
public slots:
   virtual void keyPressEvent(QKeyEvent *event)=0;



protected:
    int x;
    int y;
    int change;
    int change_;
    int change_d;
    int change_u;
    QPixmap *player_img;
int numberkey;

};
#endif // PLAYER_H
