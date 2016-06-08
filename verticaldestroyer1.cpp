#include "verticaldestroyer1.h"

#include<QList>
#include<typeinfo>
#include "destroyer.h"
#include<QTimer>
#include<QDebug>
#include"brick.h"
int flag2=1;
int flag3;

verticaldestroyer1::verticaldestroyer1(int id,int firstx,int firsty,QGraphicsPixmapItem *parent):destroyer(id,firstx,firsty,parent)

{
    QTimer * timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}
void verticaldestroyer1::move(){
    QList<QGraphicsItem*> colliding_item=collidingItems();
    switch(img_id){
     case 1:

        if(flag2==1){
            mydestroyer=new QPixmap("://image/dv5");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }
        else if(flag2==2){
            mydestroyer=new QPixmap("://image/dv6");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }

        else if(flag2==3){
            mydestroyer=new QPixmap("://image/dv7");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }


        else if(flag2==4){
            mydestroyer=new QPixmap("://image/dv8");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=1;

        }



        qDebug()<<colliding_item.size();

        for(int i=0;i<colliding_item.size();i++){
            if(typeid (*(colliding_item[i]))==typeid(brick)){
                if(y<y0){
                    flag3=1;
                    flag2=0;
                }
                else{
                    flag2=1;
                    flag3=0;
                }



    }
        }



       if(flag3==1){
            mydestroyer=new QPixmap("://image/dv1");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }
        else if(flag3==2){
            mydestroyer=new QPixmap("://image/dv2");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }

        else if(flag3==3){
            mydestroyer=new QPixmap("://image/dv3");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }


        else if(flag3==4){
            mydestroyer=new QPixmap("://image/dv4");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=1;
}

        break;
      //***********************************************************************************************
      case 2:

        if(flag2==1){
            mydestroyer=new QPixmap("://image/dv5");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }
        else if(flag2==2){
            mydestroyer=new QPixmap("://image/dv6");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }

        else if(flag2==3){
            mydestroyer=new QPixmap("://image/dv7");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }


        else if(flag2==4){
            mydestroyer=new QPixmap("://image/dv8");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=1;

        }



        qDebug()<<colliding_item.size();

        for(int i=0;i<colliding_item.size();i++){
            if(typeid (*(colliding_item[i]))==typeid(brick)){
                if(y<y0){
                    flag3=1;
                    flag2=0;
                }
                else{
                    flag2=1;
                    flag3=0;
                }



    }
        }



       if(flag3==1){
            mydestroyer=new QPixmap("://image/dv1");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }
        else if(flag3==2){
            mydestroyer=new QPixmap("://image/dv2");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }

        else if(flag3==3){
            mydestroyer=new QPixmap("://image/dv3");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }


        else if(flag3==4){
            mydestroyer=new QPixmap("://image/dv4");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=1;
}


        break;
      //***********************************************************************************************
      default:


        if(flag2==1){
            mydestroyer=new QPixmap("://image/dv5");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }
        else if(flag2==2){
            mydestroyer=new QPixmap("://image/dv6");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }

        else if(flag2==3){
            mydestroyer=new QPixmap("://image/dv7");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=flag2+1;

        }


        else if(flag2==4){
            mydestroyer=new QPixmap("://image/dv8");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y-=5);
            flag2=1;

        }



        qDebug()<<colliding_item.size();

        for(int i=0;i<colliding_item.size();i++){
            if(typeid (*(colliding_item[i]))==typeid(brick)){
                if(y<y0){
                    flag3=1;
                    flag2=0;
                }
                else{
                    flag2=1;
                    flag3=0;
                }



    }
        }



       if(flag3==1){
            mydestroyer=new QPixmap("://image/dv1");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }
        else if(flag3==2){
            mydestroyer=new QPixmap("://image/dv2");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }

        else if(flag3==3){
            mydestroyer=new QPixmap("://image/dv3");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=flag3+1;

        }


        else if(flag3==4){
            mydestroyer=new QPixmap("://image/dv4");
            *mydestroyer=mydestroyer->scaled(width/21,height/15);
            setPixmap(*mydestroyer);
            this->setPos(x,y+=5);
            flag3=1;
}
      break;

}
}

