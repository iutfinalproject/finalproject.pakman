#include<QDebug>
#include"selection_key.h"

selection_key::selection_key(int _id,int w,int h,QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
  key_img=new QPixmap("://image/brick2.jpg");//
* key_img= key_img->scaled(w,h);
  setPixmap(*key_img);
  id=_id;

}








void selection_key::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(id==1)
        exit(0);

    //else if(id==2)
        //flag

    qDebug()<<"&&&&&&&&&&&&&&&&&&&&&&";
}
