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
    brick1 size;
    int number_y_brick=desktopHight/size.get_h();
    int number_x_brick=desktopWidth/size.get_w();
   brick1 * brick_y[number_y_brick];
   int y =0;
   for(int i=0;i<number_y_brick+1;i++){
   brick_y[i]=new brick1();
   brick_y[i]->setpos_(0,y );
   y+=size.get_h();
   scene->addItem(brick_y[i]);
   }


   brick1 * brick_x[number_x_brick];
   int x=0;
   for(int i=0;i<number_x_brick+1;i++){
   brick_x[i]=new brick1();
   brick_x[i]->setpos_(x,0 );
   x+=size.get_w();
   scene->addItem(brick_x[i]);
   }
//////right
   brick1 * brick_y2[number_y_brick];
   brick_y2[0]=new brick1();
   int y1_rihgt =brick_y[0]->get_h();
   int x_w=brick_y[0]->get_w();
   brick_y2[0]->setpos_(desktopWidth- x_w,y1_rihgt );
   scene->addItem(brick_y2[0]);
    y1_rihgt+=brick_y[0]->get_h();

   for(int i=1;i<number_y_brick+1;i++){
   brick_y2[i]=new brick1();
   brick_y2[i]->setpos_(desktopWidth- x_w,y1_rihgt );
   y1_rihgt+=brick_y[0]->get_h();
   scene->addItem(brick_y2[i]);
   }
   /////down
   brick1 * brick_x2[number_x_brick];
   int x1_down= x_w;
   for(int i=0;i<number_x_brick;i++){
   brick_x2[i]=new brick1();
   brick_x2[i]->setpos_(x1_down,desktopHight-(brick_y[0]->get_h()-4));
   x1_down+= x_w;
   scene->addItem(brick_x2[i]);
   }
   int number_y_leftbrick=desktopHight/(4*brick_y[0]->get_h());
   /////left up
   brick1 * brick_y_left1[number_y_leftbrick];
   int y2_left =brick_y[0]->get_h();
   for(int i=0;i<number_y_leftbrick;i++){
   brick_y_left1[i]=new brick1();
   brick_y_left1[i]->setpos_( x_w,y2_left);
   y2_left+=brick_y[0]->get_h();
   scene->addItem(brick_y_left1[i]);
   }

       brick1 * brick_y_left2[number_y_leftbrick];
       int y3_left =brick_y[0]->get_h();
       for(int i=0;i<number_y_leftbrick;i++){
       brick_y_left2[i]=new brick1();
       brick_y_left2[i]->setpos_( x_w*2,y3_left);
       y3_left+=brick_y[0]->get_h();
       scene->addItem(brick_y_left2[i]);

   }

           brick1 * brick_y_left3[number_y_leftbrick];
           int y4_left =brick_y[0]->get_h();
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_left3[i]=new brick1();
           brick_y_left3[i]->setpos_( x_w*3,y4_left);
           y4_left+=brick_y[0]->get_h();
           scene->addItem(brick_y_left3[i]);

   }


////////left down

       brick1 * brick_y_leftdown1[number_y_leftbrick];
       int y2_left_down =desktopHight-((brick_y[0]->get_h()*2)-5);
       for(int i=0;i<number_y_leftbrick;i++){
       brick_y_leftdown1[i]=new brick1();
       brick_y_leftdown1[i]->setpos_( x_w,y2_left_down);
       y2_left_down-=brick_y[0]->get_h();
       scene->addItem(brick_y_leftdown1[i]);
       }
           brick1 * brick_y_leftdown2[number_y_leftbrick];
           int y3_left_down =desktopHight-((brick_y[0]->get_h()*2)-5);
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_leftdown2[i]=new brick1();
           brick_y_leftdown2[i]->setpos_( x_w*2,y3_left_down);
           y3_left_down-=brick_y[0]->get_h();
           scene->addItem(brick_y_leftdown2[i]);

       }

               brick1 * brick_y_leftdown3[number_y_leftbrick];
               int y4_left_down =desktopHight-((brick_y[0]->get_h()*2)-5);
               for(int i=0;i<number_y_leftbrick;i++){
               brick_y_leftdown3[i]=new brick1();
               brick_y_leftdown3[i]->setpos_( x_w*3,y4_left_down);
               y4_left_down-=brick_y[0]->get_h();
               scene->addItem(brick_y_leftdown3[i]);

       }
