#include"human.h"
#include "creature.h"
#include"brick.h"
#include <QGraphicsScene>
#include<QDesktopWidget>
#include<qdebug.h>

human::human(QGraphicsPixmapItem *parent2):creature(parent2)/*,  QObject(),QGraphicsPixmapItem(parent2)*/{

     QDesktopWidget desktop;
     y=desktop.geometry().height()/7;
    x=(desktop.geometry().width()/2.3);
    int h=desktop.geometry().height()/14;
    int w=(desktop.geometry().width()/14);
    creature_img=new QPixmap("://image/down1.png");
       * creature_img= creature_img->scaled(w,h);
      setPixmap(*creature_img);
         this->setPos(x,y);


}
int change=0;
int change_=0;
int change_d=0;
int change_u=0;
void human::keyPressEvent(QKeyEvent *event)
{
    QDesktopWidget desktop;
    int h=desktop.geometry().height()/12;
    int w=(desktop.geometry().width()/14);

    if(event->key()==Qt::Key_Up){
        y-=3;
        if(change_u==0){
        creature_img=new QPixmap("://image/up1.png");
        change_u++;

        }
        else if(change_u==1){
           creature_img=new QPixmap("://image/up2.png");
               change_u++;
        }
        else if(change_u==2){
           creature_img=new QPixmap("://image/up3.png");
               change_u++;
        }
        else if(change_u==3){
           creature_img=new QPixmap("://image/up4.png");
               change_u=0;
        }


        * creature_img= creature_img->scaled(w,h);
        setPixmap(*creature_img);
        setPos(x,y);
        if(this->accident()==true){
          y+=3;
          setPos(x,y);
        }


    }

    if(event->key()==Qt::Key_Down){
        y+=3;
        if(change_d==0){
        creature_img=new QPixmap("://image/down1.png");
        change_d++;

        }
        else if(change_d==1){
           creature_img=new QPixmap("://image/down2.png");
               change_d++;
        }
        else if(change_d==2){
           creature_img=new QPixmap("://image/down3.png");
               change_d++;
        }

        else if(change_d==3){
           creature_img=new QPixmap("://image/down4.png");
               change_d=0;
        }

        * creature_img= creature_img->scaled(w,h);
        setPixmap(*creature_img);
       setPos(x,y);
       if(this->accident()==true){
         y-=5;
         setPos(x,y);
       }

    }

    if(event->key()==Qt::Key_Right){
        x+=3;
        if(change ==0){
        creature_img=new QPixmap("://image/left1.png");
        change++;

        }
        else if(change==1){
           creature_img=new QPixmap("://image/left2.png");
               change++;
        }
        else if(change==2){
           creature_img=new QPixmap("://image/left3.png");
               change++;
        }
        else if(change==3){
           creature_img=new QPixmap("://image/left4.png");
               change=0;
        }
        * creature_img= creature_img->scaled(w,h);
        setPixmap(*creature_img);
       setPos(x,y);
       if(this->accident()==true){
         x-=3;
         setPos(x,y);
       }

    }

    if(event->key()==Qt::Key_Left){
        x-=3;
        if(change_ ==0){
        creature_img=new QPixmap("://image/right1.png");
        change_++;

        }
        else if(change_==1){
           creature_img=new QPixmap("://image/right2.png");
               change_++;
        }
        else if(change_==2){
           creature_img=new QPixmap("://image/right3.png");
               change_++;
        }

        else if(change_==3){
           creature_img=new QPixmap("://image/right4.png");
               change_=0;
        }

        * creature_img= creature_img->scaled(w,h);
        setPixmap(*creature_img);
        setPos(x,y);
         if(this->accident()==true){
           x+=3;
           setPos(x,y);
         }

    }

}

