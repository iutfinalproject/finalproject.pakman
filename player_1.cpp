#include"player_1.h"

#include<QDesktopWidget>
player_1::player_1(QGraphicsPixmapItem *parent2):player(parent2)
{
    player_img=new QPixmap("://image/down1.png");
       * player_img= player_img->scaled(x/12,y/14);
      setPixmap(*player_img);
         this->setPos(x/2.3,y/7);
      y=y/7;
      x=x/2.3;
}
void player_1::keyPressEvent(QKeyEvent *event)
{
    QDesktopWidget desktop;
    int h=desktop.geometry().height()/12;
    int w=(desktop.geometry().width()/14);

    if(event->key()==Qt::Key_Up){
        getkey();
        destroyehuman();
        y-=3;
        if(change_u==0){
        player_img=new QPixmap("://image/up1.png");
        change_u++;

        }
        else if(change_u==1){
           player_img=new QPixmap("://image/up2.png");
               change_u++;
        }
        else if(change_u==2){
           player_img=new QPixmap("://image/up3.png");
               change_u++;
        }
        else if(change_u==3){
           player_img=new QPixmap("://image/up4.png");
               change_u=0;
        }


        * player_img= player_img->scaled(w,h);
        setPixmap(*player_img);
        setPos(x,y);
        if(this->accident()==true){
          y+=3;
          setPos(x,y);
        }

     getkey();
     destroyehuman();
    }

    if(event->key()==Qt::Key_Down){
        getkey();
        destroyehuman();
        y+=3;
        if(change_d==0){
        player_img=new QPixmap("://image/down1.png");
        change_d++;

        }
        else if(change_d==1){
           player_img=new QPixmap("://image/down2.png");
               change_d++;
        }
        else if(change_d==2){
           player_img=new QPixmap("://image/down3.png");
               change_d++;
        }

        else if(change_d==3){
           player_img=new QPixmap("://image/down4.png");
               change_d=0;
        }

        * player_img=player_img->scaled(w,h);
        setPixmap(*player_img);
       setPos(x,y);
       if(this->accident()==true){
         y-=3;
         setPos(x,y);
       }
getkey();
destroyehuman();
    }

    if(event->key()==Qt::Key_Right){
        getkey();
        x+=3;
        if(change==0){
        player_img=new QPixmap("://image/left1.png");
        change++;

        }
        else if(change==1){
           player_img=new QPixmap("://image/left2.png");
               change++;
        }
        else if(change==2){
           player_img=new QPixmap("://image/left3.png");
               change++;
        }
        else if(change==3){
           player_img=new QPixmap("://image/left4.png");
               change=0;
        }
        * player_img=player_img->scaled(w,h);
        setPixmap(*player_img);
        getkey();
       setPos(x,y);
       if(this->accident()==true){
         x-=3;
         setPos(x,y);
       }
getkey();
destroyehuman();
    }

    if(event->key()==Qt::Key_Left){
        getkey();
        destroyehuman();
        x-=3;
        if(change_ ==0){
        player_img=new QPixmap("://image/right1.png");
        change_++;

        }
        else if(change_==1){
          player_img=new QPixmap("://image/right2.png");
               change_++;
        }
        else if(change_==2){
           player_img=new QPixmap("://image/right3.png");
               change_++;
        }

        else if(change_==3){
           player_img=new QPixmap("://image/right4.png");
               change_=0;
        }

        * player_img=player_img->scaled(w,h);
        setPixmap(*player_img);
        setPos(x,y);
         if(this->accident()==true){
           x+=3;
           setPos(x,y);
         }

    }
    getkey();
destroyehuman();
}
