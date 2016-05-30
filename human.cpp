
#include"human.h"
void human::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Up){
        y-=5;
        creature_img->setPos(x,y);

    }

    if(event->key()==Qt::Key_Down){
        y+=5;
        creature_img->setPos(x,y);

    }

    if(event->key()==Qt::Key_Right){
        x+=5;
        creature_img->setPos(x,y);

    }

    if(event->key()==Qt::Key_Left){
        x-=5;
        creature_img->setPos(x,y);

    }

}


human::human(QGraphicsPixmapItem *parent):creature(parent)
{


}
