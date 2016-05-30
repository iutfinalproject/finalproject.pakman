#include <QApplication>
#include <QGraphicsView>
#include<QGraphicsScene>
#include <QApplication>
#include<QImage>
#include<QDesktopWidget>
#include<QGraphicsPixmapItem>
#include "brick.h"
#include"addBrick2.h"
#include"addbrick1.h"
#include<QPixmap>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);

    int numScene=1;

    QGraphicsScene *scene1=new QGraphicsScene();
    QImage background1("://image/background1");

    QGraphicsScene *scene2=new QGraphicsScene();
    QImage background2("://image/background2");


    QGraphicsScene *scene3=new QGraphicsScene();
    QImage background3("://image/background3");

    if(numScene==1){
        QGraphicsView *view=new QGraphicsView(scene1);


        QDesktopWidget desktop;
        int desktopHeight=desktop.geometry().height();
        int desktopWidth=desktop.geometry().width();
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setFixedSize(desktopWidth,desktopHeight);
        scene1->setSceneRect(0,0,desktopWidth,desktopHeight);

        scene1->setBackgroundBrush(background1.scaled(desktopWidth,desktopHeight));
      //  addbrick1(scene1);

        view->show();

    }



    if(numScene==2){
         QGraphicsView *view=new QGraphicsView(scene2);

        QDesktopWidget desktop;
        int desktopHeight=desktop.geometry().height();
        int desktopWidth=desktop.geometry().width();
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setFixedSize(desktopWidth,desktopHeight);
        scene2->setSceneRect(0,0,desktopWidth,desktopHeight);



     scene2->setBackgroundBrush(background2.scaled(desktopWidth,desktopHeight));
     addbrick2(scene2);
       view->show();
    }




    if(numScene==3){
         QGraphicsView *view=new QGraphicsView(scene3);

        QDesktopWidget desktop;
        int desktopHeight=desktop.geometry().height();
        int desktopWidth=desktop.geometry().width();
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setFixedSize(desktopWidth,desktopHeight);
        scene3->setSceneRect(0,0,desktopWidth,desktopHeight);


       view->show();
    }













    return a.exec();
}
