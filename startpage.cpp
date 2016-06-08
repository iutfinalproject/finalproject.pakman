#include<QDebug>
//#include<QMouseB>
#include"startpage.h"
startpage::startpage(char*image_name,QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
  startpage_img1=new QPixmap(image_name);//://image/d2
* startpage_img1= startpage_img1->scaled(500,500);
  setPixmap(*startpage_img1);

 img_address=image_name;
return_img=NULL;


}








void startpage::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    return_img=img_address;
    qDebug()<<"&&&&&&&&&&&&&&&&&&&&&&";
}

