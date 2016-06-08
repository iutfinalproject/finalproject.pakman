#include "verticaldestroyer.h"
#include<QList>
#include<typeinfo>
#include "destroyer.h"
#include<QTimer>
#include<QDebug>
#include"brick.h"
int flag=1;
int flag1;

verticaldestroyer::verticaldestroyer(int id,int firstx,int firsty,QGraphicsPixmapItem *parent):destroyer(id,firstx,firsty,parent)

{
    QTimer * timer=new QTimer();
    //connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}
void verticaldestroyer::move_(){
    qDebug()<<"he";
}
