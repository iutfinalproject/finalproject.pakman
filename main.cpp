#include"brick.h"
#include <QApplication>
#include <QGraphicsView>
#include<QGraphicsScene>
#include<QImage>
#include<QDesktopWidget>
#include<qdebug.h>
#include"key.h"
#include"background.h"
#include<QTimer>
#include"destroyer.h"
#include<QThread>
#include"thread1.h"
 QGraphicsView* view;

int main(int argc, char *argv[])
{
    int flag=2;


    QApplication a(argc, argv);
       QGraphicsScene *scene2=new QGraphicsScene();
       QGraphicsScene *scene3=new QGraphicsScene();
       QGraphicsView *view=new QGraphicsView();
       QDesktopWidget desktop;
       int desktopHight=desktop.geometry().height();
       int desktopWidth=desktop.geometry().width();
       view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       view->setFixedSize(desktopWidth,desktopHight);
       QThread mydes;
       thread1 myd;
       myd.dowork(mydes);
       myd.moveToThread(&mydes);
       mydes.start(QThread::HighestPriority);
       //....................
       QThread mykey;
       thread1 myk;
       myk.dowork(mykey);
       myk.moveToThread(&mykey);
       mykey.start(QThread::LowestPriority);
       //..................



 if(flag==2){
    scene2->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background2(":/image/background2.png");
    scene2->setBackgroundBrush(background2.scaled(desktopWidth,desktopHight));
    background mybackground(flag,0,scene2,2);
    mybackground.addbrick();
    mybackground.adddestroyer();
    mybackground.addkey();
    mybackground.addscore();
    mybackground.addHealth();
    mybackground.addtreasure();
    mybackground.addplayer();
    view->setScene(scene2);
}
else if(flag==3){
    scene3->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background3(":/image/scene3.jpg");
    scene3->setBackgroundBrush(background3.scaled(desktopWidth,desktopHight));
    background mybackground(flag,0,scene3,3);
    mybackground.addbrick();
    mybackground.addkey();
    mybackground.adddestroyer();
    view->setScene(scene3);
    }


 //****************************************

    view->show();

    return a.exec();
}
