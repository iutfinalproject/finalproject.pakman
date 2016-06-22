#include "thread2.h"
#include<QDebug>

thread2::thread2(QObject *parent) :vdes(3,100,100,0),hdes(3,100,100,0),
    QObject(parent)
{
}
void thread2::adddestroyer(){

   hdes.move();
   vdes.move();
}
void thread2::dowork(QThread &cthread){
    connect(&cthread,SIGNAL(started()),this,SLOT(adddestroyer()));
}
