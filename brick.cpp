
#include<QGraphicsScene>
#include "brick.h"

brick::brick(int img_id,int h,int w,QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{

    if(img_id==1){
    brick_img=new QPixmap("://image/brick1.jpg");
    * brick_img= brick_img->scaled(w/20.6,h/15);
    setPixmap(*brick_img);
}
    if(img_id==2){
        brick_img=new QPixmap("://image/brick2.jpg");
        * brick_img= brick_img->scaled(w/20,h/15);
        setPixmap(*brick_img);
    }
    if(img_id==3){
        brick_img=new QPixmap("://image/brick3.jpg");
        * brick_img= brick_img->scaled(w/20,h/15);
        setPixmap(*brick_img);
    }


}
void brick::setpos_(int x, int y)
{
    this->setPos(x,y);
}