///////right down

       brick1 * brick_y_rightdown1[number_y_leftbrick];
       int y2_rightdown =desktopHight-((brick_y[0]->get_h()*2)-6);
       for(int i=0;i<number_y_leftbrick;i++){
       brick_y_rightdown1[i]=new brick1();
       brick_y_rightdown1[i]->setpos_(desktopWidth- (x_w*2),y2_rightdown);
       y2_rightdown-=brick_y[0]->get_h();
       scene->addItem(brick_y_rightdown1[i]);
       }

           brick1 * brick_y_rightdown2[number_y_leftbrick];
           int y3_rightdown =desktopHight-((brick_y[0]->get_h()*2)-6);
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_rightdown2[i]=new brick1();
           brick_y_rightdown2[i]->setpos_(desktopWidth- (x_w*3),y3_rightdown);
           y3_rightdown-=brick_y[0]->get_h();
           scene->addItem(brick_y_rightdown2[i]);

       }

               brick1 * brick_y_rightdown3[number_y_leftbrick];
               int y4_rightdown =desktopHight-((brick_y[0]->get_h()*2)-6);
               for(int i=0;i<number_y_leftbrick;i++){
               brick_y_rightdown3[i]=new brick1();
               brick_y_rightdown3[i]->setpos_(desktopWidth- (x_w*4),y4_rightdown);
               y4_rightdown-=brick_y[0]->get_h();
               scene->addItem(brick_y_rightdown3[i]);

       }

//////right up

           brick1 * brick_y_right1[number_y_leftbrick];
           int y2_right =brick_y[0]->get_h();
           for(int i=0;i<number_y_leftbrick;i++){
           brick_y_right1[i]=new brick1();
           brick_y_right1[i]->setpos_(desktopWidth- (x_w*2),y2_right);
           y2_right+=brick_y[0]->get_h();
           scene->addItem(brick_y_right1[i]);
           }

               brick1 * brick_y_right2[number_y_leftbrick];
               int y3_right =brick_y[0]->get_h();
               for(int i=0;i<number_y_leftbrick;i++){
               brick_y_right2[i]=new brick1();
               brick_y_right2[i]->setpos_(desktopWidth-( x_w*3),y3_right);
               y3_right+=brick_y[0]->get_h();
               scene->addItem(brick_y_right2[i]);

           }

                   brick1 * brick_y_right3[number_y_leftbrick];
                   int y4_right =brick_y[0]->get_h();
                   for(int i=0;i<number_y_leftbrick;i++){
                   brick_y_right3[i]=new brick1();
                   brick_y_right3[i]->setpos_(desktopWidth- (x_w*4),y4_right);
                   y4_right+=brick_y[0]->get_h();
                   scene->addItem(brick_y_right3[i]);

           }
/////betveen up
           int y_b_up =brick_y[0]->get_h();
           int x_brickb=(desktopWidth/2)-(4*x_w);
           brick1 * y_brick_b[7];
           for(int i=0;i<7;i++){
           y_brick_b[i]=new brick1();
           y_brick_b[i]->setpos_(x_brickb,y_b_up*2);
           x_brickb+=x_w;
           scene->addItem(y_brick_b[i]);
           }

           ///1/3 up

           int y4_brick =brick_y[0]->get_h()*4;
           int x4_brickb=(desktopWidth/3)-2*x_w;
           brick1 * up_brick_b[33];
           for(int i=0;i<30;i++){
           up_brick_b[i]=new brick1();
           up_brick_b[i]->setpos_(x4_brickb,y4_brick);
           x4_brickb+=x_w;
           scene->addItem(up_brick_b[i]);
           if(i==10){
             x4_brickb= (desktopWidth/3)-2*x_w;
              y4_brick+=brick_y[0]->get_h();
           }
           if(i==20){
               x4_brickb= (desktopWidth/3)-2*x_w;
                y4_brick+=brick_y[0]->get_h();

           }
           }
  //////betveen down
           int y_b_down =brick_y[0]->get_h();
           int x2_brickb=(desktopWidth/2)-(4*x_w);
           brick1 * y2_brick_b[40];
           for(int i=0;i<7;i++){
           y2_brick_b[i]=new brick1();
           y2_brick_b[i]->setpos_(x2_brickb,desktopHight-y_b_down*3);
           x2_brickb+=x_w;
           scene->addItem(y2_brick_b[i]);

           }
           //////1/3 down
       int x3_brickb=(desktopWidth/3)-2*x_w;
       int y3_brickb=desktopHight-y_b_down*5;
       for(int i=7;i<37;i++){
       y2_brick_b[i]=new brick1();
       y2_brick_b[i]->setpos_(x3_brickb,y3_brickb);
       x3_brickb+=x_w;
       scene->addItem(y2_brick_b[i]);
       if(i==17){
          x3_brickb=(desktopWidth/3)-2*x_w ;
          y3_brickb=y3_brickb-y_b_down;
       }
       if(i==27){
           x3_brickb=(desktopWidth/3)-2*x_w ;
           y3_brickb=y3_brickb-(y_b_down);
       }
       }
       int y_b=(desktopHight/2)-2*y_b_down;
       int x_b=desktopWidth-5*x_w;
    brick1 * y3_brick_b[4];
    for(int i=0;i<4;i++){
    y3_brick_b[i]=new brick1();
    y3_brick_b[i]->setpos_(x_b,y_b);
    y_b+=y_b_down;
    scene->addItem(y3_brick_b[i]);
    }


}

#endif // ADDBRICK_H
