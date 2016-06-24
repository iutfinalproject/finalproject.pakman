#include"treasure.h"
#include"player.h"
#include<typeinfo>
#include<QDesktopWidget>
#include"brick.h"
#include"key.h"
#include"destroyer.h"
#include <QGraphicsScene>
#include<QDebug>
#include<QtCore>
#include<QFile>
#include<QMap>
#include"game.h"

player::player(int numberkey_,QGraphicsPixmapItem *parent)
{
    QDesktopWidget desktop;
    y=desktop.geometry().height();
    x=(desktop.geometry().width());
       change=0;
        change_=0;
        change_d=0;
        change_u=0;
        numberscore.getscore()=0;
        numberhealth.getHealth()=3;
        numberkey=numberkey_;

//        Game*game=new Game();
//        connect (this ,SIGNAL(setstep1()),game,SLOT(ricive_set_step1));
//        connect (this ,SIGNAL(setstep2()),game,SLOT(ricive_set_step2));
//        connect (this ,SIGNAL(setstep3()),game,SLOT(ricive_set_step3));
}

bool player::accident()
{
//    QFile file()
//    map<double,double> keypos;
    QList<QGraphicsItem*> colliding_item=collidingItems();
    for(int i=0;i<colliding_item.size();i++){

        if(typeid (*(colliding_item[i]))==typeid(brick)){
//            keypos[colliding_item[i]->x()]=colliding_item[i]->y();

             return true;

       }

    return false;

}
}

void player::getkey()
{
    QList<QGraphicsItem*> colliding_item=collidingItems();

    for(int i=0;i<colliding_item.size();i++){

        if(typeid (*(colliding_item[i]))==typeid(key)){
            qDebug()<<"x"<<colliding_item[i]->x();
            numberscore.getscore()++;
            scene()->removeItem(colliding_item[i]);
            delete colliding_item[i];
            return;
        }
    }
}

void player::destroyehuman()
{
    QList<QGraphicsItem*> colliding_item=collidingItems();

    for(int i=0;i<colliding_item.size();i++){

        if(typeid (*(colliding_item[i]))==typeid(destroyer)){
            numberhealth.decrease();
            if(numberhealth.getHealth()==0){
                /////////////////////
            }
            return;
        }
    }
}

void player::gettreasure()
{
    if(numberscore.getscore()>=5){
        QList<QGraphicsItem*> colliding_item=collidingItems();
        for(int i=0;i<colliding_item.size();i++){
            if(typeid (*(colliding_item[i]))==typeid(treasure)){
                numbertreasure++;
                scene()->removeItem(colliding_item[i]);
                delete colliding_item[i];
                return;
            }
        }
    }
}
//void player::end_level1()
//{
//    emit this->setstep1();
//}

//void player::end_level2()
//{
//  emit this->setstep2();
//}

//void player::end_level3()
//{
//    emit this->setstep3();
//}

//void player::end_level4()
//{
//    emit this->setstep4();
//}

