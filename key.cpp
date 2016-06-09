
#include "key.h"
#include<QSize>
#include<QRect>
#include<QDebug>
#include<QDesktopWidget>
#include<QGraphicsScene>

key::key(QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
    QDesktopWidget desktop;

    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();

    flag=1;

             key_img1=new QPixmap("://image/key1");
              key_img2=new QPixmap("://image/key2");
               key_img3=new QPixmap("://image/key3");
                key_img4=new QPixmap("://image/key4");
                 key_img5=new QPixmap("://image/key5");
                  key_img6=new QPixmap("://image/key6");

           * key_img1= key_img1->scaled(desktopWidth/22,desktopHight/15);
           * key_img2= key_img2->scaled(desktopWidth/22,desktopHight/15);
           * key_img3= key_img3->scaled(desktopWidth/22,desktopHight/15);
           * key_img4= key_img4->scaled(desktopWidth/22,desktopHight/15);
           * key_img5= key_img5->scaled(desktopWidth/22,desktopHight/15);
           * key_img6= key_img6->scaled(desktopWidth/22,desktopHight/15);

             setPixmap(*key_img1);

             qDebug()<<"***********************";

      key_timer=new QTimer();
     key_timer->start(100);
     connect(key_timer,SIGNAL(timeout()),this,SLOT(rotate_img()));
     }

void key::setpos_(int x, int y)
{
    this->setPos(x,y);
}

void key::rotate_img()
{
    flag++;
   if(flag==1){
         setPixmap(*key_img1);
    }
   if(flag==2){
         setPixmap(*key_img2);
    }
   if(flag==3){
         setPixmap(*key_img3);
    }
   if(flag==4){
         setPixmap(*key_img4);
    }
   if(flag==5){
         setPixmap(*key_img5);
    }
   if(flag==6){
         setPixmap(*key_img6);
    }
   if(flag==6)
     flag=0;
}
