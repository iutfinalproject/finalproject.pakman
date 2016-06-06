#include<QList>
#include<typeinfo>
#include "destroyer.h"
#include<QTimer>
#include<QDebug>
#include"brick.h"
int flag=1;
int flag1;



destroyer::destroyer(int h,int w,QGraphicsPixmapItem *parent) : QObject(),QGraphicsPixmapItem(parent)
{

    height=h;
    width=w;
    x=2*(width/20);
    y=height-(2*(height/15));
    x0=x;
    y0=y;
    mydestroyer=new QPixmap("://image/d1.png");
    *mydestroyer=mydestroyer->scaled(width/20,height/17);
     setPixmap(*mydestroyer);
     this->setPos(x,y);

    QTimer * timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}
void destroyer::move()
{
    if(flag==1){
        mydestroyer=new QPixmap("://image/d1.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x+=5,y);
        flag=flag+1;

    }
    else if(flag==2){
        mydestroyer=new QPixmap("://image/d2.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x+=5,y);
        flag=flag+1;

    }

    else if(flag==3){
        mydestroyer=new QPixmap("://image/d3.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x+=5,y);
        flag=flag+1;

    }


    else if(flag==4){
        mydestroyer=new QPixmap("://image/d4.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x+=5,y);
        flag=flag+1;

    }

    else if(flag==5){
        mydestroyer=new QPixmap("://image/d5.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x+=5,y);
        flag=flag+1;

    }

    else if(flag==6){
        mydestroyer=new QPixmap("://image/d6.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x+=5,y);
        flag=flag+1;

    }
    else if(flag==7){
        mydestroyer=new QPixmap("://image/d7.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x+=5,y);
        flag=1;

    }

    QList<QGraphicsItem*> colliding_item=collidingItems();
    qDebug()<<colliding_item.size();

    for(int i=0;i<colliding_item.size();i++){
        if(typeid (*(colliding_item[i]))==typeid(brick)){
            if(x>x0){
                flag1=1;
                flag=0;
            }
            else{
                flag=1;
                flag1=0;
            }



}
    }



   if(flag1==1){
        mydestroyer=new QPixmap("://image/d11.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x-=5,y);
        flag1=flag1+1;

    }
    else if(flag1==2){
        mydestroyer=new QPixmap("://image/d22.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x-=5,y);
        flag1=flag1+1;

    }

    else if(flag1==3){
        mydestroyer=new QPixmap("://image/d33.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x-=5,y);
        flag1=flag1+1;

    }


    else if(flag1==4){
        mydestroyer=new QPixmap("://image/d44.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x-=5,y);
        flag1=flag1+1;

    }

    else if(flag1==5){
        mydestroyer=new QPixmap("://image/d55.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x-=5,y);
        flag1=flag1+1;

    }

    else if(flag1==6){
        mydestroyer=new QPixmap("://image/d66.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x-=5,y);
        flag1=flag1+1;

    }
    else if(flag1==7){
        mydestroyer=new QPixmap("://image/d77.png");
        *mydestroyer=mydestroyer->scaled(width/20,height/16);
        setPixmap(*mydestroyer);
        this->setPos(x-=5,y);
        flag1=1;

    }


}

