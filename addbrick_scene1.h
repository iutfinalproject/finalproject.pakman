#ifndef ADDBRICK_H
#define ADDBRICK_H
#include "brick.h"
#include<QDesktopWidget>
#include<QGraphicsScene>
#include<qdebug.h>
void addbrick(QGraphicsScene* scene){
    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();
    int number_h=desktopHight/15;
    int number_w=desktopWidth/20.6;
   brick * brick_y[(desktopHight/number_h)];
   int y =0;
   for(int i=0;i<(desktopHight/number_h)+1;i++){
   brick_y[i]=new brick(1,desktopHight,desktopWidth);
   brick_y[i]->setpos_(0,y );
   y+=desktopHight/15;
   scene->addItem(brick_y[i]);
   }


   brick * brick_x[desktopWidth/number_w];
   int x=0;
   for(int i=0;i<(desktopWidth/number_w)+1;i++){
   brick_x[i]=new brick(1,desktopHight,desktopWidth);
   brick_x[i]->setpos_(x,0 );
   x+=desktopWidth/20.6;
   scene->addItem(brick_x[i]);
   }
//////right
  int y1_rihgt=desktopHight/15;
   brick *brick_y2[desktopHight/number_h];
   for(int i=0;i<(desktopHight/number_h)+1;i++){
   brick_y2[i]=new brick(1,desktopHight,desktopWidth);
   brick_y2[i]->setpos_(desktopWidth-desktopWidth/20.6,y1_rihgt );
   y1_rihgt+=desktopHight/15;
   scene->addItem(brick_y2[i]);
   }
   /////down
   brick * brick_x2[desktopWidth/number_w];
   int x1_down= desktopWidth/20.6;
   for(int i=0;i<desktopWidth/number_w;i++){
   brick_x2[i]=new brick(1,desktopHight,desktopWidth);
   brick_x2[i]->setpos_(x1_down,desktopHight-desktopHight/15);
   x1_down+=desktopWidth/20.6;
   scene->addItem(brick_x2[i]);
   }
   int number_y_leftbrick=desktopHight/(4*(desktopHight/15));
   /////left up
   brick * brick_y_left1[number_y_leftbrick];
   int y2_left =desktopHight/15;
   for(int i=0;i<number_y_leftbrick;i++){
   brick_y_left1[i]=new brick(1,desktopHight,desktopWidth);
   brick_y_left1[i]->setpos_(desktopWidth/20.6,y2_left);
   y2_left+=desktopHight/15;
   scene->addItem(brick_y_left1[i]);
   }

       brick * brick_y_left2[number_y_leftbrick];
       int y3_left =desktopHight/15;
       for(int i=0;i<number_y_leftbrick;i++){
       brick_y_left2[i]=new brick(1,desktopHight,desktopWidth);
       brick_y_left2[i]->setpos_( (desktopWidth/20.6)*2,y3_left);
       y3_left+=desktopHight/15;
       scene->addItem(brick_y_left2[i]);

   }

           brick * brick_y_left3[number_y_leftbrick];
           int y4_left =desktopHight/15;
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_left3[i]=new brick(1,desktopHight,desktopWidth);
           brick_y_left3[i]->setpos_( (desktopWidth/20.6)*3,y4_left);
           y4_left+=desktopHight/15;
           scene->addItem(brick_y_left3[i]);

   }


////////left down

       brick * brick_y_leftdown1[number_y_leftbrick];
       int y2_left_down =desktopHight-(((desktopHight/15)*2)-5);
       for(int i=0;i<number_y_leftbrick;i++){
       brick_y_leftdown1[i]=new brick(1,desktopHight,desktopWidth);
       brick_y_leftdown1[i]->setpos_( desktopWidth/20.6,y2_left_down);
       y2_left_down-=desktopHight/15;
       scene->addItem(brick_y_leftdown1[i]);
       }
           brick * brick_y_leftdown2[number_y_leftbrick];
           int y3_left_down =desktopHight-(((desktopHight/15)*2)-5);
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_leftdown2[i]=new brick(1,desktopHight,desktopWidth);
           brick_y_leftdown2[i]->setpos_( (desktopWidth/20.6)*2,y3_left_down);
           y3_left_down-=desktopHight/15;
           scene->addItem(brick_y_leftdown2[i]);

       }

               brick * brick_y_leftdown3[number_y_leftbrick];
               int y4_left_down =desktopHight-(((desktopHight/15)*2)-5);
               for(int i=0;i<number_y_leftbrick;i++){
               brick_y_leftdown3[i]=new brick(1,desktopHight,desktopWidth);
               brick_y_leftdown3[i]->setpos_( (desktopWidth/20.6)*3,y4_left_down);
               y4_left_down-=desktopHight/15;
               scene->addItem(brick_y_leftdown3[i]);

       }
