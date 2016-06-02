
#include "bridge.h"


bridge::bridge(int h,int w,QGraphicsPixmapItem *parent) :QObject(),QGraphicsPixmapItem(parent)
{
    mybridge=new QPixmap("://image/bridge.jpg");
    *mybridge=mybridge->scaled(w/20,h/15);
    setPixmap(*mybridge);

}
