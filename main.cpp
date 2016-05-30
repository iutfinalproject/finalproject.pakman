#include"brick.h"
#include"addbrick_scene1.h"
#include"addbrick_scene2.h"
#include <QApplication>
#include <QGraphicsView>
#include<QGraphicsScene>
#include<QImage>
#include<QDesktopWidget>
#include<qdebug.h>
int main(int argc, char *argv[])
{

    int flag=1;
    QApplication a(argc, argv);
    QGraphicsScene *scene1=new QGraphicsScene();
    QGraphicsScene *scene2=new QGraphicsScene();
    QGraphicsScene *scene3=new QGraphicsScene();
    QGraphicsView *view=new QGraphicsView();

    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(desktopWidth,desktopHight);
if(flag==1){

    scene1->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background1(":/image/scene1.jpg");
    scene1->setBackgroundBrush(background1.scaled(desktopWidth,desktopHight));
    addbrick(scene1);
    view->setScene(scene1);
}
else if(flag==2){
    scene2->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background2(":/image/scene2.jpg");
    scene2->setBackgroundBrush(background2.scaled(desktopWidth,desktopHight));
    addbrick2(scene2);
    view->setScene(scene2);
}
else if(flag==3){
    scene3->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background3(":/image/scene3.jpg");
    scene3->setBackgroundBrush(background3.scaled(desktopWidth,desktopHight));
    addbrick(scene3);
        view->setScene(scene3);
    }


    view->show();

    return a.exec();
}
