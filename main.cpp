#include"brick.h"
#include <QApplication>
#include <QGraphicsView>
#include<QGraphicsScene>
#include<QImage>
#include<QDesktopWidget>
#include<qdebug.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene *scene1=new QGraphicsScene();
    QGraphicsView *view=new QGraphicsView(scene1);
    QImage background(":/image/scene1.jpg");
    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();

    scene1->setBackgroundBrush(background.scaled(desktopWidth,desktopHight));
    scene1->setSceneRect(0,0,desktopWidth,desktopHight);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(desktopWidth,desktopHight);
     int number_y_brick=desktopHight/58;
     int number_x_brick=desktopWidth/71;
    brick1 * brick_y[number_y_brick];
    int y =0;
    for(int i=0;i<number_y_brick+1;i++){
    brick_y[i]=new brick1();
    brick_y[i]->setpos_(0,y );
    y+=58;
    scene1->addItem(brick_y[i]);
    }


    brick1 * brick_x[number_x_brick];
    int x=0;
    for(int i=0;i<number_x_brick+1;i++){
    brick_x[i]=new brick1();
    brick_x[i]->setpos_(x,0 );
    x+=71;
    scene1->addItem(brick_x[i]);
    }


    view->show();

    return a.exec();
}
