#ifndef ADDBRICK_H
#define ADDBRICK_H
#include "brick.h"
#include<QDesktopWidget>
#include<QGraphicsScene>
void addbrick(QGraphicsScene* scene){
    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();

    int number_y_brick=desktopHight/58;
    int number_x_brick=desktopWidth/71;
   brick1 * brick_y[number_y_brick];
   int y =0;
   for(int i=0;i<number_y_brick+1;i++){
   brick_y[i]=new brick1();
   brick_y[i]->setpos_(0,y );
   y+=58;
   scene->addItem(brick_y[i]);
   }


   brick1 * brick_x[number_x_brick];
   int x=0;
   for(int i=0;i<number_x_brick+1;i++){
   brick_x[i]=new brick1();
   brick_x[i]->setpos_(x,0 );
   x+=71;
   scene->addItem(brick_x[i]);
   }

}

#endif // ADDBRICK_H
