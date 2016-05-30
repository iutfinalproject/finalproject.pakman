#include "key.h"

key::key(int img_id,QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
    img_id=2;
        if(img_id==2){
             key_img=new QPixmap("://image/key2");
           // * brick_img= brick_img->scaled(_w/20,(_h/15));
             setPixmap(* key_img);
        }

}

void key::setpos_(int x, int y)
{
    this->setPos(x,y);
}
