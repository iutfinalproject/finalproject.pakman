#include <QApplication>
#include <QGraphicsView>
#include<QGraphicsScene>
#include <QApplication>
#include<QImage>
#include<QDesktopWidget>
#include<QGraphicsPixmapItem>
#include "brick.h"
#include"addBrick.h"
#include<QPixmap>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    QGraphicsScene *scene2=new QGraphicsScene();
    QGraphicsView *view=new QGraphicsView(scene2);
    QImage background("://image/background2");

    QDesktopWidget desktop;

    int desktopHeight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();



    scene2->setBackgroundBrush(background.scaled(desktopWidth,desktopHeight));
    addbrick(scene2);


    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(desktopWidth,desktopHeight);
    scene2->setSceneRect(0,0,desktopWidth,desktopHeight);




    view->show();






    return a.exec();
}