///////right down

       brick * brick_y_rightdown1[number_y_leftbrick];
       int y2_rightdown =desktopHight-(((desktopHight/15)*2)-5);
       for(int i=0;i<number_y_leftbrick;i++){
       brick_y_rightdown1[i]=new brick(1,desktopHight,desktopWidth);
       brick_y_rightdown1[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*2),y2_rightdown);
       y2_rightdown-=desktopHight/15;
       scene->addItem(brick_y_rightdown1[i]);
       }

           brick * brick_y_rightdown2[number_y_leftbrick];
           int y3_rightdown =desktopHight-(((desktopHight/15)*2)-5);
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_rightdown2[i]=new brick(1,desktopHight,desktopWidth);
           brick_y_rightdown2[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*3),y3_rightdown);
           y3_rightdown-=desktopHight/15;
           scene->addItem(brick_y_rightdown2[i]);

       }

               brick * brick_y_rightdown3[number_y_leftbrick];
               int y4_rightdown =desktopHight-(((desktopHight/15)*2)-5);
               for(int i=0;i<number_y_leftbrick;i++){
               brick_y_rightdown3[i]=new brick(1,desktopHight,desktopWidth);
               brick_y_rightdown3[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*4),y4_rightdown);
               y4_rightdown-=desktopHight/15;
               scene->addItem(brick_y_rightdown3[i]);

       }

//////right up

           brick * brick_y_right1[number_y_leftbrick];
           int y2_right =desktopHight/15;
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_right1[i]=new brick(1,desktopHight,desktopWidth);
           brick_y_right1[i]->setpos_(desktopWidth- ((desktopWidth/20.6)*2),y2_right);
           y2_right+=desktopHight/15;
           scene->addItem(brick_y_right1[i]);
           }

               brick * brick_y_right2[number_y_leftbrick];
               int y3_right =desktopHight/15;
               for(int i=0;i<number_y_leftbrick;i++){
               brick_y_right2[i]=new brick(1,desktopHight,desktopWidth);
               brick_y_right2[i]->setpos_(desktopWidth-( (desktopWidth/20.6)*3),y3_right);
               y3_right+=desktopHight/15;
               scene->addItem(brick_y_right2[i]);

           }

                   brick * brick_y_right3[number_y_leftbrick];
                   int y4_right =desktopHight/15;
                   for(int i=0;i<number_y_leftbrick;i++){
                   brick_y_right3[i]=new brick(1,desktopHight,desktopWidth);
                   brick_y_right3[i]->setpos_(desktopWidth- ((desktopWidth/20.6)*4),y4_right);
                   y4_right+=desktopHight/15;
                   scene->addItem(brick_y_right3[i]);

           }
/////betveen up
           int y_b_up =desktopHight/15;
           int x_brickb=(desktopWidth/2)-(4*(desktopWidth/20.6));
           brick * y_brick_b[7];
           for(int i=0;i<7;i++){
           y_brick_b[i]=new brick(1,desktopHight,desktopWidth);
           y_brick_b[i]->setpos_(x_brickb,y_b_up*2);
           x_brickb+=(desktopWidth/20.6);
           scene->addItem(y_brick_b[i]);
           }

           ///1/3 up

           int y4_brick =(desktopHight/15)*4;
           int x4_brickb=(desktopWidth/3)-2*(desktopWidth/20.6);
           brick * up_brick_b[33];
           for(int i=0;i<30;i++){
           up_brick_b[i]=new brick(1,desktopHight,desktopWidth);
           up_brick_b[i]->setpos_(x4_brickb,y4_brick);
           x4_brickb+=(desktopWidth/20.6);
           scene->addItem(up_brick_b[i]);
           if(i==10){
             x4_brickb= (desktopWidth/3)-2*(desktopWidth/20.6);
              y4_brick+=desktopHight/15;
           }
           if(i==20){
               x4_brickb= (desktopWidth/3)-2*(desktopWidth/20.6);
                y4_brick+=desktopHight/15;

           }
           }
  //////betveen down
           int y_b_down =desktopHight/15;
           int x2_brickb=(desktopWidth/2)-(4*(desktopWidth/20.6));
           brick * y2_brick_b[40];
           for(int i=0;i<7;i++){
           y2_brick_b[i]=new brick(1,desktopHight,desktopWidth);
           y2_brick_b[i]->setpos_(x2_brickb,desktopHight-y_b_down*3);
           x2_brickb+=(desktopWidth/20.6);
           scene->addItem(y2_brick_b[i]);

           }
           //////1/3 down
       int x3_brickb=(desktopWidth/3)-2*(desktopWidth/20.6);
       int y3_brickb=desktopHight-y_b_down*5;
       for(int i=7;i<37;i++){
       y2_brick_b[i]=new brick(1,desktopHight,desktopWidth);
       y2_brick_b[i]->setpos_(x3_brickb,y3_brickb);
       x3_brickb+=(desktopWidth/20.6);
       scene->addItem(y2_brick_b[i]);
       if(i==17){
          x3_brickb=(desktopWidth/3)-2*(desktopWidth/20.6) ;
          y3_brickb=y3_brickb-y_b_down;
       }
       if(i==27){
           x3_brickb=(desktopWidth/3)-2*(desktopWidth/20.6) ;
           y3_brickb=y3_brickb-(y_b_down);
       }
       }
       int y_b=(desktopHight/2)-2*y_b_down;
       int x_b=desktopWidth-5*(desktopWidth/20.6);
    brick * y3_brick_b[4];
    for(int i=0;i<4;i++){
    y3_brick_b[i]=new brick(1,desktopHight,desktopWidth);
    y3_brick_b[i]->setpos_(x_b,y_b);
    y_b+=y_b_down;
    scene->addItem(y3_brick_b[i]);
    }


}

#endif // ADDBRICK_H
