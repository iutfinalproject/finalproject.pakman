#ifndef ADDBRICK_H
#define ADDBRICK_H
#include "brick.h"
#include<QDesktopWidget>
#include<QGraphicsScene>
void addbrick(QGraphicsScene* scene){
    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();


//****************************************************************************

   brick * brick_y[15];
   int y =0;
   for(int i=0;i<15;i++){
        brick_y[i]=new brick(2,desktopHight,desktopWidth);
        brick_y[i]->setpos_(0,y );
        y+=desktopHight/15;
        scene->addItem(brick_y[i]);
   }


   brick * brick_x[20];
   int x=0;
   for(int i=0;i<20;i++){
        brick_x[i]=new brick(2,desktopHight,desktopWidth);
         brick_x[i]->setpos_(x,0 );
        x+=desktopWidth/20;
         scene->addItem(brick_x[i]);
   }

   brick * brick_y_end[15];
   int y_end =0;
   for(int i=0;i<15;i++){
        brick_y_end[i]=new brick(2,desktopHight,desktopWidth);
        brick_y_end[i]->setpos_(desktopWidth-(desktopWidth/20),y_end);
        y_end+=desktopHight/15;
        scene->addItem(brick_y_end[i]);
   }


   brick * brick_x_end[20];
   int x_end=0;
   for(int i=0;i<20;i++){
        brick_x_end[i]=new brick(2,desktopHight,desktopWidth);
        brick_x_end[i]->setpos_(x_end,desktopHight-(desktopHight/15) );
        x_end+=desktopWidth/20;
         scene->addItem(brick_x_end[i]);
   }


//***************************************************************************************************
   int x_midlle1=(desktopWidth/20)*2;//----------
   brick * brick_midlle1[8];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<8;i++){
       brick_midlle1[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle1+=desktopWidth/20;
      brick_midlle1[i]->setpos_(x_midlle1,desktopHight-(desktopHight/15)*3);
      scene->addItem(brick_midlle1[i]);
   }

 //*************************************************************************************************
   int x_midlle2=(desktopWidth/20)*12;//-----------
   brick * brick_midlle2[5];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<5;i++){
       brick_midlle2[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle2+=desktopWidth/20;
      brick_midlle2[i]->setpos_(x_midlle2,desktopHight-(desktopHight/15)*3);
      scene->addItem(brick_midlle2[i]);
   }

//**************************************************************************************************
   int y_midlle3=desktopHight-(desktopHight/15)*4;
   brick * brick_midlle3[5];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<5;i++){
       brick_midlle3[i]=new brick(2,desktopHight,desktopWidth);
       y_midlle3-=desktopHight/20;
      brick_midlle3[i]->setpos_((desktopWidth/20)*4, y_midlle3);
      scene->addItem(brick_midlle3[i]);
   }
//***************************************************************************************************
   int x_midlle4=(desktopWidth/20)*3;
   brick * brick_midlle4[5];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<5;i++){
       brick_midlle4[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle4+=desktopWidth/20;
      brick_midlle4[i]->setpos_(x_midlle4,desktopHight-(desktopHight/15)*8);
      scene->addItem(brick_midlle4[i]);
   }
//***************************************************************************************************

   int y_midlle5=desktopHight-(desktopHight/15)*4;
   brick * brick_midlle5[9];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<9;i++){
       brick_midlle5[i]=new brick(2,desktopHight,desktopWidth);
       y_midlle5-=desktopHight/20;
      brick_midlle5[i]->setpos_((desktopWidth/20)*1.75, y_midlle5);
      scene->addItem(brick_midlle5[i]);
   }
//*****************************************************************************************************


   int y_midlle6=desktopHight-(desktopHight/15)*9;
   int x_midlle6=(desktopWidth/20)*2.5;
   brick * brick_midlle6[9];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<3;i++){
       y_midlle6=desktopHight-(desktopHight/15)*9;
       x_midlle6+=desktopWidth/20;
       for(int j=0;j<3;j++){
          brick_midlle6[i]=new brick(2,desktopHight,desktopWidth);
          y_midlle6-=desktopHight/20;
          brick_midlle6[i]->setpos_(x_midlle6, y_midlle6);
          scene->addItem(brick_midlle6[i]);
       }
   }
