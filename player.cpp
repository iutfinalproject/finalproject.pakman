#include"player.h"
#include<typeinfo>
#include<QDesktopWidget>
#include<brick.h>
#include"key.h"
#include"destroyer.h"
#include <QGraphicsScene>
player::player(QGraphicsPixmapItem *parent)
{
    QDesktopWidget desktop;
    y=desktop.geometry().height();
   x=(desktop.geometry().width());
   change=0;
        change_=0;
        change_d=0;
        change_u=0;
}

bool player::accident()
{
    QList<QGraphicsItem*> colliding_item=collidingItems();




    for(int i=0;i<colliding_item.size();i++){

        if(typeid (*(colliding_item[i]))==typeid(brick)){
             return true;

       }


    }
    return false;

}

void player::getkey()
{
    QList<QGraphicsItem*> colliding_item=collidingItems();

    for(int i=0;i<colliding_item.size();i++){

        if(typeid (*(colliding_item[i]))==typeid(key)){
            numberkey++;
            scene()->removeItem(colliding_item[i]);
            delete colliding_item[i];
            return;
        }
    }
}

void player::destroyehuman()
{
    QList<QGraphicsItem*> colliding_item=collidingItems();

    for(int i=0;i<colliding_item.size();i++){

        if(typeid (*(colliding_item[i]))==typeid(destroyer)){
            scene()->removeItem(this);
            delete this;
            return;
        }
    }
}



