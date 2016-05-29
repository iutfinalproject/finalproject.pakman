#include<QGraphicsScene>
#include "brick.h"

brick::brick(int img_id,int _h,int _w,QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{


h=_h;
w=_w;

a=new QGraphicsPixmapItem  (QPixmap("://image/brickww"));

brick_img=new QPixmap("://image/brickww");
   * brick_img= brick_img->scaled(_w/20,(_h/15));
     height_brick_img=brick_img->height();
     num__brick_img=_h/height_brick_img;
     setBrick(1);

}
void brick::setpos_(int x, int y)
{
    this->setPos(x,y);
}

void brick::setBrick(int img_id)
{
    for(int i=0;i<num__brick_img;i++){
      setPixmap(*brick_img);
      // scene()->addItem(a);
        this->setPos(0,height_brick_img*i);

    }

}