//****************************************************************************************************

   int x_midlle7=(desktopWidth/20)*4.75;
   brick * brick_midlle7[8];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<8;i++){
       brick_midlle7[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle7+=desktopWidth/20;
      brick_midlle7[i]->setpos_(x_midlle7,desktopHight-(desktopHight/15)*5);
      scene->addItem(brick_midlle7[i]);
   }
//****************************************************************************************************


   int y_midlle8=desktopHight-(desktopHight/15)*5;
   int x_midlle8=(desktopWidth/20)*9;
   brick * brick_midlle8[8];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<2;i++){
       y_midlle8=desktopHight-(desktopHight/15)*5;
       x_midlle8+=desktopWidth/20;
       for(int j=0;j<4;j++){
          brick_midlle8[i]=new brick(2,desktopHight,desktopWidth);
          y_midlle8-=desktopHight/20;
          brick_midlle8[i]->setpos_(x_midlle8, y_midlle8);
          scene->addItem(brick_midlle8[i]);
       }
   }
//****************************************************************************************************
   int y_midlle9=desktopHight-(desktopHight/15)*11.75;
   int x_midlle9=(desktopWidth/20)*13;
   brick * brick_midlle9[8];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<4;i++){
       y_midlle9=desktopHight-(desktopHight/15)*11.75;
       x_midlle9+=desktopWidth/20;
       for(int j=0;j<2;j++){
          brick_midlle9[i]=new brick(2,desktopHight,desktopWidth);
          y_midlle9-=desktopHight/20;
          brick_midlle9[i]->setpos_(x_midlle9, y_midlle9);
          scene->addItem(brick_midlle9[i]);
       }
   }
//***************************************************************************************************
   int x_midlle10=(desktopWidth/20)*2;
   brick * brick_midlle10[10];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<10;i++){
       brick_midlle10[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle10+=desktopWidth/20;
      brick_midlle10[i]->setpos_(x_midlle10,desktopHight-(desktopHight/15)*13);
      scene->addItem(brick_midlle10[i]);
   }
//***************************************************************************************************

   int y_midlle11=desktopHight-(desktopHight/15)*4;
   int x_midlle11=(desktopWidth/20)*15.25;
   brick * brick_midlle11[4];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<2;i++){
       y_midlle11=desktopHight-(desktopHight/15)*4;
       x_midlle11+=desktopWidth/20;
       for(int j=0;j<2;j++){
          brick_midlle11[i]=new brick(2,desktopHight,desktopWidth);
          y_midlle11-=desktopHight/20;
          brick_midlle11[i]->setpos_(x_midlle11, y_midlle11);
          scene->addItem(brick_midlle11[i]);
       }
   }
//***********************************************************************************************
   int x_midlle12=(desktopWidth/20)*6.5;
   brick * brick_midlle12[6];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<6;i++){
       brick_midlle12[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle12+=desktopWidth/20;
      brick_midlle12[i]->setpos_(x_midlle12,desktopHight-(desktopHight/15)*11);
      scene->addItem(brick_midlle12[i]);
   }
//*************************************************************************************************

   int y_midlle13=desktopHight-(desktopHight/15)*4;
   brick * brick_midlle13[9];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<9;i++){
       brick_midlle13[i]=new brick(2,desktopHight,desktopWidth);
       y_midlle13-=desktopHight/20;
      brick_midlle13[i]->setpos_((desktopWidth/20)*14.5, y_midlle13);
      scene->addItem(brick_midlle13[i]);
   }
//************************************************************************************************

   int x_midlle14=(desktopWidth/20)*14.5;
   brick * brick_midlle14[3];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<3;i++){
       brick_midlle14[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle14+=desktopWidth/20;
      brick_midlle14[i]->setpos_(x_midlle14,desktopHight-(desktopHight/15)*7.5);
      scene->addItem(brick_midlle14[i]);
   }
//************************************************************************************************
   int x_midlle15=(desktopWidth/20)*14.5;
   brick * brick_midlle15[3];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<3;i++){
       brick_midlle15[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle15+=desktopWidth/20;
      brick_midlle15[i]->setpos_(x_midlle15,desktopHight-(desktopHight/15)*9.5);
      scene->addItem(brick_midlle15[i]);
   }
//*************************************************************************************************
   int x_midlle16=(desktopWidth/20)*9.5;
   brick * brick_midlle16[3];//=new brick(2,desktopHight,desktopWidth);
   for(int i=0;i<3;i++){
       brick_midlle16[i]=new brick(2,desktopHight,desktopWidth);
       x_midlle16+=desktopWidth/20;
      brick_midlle16[i]->setpos_(x_midlle16,desktopHight-(desktopHight/15)*9);
      scene->addItem(brick_midlle16[i]);
   }
}
#endif // ADDBRICK_H
