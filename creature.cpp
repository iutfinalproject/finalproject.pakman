#include"creature.h"
#include "brick.h"


creature::creature(QGraphicsPixmapItem *parent)
{
}

void creature::accident()
{

    QList<QGraphicsItem*> colliding_item=collidingItems();




    for(int i=0;i<colliding_item.size();i++){

        if(typeid (*(colliding_item[i]))==typeid(brick)){



             ///////////////////////////////////////////////////////////////////////
             return;


       }


    }

}
