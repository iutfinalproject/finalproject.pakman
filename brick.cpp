#include<QGraphicsScene>
#include "brick.h"

brick::brick(int img_id,int _h,int _w,QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{

img_id=2;
    if(img_id==2){
         brick_img=new QPixmap("://image/brickbrick4");
        * brick_img= brick_img->scaled(_w/20,(_h/15));
         setPixmap(* brick_img);
    }


}
void brick::setpos_(int x, int y)
{
    this->setPos(x,y);
}


