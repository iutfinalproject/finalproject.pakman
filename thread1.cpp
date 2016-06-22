#include "thread1.h"
#include<QDebug>

thread1::thread1(QObject *parent) :
    QObject(parent)
{
}
void thread1::addkey(){
    mykey.rotate_img();
}
void thread1::dowork(QThread &cthread){

    connect(&cthread,SIGNAL(started()),this,SLOT(addkey()));
}
