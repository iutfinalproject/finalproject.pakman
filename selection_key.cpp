#include<QDebug>
#include"selection_key.h"
#include"game.h"
selection_key::selection_key(int _id,int w,int h,QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
    qDebug()<<"I AM IN SELECTION KEY"<<_id;
  key_img=new QPixmap("://image/brick2.jpg");//
* key_img= key_img->scaled(w,h);
  setPixmap(*key_img);
  id=_id;
  Game*game=new Game();
  connect(this,SIGNAL(send_signal(int)),game,SLOT( ricive_set_step1()));
}
void selection_key::mousePressEvent(QGraphicsSceneMouseEvent *event)
{//int select_page=0;
   if(id==-1)
        exit(0);
    else if(id==0){
       emit this->send_signal(2);
        qDebug()<<"i am in mouse event";
   }

   qDebug()<<"&&&&&&&&&&&&&&&&&&&&&&";
}
