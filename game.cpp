#include "game.h"
#include"destroyer.h"
#include"startpage.h"
#include"thread1.h"
#include"thread2.h"
#include"thread3.h"
#include<QThread>
QGraphicsView* Game::view=0;
Game::Game(QWidget *parent)
{
    view=new QGraphicsView();
    scene=new QGraphicsScene();
    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(desktopWidth,desktopHight);

    player11_=new player_1(19,desktopWidth,desktopHight);
    player12_=new player_1(19,desktopWidth,desktopHight);
    player13_=new player_1(22,desktopWidth,desktopHight);
    player21_=new player_2(22,desktopWidth,desktopHight);
    player22_=new player_2(69,desktopWidth,desktopHight);
    player23_=new player_2(69,desktopWidth,desktopHight);
    connect(this,SIGNAL(send_calculate1()),player11_,SLOT(end_level1));
    connect(this,SIGNAL(send_calculate2()),player12_,SLOT(end_level2));
    connect(this,SIGNAL(send_calculate3()),player13_,SLOT(end_level3));
     qDebug()<<"i am here";

     connect (player12_ ,SIGNAL(setstep1()),this,SLOT(ricive_set_step2));

     connect (player11_ ,SIGNAL(setstep1()),this,SLOT(ricive_set_step2));
     connect (player21_ ,SIGNAL(setstep2()),this,SLOT(ricive_set_step3));
     connect (player22_ ,SIGNAL(setstep3()),this,SLOT(ricive_set_step3));




}
//*********************************************
void Game::start_page()
{

    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();
     qDebug()<<"i am startpage";
    scene->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background2(":/image/background2.png");
    scene->setBackgroundBrush(background2.scaled(desktopWidth,desktopHight));



    qDebug()<<"i am in pageof start in background";
    startpage *newpage1=new startpage(500,500,"://image/d1.png");
   newpage1->setPos(500,500);
   scene->addItem(newpage1);

   startpage *newpage2=new startpage(500,500,"://image/d2.png");
   newpage2->setPos(100,100);
   scene->addItem(newpage2);
   QString color="blue";
   textofbutton*new_start_text=new textofbutton(color,"Pac Man FRZ",30);
   scene->addItem(new_start_text);
   new_start_text->setPos(new_start_text->x(),new_start_text->y()+25);

   selection_key*new_key=new selection_key(-1,100,50);
   scene->addItem(new_key);
   new_key->setPos(100,700);
   QString color_="black";
   textofbutton*close_text=new textofbutton(color_,"close",16);
   scene->addItem(close_text);
   close_text->setPos(100,700);



   selection_key*start_key=new selection_key(0,100,50);
   scene->addItem(start_key);
   start_key->setPos(10,700);
  // QString color_="black";
   textofbutton*start_text=new textofbutton(color_,"start",16);
   scene->addItem(start_text);
   start_text->setPos(10,700);

   connect(start_key,SIGNAL(send_signal(int)),this,SLOT(ricive_set_step2()));


  view->setScene(scene);

}
//*************************************************
void Game::ricive_set_step1()
{
    QDesktopWidget desktop;
    desktopHight=desktop.geometry().height();
    desktopWidth=desktop.geometry().width();
    int w=desktopWidth/20.6;
    int h=desktopHight/15;
    scene->clear();

    scene->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background1(":/image/background2.png");
    scene->setBackgroundBrush(background1.scaled(desktopWidth,desktopHight));



    // if(id==1){

 //                       int number_h=desktopHight/15;
 //                       int number_w=desktopWidth/20.6;
 //                      // brick * brick_y[(desktopHight/number_h)];

 //                       int y =0;
 //                       for(int i=0;i<(desktopHight/number_h)+1;i++){
 //                       brick_y[i]=new brick(1,desktopHight,desktopWidth);
 //                       brick_y[i]->setpos_(0,y );
 //                       y+=desktopHight/15;
 //                       scene->addItem(brick_y[i]);
 //                       }
 //                       brick * brick_x[desktopWidth/number_w];
 //                       int x=0;
 //                       for(int i=0;i<(desktopWidth/number_w)+1;i++){
 //                       brick_x[i]=new brick(1,desktopHight,desktopWidth);
 //                       brick_x[i]->setpos_(x,0 );
 //                       x+=desktopWidth/20.6;
 //                       scene->addItem(brick_x[i]);
 //                       }
 //                    //////right
 //                      int y1_rihgt=desktopHight/15;
 //                       brick *brick_y2[desktopHight/number_h];
 //                       for(int i=0;i<(desktopHight/number_h)+1;i++){
 //                       brick_y2[i]=new brick(1,desktopHight,desktopWidth);
 //                       brick_y2[i]->setpos_(desktopWidth-desktopWidth/20.6,y1_rihgt );
 //                       y1_rihgt+=desktopHight/15;
 //                       scene->addItem(brick_y2[i]);
 //                       }
 //                       /////down
 //                       brick * brick_x2[desktopWidth/number_w];
 //                       int x1_down= desktopWidth/20.6;
 //                       for(int i=0;i<desktopWidth/number_w;i++){
 //                       brick_x2[i]=new brick(1,desktopHight,desktopWidth);
 //                       brick_x2[i]->setpos_(x1_down,desktopHight-desktopHight/15);
 //                       x1_down+=desktopWidth/20.6;
 //                       scene->addItem(brick_x2[i]);
 //                       }
 //                       int number_y_leftbrick=desktopHight/(4*(desktopHight/15));
 //                       /////left up
 //                       brick * brick_y_left1[number_y_leftbrick];
 //                       int y2_left =desktopHight/15;
 //                       for(int i=0;i<number_y_leftbrick;i++){
 //                       brick_y_left1[i]=new brick(1,desktopHight,desktopWidth);
 //                       brick_y_left1[i]->setpos_(desktopWidth/20.6,y2_left);
 //                       y2_left+=desktopHight/15;
 //                       scene->addItem(brick_y_left1[i]);
 //                       }

 //                           brick * brick_y_left2[number_y_leftbrick];
 //                           int y3_left =desktopHight/15;
 //                           for(int i=0;i<number_y_leftbrick;i++){
 //                           brick_y_left2[i]=new brick(1,desktopHight,desktopWidth);
 //                           brick_y_left2[i]->setpos_( (desktopWidth/20.7)*2,y3_left);
 //                           y3_left+=desktopHight/15;
 //                           scene->addItem(brick_y_left2[i]);

 //                       }

 //                               brick * brick_y_left3[number_y_leftbrick];
 //                               int y4_left =desktopHight/15;
 //                               for(int i=0;i<number_y_leftbrick;i++){
 //                               brick_y_left3[i]=new brick(1,desktopHight,desktopWidth);
 //                               brick_y_left3[i]->setpos_( (desktopWidth/20.7)*3,y4_left);
 //                               y4_left+=desktopHight/15;
 //                               scene->addItem(brick_y_left3[i]);

 //                       }


 //                    ////////left down

 //                           brick * brick_y_leftdown1[number_y_leftbrick];
 //                           int y2_left_down =desktopHight-(((desktopHight/15)*2)-5);
 //                           for(int i=0;i<number_y_leftbrick;i++){
 //                           brick_y_leftdown1[i]=new brick(1,desktopHight,desktopWidth);
 //                           brick_y_leftdown1[i]->setpos_( desktopWidth/20.6,y2_left_down);
 //                           y2_left_down-=desktopHight/15;
 //
   //  scene->addItem(brick_y_leftdown1[i]);
 //                           }
 //                               brick * brick_y_leftdown2[number_y_leftbrick];
 //                               int y3_left_down =desktopHight-(((desktopHight/15)*2)-5);
 //                               for(int i=0;i<number_y_leftbrick;i++){
 //                               brick_y_leftdown2[i]=new brick(1,desktopHight,desktopWidth);
 //                               brick_y_leftdown2[i]->setpos_( (desktopWidth/20.7)*2,y3_left_down);
 //                               y3_left_down-=desktopHight/15;
 //                               scene->addItem(brick_y_leftdown2[i]);

 //                           }

 //                                   brick * brick_y_leftdown3[number_y_leftbrick];
 //                                   int y4_left_down =desktopHight-(((desktopHight/15)*2)-5);
 //                                   for(int i=0;i<number_y_leftbrick;i++){
 //                                   brick_y_leftdown3[i]=new brick(1,desktopHight,desktopWidth);
 //                                   brick_y_leftdown3[i]->setpos_( (desktopWidth/20.7)*3,y4_left_down);
 //                                   y4_left_down-=desktopHight/15;
 //                                   scene->addItem(brick_y_leftdown3[i]);

 //                           }
 //                    ///////right down

 //                           brick * brick_y_rightdown1[number_y_leftbrick];
 //                           int y2_rightdown =desktopHight-(((desktopHight/15)*2)-5);
 //                           for(int i=0;i<number_y_leftbrick;i++){
 //                           brick_y_rightdown1[i]=new brick(1,desktopHight,desktopWidth);
 //                           brick_y_rightdown1[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*2),y2_rightdown);
 //                           y2_rightdown-=desktopHight/15;
 //                           scene->addItem(brick_y_rightdown1[i]);
 //                           }

 //                               brick * brick_y_rightdown2[number_y_leftbrick];
 //                               int y3_rightdown =desktopHight-(((desktopHight/15)*2)-5);
 //                               for(int i=0;i<number_y_leftbrick;i++){
 //                               brick_y_rightdown2[i]=new brick(1,desktopHight,desktopWidth);
 //                               brick_y_rightdown2[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*3),y3_rightdown);
 //                               y3_rightdown-=desktopHight/15;
 //                               scene->addItem(brick_y_rightdown2[i]);

 //                           }

 //                                   brick * brick_y_rightdown3[number_y_leftbrick];
 //                                   int y4_rightdown =desktopHight-(((desktopHight/15)*2)-5);
 //                                   for(int i=0;i<number_y_leftbrick;i++){
 //                                   brick_y_rightdown3[i]=new brick(1,desktopHight,desktopWidth);
 //                                   brick_y_rightdown3[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*4),y4_rightdown);
 //                                   y4_rightdown-=desktopHight/15;
 //                                   scene->addItem(brick_y_rightdown3[i]);

 //                           }

 //                    //////right up

 //                               brick * brick_y_right1[number_y_leftbrick];
 //                               int y2_right =desktopHight/15;
 //                               for(int i=0;i<number_y_leftbrick;i++){
 //                               brick_y_right1[i]=new brick(1,desktopHight,desktopWidth);
 //                               brick_y_right1[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*2),y2_right);
 //                               y2_right+=desktopHight/15;
 //                               scene->addItem(brick_y_right1[i]);
 //                               }

 //                                   brick * brick_y_right2[number_y_leftbrick];
 //                                   int y3_right =desktopHight/15;
 //                                   for(int i=0;i<number_y_leftbrick;i++){
 //                                   brick_y_right2[i]=new brick(1,desktopHight,desktopWidth);
 //                                   brick_y_right2[i]->setpos_(desktopWidth-( (desktopWidth/20.7)*3),y3_right);
 //                                   y3_right+=desktopHight/15;
 //                                   scene->addItem(brick_y_right2[i]);

 //                               }

 //                                       brick * brick_y_right3[number_y_leftbrick];
 //                                       int y4_right =desktopHight/15;
 //                                       for(int i=0;i<number_y_leftbrick;i++){
 //                                       brick_y_right3[i]=new brick(1,desktopHight,desktopWidth);
 //                                       brick_y_right3[i]->setpos_(desktopWidth- ((desktopWidth/20.7)*4),y4_right);
 //                                       y4_right+=desktopHight/15;
 //                                       scene->addItem(brick_y_right3[i]);

 //                               }
 //                    /////betveen up
 //                               int y_b_up =desktopHight/15;
 //                               int x_brickb=(desktopWidth/2)-(4*(desktopWidth/20.6));
 //                               brick * y_brick_b[7];
 //                               for(int i=0;i<7;i++){
 //                               y_brick_b[i]=new brick(1,desktopHight,desktopWidth);
 //                               y_brick_b[i]->setpos_(x_brickb,y_b_up);
 //                               x_brickb+=(desktopWidth/20.6);
 //                               scene->addItem(y_brick_b[i]);
 //                               }

 //                               ///1/3 up

 //                               int y4_brick =(desktopHight/15)*3.5;
 //                               int x4_brickb=(desktopWidth/3)-(desktopWidth/20.6);
 //                               brick * up_brick_b[33];
 //                               for(int i=0;i<18;i++){
 //                               up_brick_b[i]=new brick(1,desktopHight,desktopWidth);

 //                               up_brick_b[i]->setpos_(x4_brickb,y4_brick);
 //                                scene->addItem(up_brick_b[i]);
 //                                 x4_brickb+=(desktopWidth/20.6);
 //                               if(i==2){
 //                                   x4_brickb+=2*(desktopWidth/20.6);
 //                               }
 //                               if(i==5){
 //                                 x4_brickb= (desktopWidth/3)-(desktopWidth/20.6);
 //                                  y4_brick+=desktopHight/15;
 //                               }
 //                               if(i==8){
 //                                   x4_brickb+=2*(desktopWidth/20.6);
 //                               }

 //                               if(i==11){
 //                                   x4_brickb= (desktopWidth/3)-(desktopWidth/20.6);
 //                                    y4_brick+=desktopHight/15;

 //                               }
 //                               if(i==14){
 //                                    x4_brickb+=2*(desktopWidth/20.6);
 //                               }
 //                               }
 //                      //////betveen down
 //                               int y_b_down =desktopHight/15;
 //                               int x2_brickb=(desktopWidth/2)-(4*(desktopWidth/20.6));
 //                               brick * y2_brick_b[40];
 //                               for(int i=0;i<7;i++){
 //                               y2_brick_b[i]=new brick(1,desktopHight,desktopWidth);
 //                               y2_brick_b[i]->setpos_(x2_brickb,desktopHight-y_b_down*2);
 //                               x2_brickb+=(desktopWidth/20.6);
 //                               scene->addItem(y2_brick_b[i]);

 //                               }
 //                               //////1/3 down
 //                           int x3_brickb=(desktopWidth/3)-(desktopWidth/20.6);
 //                           int y3_brickb=desktopHight-y_b_down*5;
 //                           for(int i=7;i<25;i++){
 //                           y2_brick_b[i]=new brick(1,desktopHight,desktopWidth);
 //                           y2_brick_b[i]->setpos_(x3_brickb,y3_brickb);
 //                           x3_brickb+=(desktopWidth/20.6);
 //                           scene->addItem(y2_brick_b[i]);
 //                           if(i==9){
 //                             x3_brickb+=2*(desktopWidth/20.6);
 //                           }
 //                           if(i==12){
 //                              x3_brickb=(desktopWidth/3)-(desktopWidth/20.6) ;
 //                              y3_brickb=y3_brickb-y_b_down;
 //                           }
 //                           if(i==15){
 //                              x3_brickb+=2*(desktopWidth/20.6);
 //                           }
 //                           if(i==18){
 //                               x3_brickb=(desktopWidth/3)-(desktopWidth/20.6) ;
 //                               y3_brickb=y3_brickb-(y_b_down);
 //                           }
 //                           if(i==21){
 //                               x3_brickb+=2*(desktopWidth/20.6);
 //                           }
 //                           }
  //}




//*******************thread1***********************
    QThread mykey;
           thread1 myk;
           myk.dowork(mykey);
           myk.moveToThread(&mykey);
           mykey.start(QThread::LowestPriority);
//********************addkey************************
 key *KEY[20];
 KEY[1]=new key();
 KEY[1]->setpos_(w+4,desktopHight/1.75);
 scene->addItem(KEY[1]);


 KEY[2]=new key();
 KEY[2]->setpos_(w+4,desktopHight/3);
 scene->addItem(KEY[2]);

 KEY[3]=new key();
 KEY[3]->setpos_(desktopWidth-(w*2),desktopHight/1.75);
 scene->addItem(KEY[3]);

 KEY[4]=new key();
 KEY[4]->setpos_(desktopWidth-(w*2),desktopHight/3);
 scene->addItem(KEY[4]);

 KEY[5]=new key();
 KEY[5]->setpos_(desktopWidth/3,2.5*h);
 scene->addItem(KEY[5]);

 KEY[6]=new key();
 KEY[6]->setpos_(desktopWidth/1.7,2.5*h);
 scene->addItem(KEY[6]);

 KEY[7]=new key();
 KEY[7]->setpos_(desktopWidth/2.2,4*h);
 scene->addItem(KEY[7]);

 KEY[8]=new key();
 KEY[8]->setpos_(desktopWidth/2.2,6.7*h);
 scene->addItem(KEY[8]);

 KEY[9]=new key();
 KEY[9]->setpos_(desktopWidth/2.2,10*h);
 scene->addItem(KEY[9]);

 KEY[10]=new key();
 KEY[10]->setpos_(desktopWidth/1.7,6.7*h);
 scene->addItem(KEY[10]);

 KEY[11]=new key();
 KEY[11]->setpos_(desktopWidth/3,6.7*h);
 scene->addItem(KEY[11]);

 KEY[12]=new key();
 KEY[12]->setpos_(desktopWidth/3,12*h);
 scene->addItem(KEY[12]);

 KEY[13]=new key();
 KEY[13]->setpos_(desktopWidth/1.7,12*h);
 scene->addItem(KEY[13]);

 KEY[14]=new key();
 KEY[14]->setpos_(desktopWidth/6,6.7*h);
 scene->addItem(KEY[14]);

 KEY[15]=new key();
 KEY[15]->setpos_(desktopWidth/1.3,6.7*h);
 scene->addItem(KEY[15]);

 KEY[16]=new key();
 KEY[16]->setpos_(desktopWidth/4.3,1.8*h);
 scene->addItem(KEY[16]);

 KEY[17]=new key();
 KEY[17]->setpos_(desktopWidth/1.4,1.8*h);
 scene->addItem(KEY[17]);

 KEY[18]=new key();
 KEY[18]->setpos_(desktopWidth/1.4,12.5*h);
 scene->addItem(KEY[18]);

 KEY[19]=new key();
 KEY[19]->setpos_(desktopWidth/4.3,12.5*h);
 scene->addItem(KEY[19]);
  view->setScene(scene);
//*******************addplayer****************
  player11_->setFlag(QGraphicsItem::ItemIsFocusable);
  player11_->setFocus();
  scene->addItem(player11_);
  qDebug()<<"i am in player1 in background";


     player21_->setFlag(QGraphicsItem::ItemIsFocusable);
     player21_->setFocus();
     scene->addItem(player21_);

     if(player11_->emtiaz+player21_->emtiaz==19){
         mykey.exit(0);
         //mydes.exit(0);
         emit this->send_calculate1();
     }

  //***************adddestroyer1*****************

}

void Game::ricive_set_step2()
{

//**********************addbrick2**********************
       brick * brick_y[21];
          float y =0;
          for(int i=0;i<21;i++){
               brick_y[i]=new brick(2,desktopHight,desktopWidth);
               brick_y[i]->setpos_(0,y );
               y+=desktopHight/15;
               scene->addItem(brick_y[i]);

          }



          brick * brick_x[20];
          float x=0;
          for(int i=0;i<20;i++){
               brick_x[i]=new brick(2,desktopHight,desktopWidth);
                brick_x[i]->setpos_(x,0 );
               x+=desktopWidth/20;
                scene->addItem(brick_x[i]);
          }

          brick * brick_y_end[15];
          float y_end =0;
          for(int i=0;i<15;i++){
               brick_y_end[i]=new brick(2,desktopHight,desktopWidth);
               brick_y_end[i]->setpos_(desktopWidth-(desktopWidth/20),y_end);
               y_end+=desktopHight/15;
               scene->addItem(brick_y_end[i]);
          }


          brick * brick_x_end[20];
          float x_end=0;
          for(int i=0;i<20;i++){
               brick_x_end[i]=new brick(2,desktopHight,desktopWidth);
               brick_x_end[i]->setpos_(x_end,desktopHight-(desktopHight/15) );
               x_end+=desktopWidth/20;
                scene->addItem(brick_x_end[i]);
          }


       //***************************************************************************************************
          float x_midlle1=(desktopWidth/20)*2;//----------
          brick * brick_midlle1[8];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<8;i++){
              brick_midlle1[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle1+=desktopWidth/20;
             brick_midlle1[i]->setpos_(x_midlle1,desktopHight-(desktopHight/15)*3);
             scene->addItem(brick_midlle1[i]);
          }

        //*************************************************************************************************
          float x_midlle2=(desktopWidth/20)*12;//-----------
          brick * brick_midlle2[5];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<5;i++){
              brick_midlle2[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle2+=desktopWidth/20;
             brick_midlle2[i]->setpos_(x_midlle2,desktopHight-(desktopHight/15)*3);
             scene->addItem(brick_midlle2[i]);
          }

       //**************************************************************************************************
          float y_midlle3=desktopHight-(desktopHight/15)*4;
          brick * brick_midlle3[5];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<5;i++){
              brick_midlle3[i]=new brick(2,desktopHight,desktopWidth);
              y_midlle3-=desktopHight/20;
             brick_midlle3[i]->setpos_((desktopWidth/20)*4, y_midlle3);
             scene->addItem(brick_midlle3[i]);
          }
       //***************************************************************************************************
          float x_midlle4=(desktopWidth/20)*3;
          brick * brick_midlle4[5];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<5;i++){
              brick_midlle4[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle4+=desktopWidth/20;
             brick_midlle4[i]->setpos_(x_midlle4,desktopHight-(desktopHight/15)*8);
             scene->addItem(brick_midlle4[i]);
          }
       //***************************************************************************************************

          float y_midlle5=desktopHight-(desktopHight/15)*4;
          brick * brick_midlle5[9];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<9;i++){
              brick_midlle5[i]=new brick(2,desktopHight,desktopWidth);
              y_midlle5-=desktopHight/20;
             brick_midlle5[i]->setpos_((desktopWidth/20)*1.75, y_midlle5);
             scene->addItem(brick_midlle5[i]);
          }
       //*****************************************************************************************************


          float y_midlle6=desktopHight-(desktopHight/15)*9;
          float x_midlle6=(desktopWidth/20)*2.5;
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

          float x_midlle7=(desktopWidth/20)*4.75;
          brick * brick_midlle7[8];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<8;i++){
              brick_midlle7[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle7+=desktopWidth/20;
             brick_midlle7[i]->setpos_(x_midlle7,desktopHight-(desktopHight/15)*5);
             scene->addItem(brick_midlle7[i]);
          }
       //****************************************************************************************************


          float y_midlle8=desktopHight-(desktopHight/15)*5.25;
          float x_midlle8=(desktopWidth/20)*9;
          brick * brick_midlle8[8];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<2;i++){
              y_midlle8=desktopHight-(desktopHight/15)*5.25;
              x_midlle8+=desktopWidth/20;
              for(int j=0;j<4;j++){
                 brick_midlle8[i]=new brick(2,desktopHight,desktopWidth);
                 y_midlle8-=desktopHight/20;
                 brick_midlle8[i]->setpos_(x_midlle8, y_midlle8);
                 scene->addItem(brick_midlle8[i]);
              }
          }
       //****************************************************************************************************
         float y_midlle9=desktopHight-(desktopHight/15)*11.75;
          float x_midlle9=(desktopWidth/20)*13;
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
          float x_midlle10=(desktopWidth/20)*2;
          brick * brick_midlle10[10];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<10;i++){
              brick_midlle10[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle10+=desktopWidth/20;
             brick_midlle10[i]->setpos_(x_midlle10,desktopHight-(desktopHight/15)*13);
             scene->addItem(brick_midlle10[i]);
          }
       //***************************************************************************************************

          float y_midlle11=desktopHight-(desktopHight/15)*4;
          float x_midlle11=(desktopWidth/20)*15.25;
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
          float x_midlle12=(desktopWidth/20)*6.5;
          brick * brick_midlle12[6];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<6;i++){
              brick_midlle12[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle12+=desktopWidth/20;
             brick_midlle12[i]->setpos_(x_midlle12,desktopHight-(desktopHight/15)*11);
             scene->addItem(brick_midlle12[i]);
          }
       //*************************************************************************************************

          float y_midlle13=desktopHight-(desktopHight/15)*4;
          brick * brick_midlle13[9];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<9;i++){
              brick_midlle13[i]=new brick(2,desktopHight,desktopWidth);
              y_midlle13-=desktopHight/20;
             brick_midlle13[i]->setpos_((desktopWidth/20)*14.5, y_midlle13);
             scene->addItem(brick_midlle13[i]);
          }
       //************************************************************************************************

          float x_midlle14=(desktopWidth/20)*14.5;
          brick * brick_midlle14[3];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<3;i++){
              brick_midlle14[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle14+=desktopWidth/20;
             brick_midlle14[i]->setpos_(x_midlle14,desktopHight-(desktopHight/15)*7.5);
             scene->addItem(brick_midlle14[i]);
          }
       //************************************************************************************************
          float x_midlle15=(desktopWidth/20)*14.5;
          brick * brick_midlle15[3];//=new brick(2,desktopHight,desktopWidth);
          for(int i=0;i<3;i++){
              brick_midlle15[i]=new brick(2,desktopHight,desktopWidth);
              x_midlle15+=desktopWidth/20;
             brick_midlle15[i]->setpos_(x_midlle15,desktopHight-(desktopHight/15)*9.5);
             scene->addItem(brick_midlle15[i]);
          }

//******************addkey2************************************
          QThread mykey;
                 thread1 myk;
                 myk.dowork(mykey);
                 myk.moveToThread(&mykey);
                 mykey.start(QThread::LowestPriority);
             key *KEY[22];
               KEY[1]=new key();
               KEY[1]->setpos_((desktopWidth/20)*2.75,desktopHight-(desktopHight/15)*10);
              scene->addItem(KEY[1]);


             KEY[2]=new key();
              KEY[2]->setpos_((desktopWidth/20)*6.5,desktopHight-(desktopHight/15)*11);
              scene->addItem(KEY[2]);

              KEY[3]=new key();
              KEY[3]->setpos_((desktopWidth/20)*5,desktopHight-(desktopHight/15)*14);
              scene->addItem(KEY[3]);

              KEY[4]=new key();
              KEY[4]->setpos_((desktopWidth/20)*7,desktopHight-(desktopHight/15)*6.5);
              scene->addItem(KEY[4]);

              KEY[5]=new key();
              KEY[5]->setpos_((desktopWidth/20)*9,desktopHight-(desktopHight/15)*4);
              scene->addItem(KEY[5]);

              KEY[6]=new key();
              KEY[6]->setpos_((desktopWidth/20)*11.5,desktopHight-(desktopHight/15)*3);
              scene->addItem(KEY[6]);

              KEY[7]=new key();
              KEY[7]->setpos_((desktopWidth/20)*3,desktopHight-(desktopHight/15)*5);
              scene->addItem(KEY[7]);

              KEY[8]=new key();
              KEY[8]->setpos_((desktopWidth/20)*2,desktopHight-(desktopHight/15)*3);
              scene->addItem(KEY[8]);

              KEY[9]=new key();
              KEY[9]->setpos_((desktopWidth/20)*9,desktopHight-(desktopHight/15)*2);
              scene->addItem(KEY[9]);

              KEY[10]=new key();
              KEY[10]->setpos_((desktopWidth/20)*11,desktopHight-(desktopHight/15)*9.5);
              scene->addItem(KEY[10]);

             KEY[11]=new key();
              KEY[11]->setpos_((desktopWidth/20)*12.5,desktopHight-(desktopHight/15)*7);
              scene->addItem(KEY[11]);

             KEY[12]=new key();
              KEY[12]->setpos_((desktopWidth/20)*15.5,desktopHight-(desktopHight/15)*5);
              scene->addItem(KEY[12]);

              KEY[13]=new key();
              KEY[13]->setpos_((desktopWidth/20)*16.75,desktopHight-(desktopHight/15)*11);
              scene->addItem(KEY[13]);

             KEY[14]=new key();
              KEY[14]->setpos_((desktopWidth/20)*16.75,desktopHight-(desktopHight/15)*6.5);
              scene->addItem(KEY[14]);

              KEY[15]=new key();
              KEY[15]->setpos_((desktopWidth/20)*16.75,desktopHight-(desktopHight/15)*8.5);
              scene->addItem(KEY[15]);

              KEY[16]=new key();
              KEY[16]->setpos_((desktopWidth/20)*16.75,desktopHight-(desktopHight/15)*9.5);
              scene->addItem(KEY[16]);

             /* KEY[17]=new key();
              KEY[17]->setpos_((desktopWidth/20)*11,desktopHight-(desktopHight/15)*9.5);
              scene->addItem(KEY[17]);*/

              KEY[18]=new key();
              KEY[18]->setpos_(100,50);
              scene->addItem(KEY[18]);

              KEY[19]=new key();
              KEY[19]->setpos_(800,50);
              scene->addItem(KEY[19]);

              KEY[20]=new key();
              KEY[20]->setpos_(500,300);
              scene->addItem(KEY[20]);

              KEY[21]=new key();
              KEY[21]->setpos_(1100,50);
              scene->addItem(KEY[21]);
//*********************adddestroyer2****************************
              QThread mydes;
              thread2 myd;
              myd.dowork(mydes);
              myd.moveToThread(&mydes);
              mydes.start(QThread::HighestPriority);
              horizontaldestroyer1 * destroyer1=new horizontaldestroyer1(2,2*(desktopWidth/20),desktopHight-(2*(desktopHight/15)));
                scene->addItem(destroyer1);

                verticaldestroyer1 * destroyer2=new verticaldestroyer1(2,(desktopWidth/2)+3*(desktopWidth/20),(1*(desktopHight/15)));
                 scene->addItem(destroyer2);

                 horizontaldestroyer1 * destroyer3=new horizontaldestroyer1(2,5*(desktopWidth/20),desktopHight-(4*(desktopHight/15)));
                 scene->addItem(destroyer3);

                  verticaldestroyer1 * destroyer4=new verticaldestroyer1(2,desktopWidth-2*(desktopWidth/20),(1*(desktopHight/15)));
                   scene->addItem(destroyer4);

                   horizontaldestroyer1 * destroyer5=new horizontaldestroyer1(2,5*(desktopWidth/20),desktopHight-(4*(desktopHight/15)));
                   scene->addItem(destroyer3);

                    verticaldestroyer1 * destroyer6=new verticaldestroyer1(2,1*(desktopWidth/20),(1*(desktopHight/15)));
                     scene->addItem(destroyer6);

                     //*********************addplayer2***********************
                            player12_->setFlag(QGraphicsItem::ItemIsFocusable);
                            player12_->setFocus();
                            scene->addItem(player12_);


                               player22_->setFlag(QGraphicsItem::ItemIsFocusable);
                               player22_->setFocus();
                               scene->addItem(player22_);
                               if(player12_->emtiaz+player22_->emtiaz==22){
                                   mykey.exit(0);
                                   mydes.exit(0);
                                  emit this->send_calculate2();
                               }
}

void Game::ricive_set_step3()
{

    QDesktopWidget desktop;
    int desktopHight=desktop.geometry().height();
    int desktopWidth=desktop.geometry().width();
    scene->setSceneRect(0,0,desktopWidth,desktopHight);
    QImage background3(":/image/background2.png");

    scene->setBackgroundBrush(background3.scaled(desktopWidth,desktopHight));
//***************************addbrick3**********************************
    {
    brick* rowbrick[20];
       int x=0;
       for(int i=0;i<20;i++){
           rowbrick[i]=new brick(3,desktopHight,desktopWidth);
           rowbrick[i]->setPos(x,0);
           x=x+(desktopWidth/20);
           scene->addItem(rowbrick[i]);
       }
       brick* colbrick[15];
       int y=0;
       for(int i=0;i<15;i++){
           colbrick[i]=new brick(3,desktopHight,desktopWidth);
           colbrick[i]->setPos(0,y);
           y=y+(desktopHight/15);
           scene->addItem(colbrick[i]);
       }
       brick* rowbrick1[20];
       x=0;
       for(int i=0;i<20;i++){
           rowbrick1[i]=new brick(3,desktopHight,desktopWidth);
           rowbrick1[i]->setPos(x,(desktopHight)-(desktopHight/15));
           x=x+(desktopWidth/20);
           scene->addItem(rowbrick1[i]);
       }
       brick* colbrick1[15];
       y=0;
       for(int i=0;i<15;i++){
           colbrick1[i]=new brick(3,desktopHight,desktopWidth);
           colbrick1[i]->setPos((desktopWidth)-(desktopWidth/20),y);
           y=y+(desktopHight/15);
           scene->addItem(colbrick1[i]);
       }

      //****************************************
       brick* colbrick2[15];
       y=0;
       for(int i=0;i<15;i++){
           colbrick2[i]=new brick(3,desktopHight,desktopWidth);
           colbrick2[i]->setPos((desktopWidth)/2,y);
           y=y+(desktopHight/15);
           scene->addItem(colbrick2[i]);
       }
       //**************************************
       brick* colbrick3[7];
       y=0;
       int y0=4*(desktopHight/15);
       for(int i=0;i<7;i++){
           colbrick3[i]=new brick(3,desktopHight,desktopWidth);
           colbrick3[i]->setPos((desktopWidth)/4,y+y0);
           y=y+(desktopHight/15);
           scene->addItem(colbrick3[i]);
       }
       //***************************************
       brick* rowbrick2[5];
           x=0;
           int x0=((desktopWidth)/4)-(2*(desktopWidth)/20);
           for(int i=0;i<5;i++){
               rowbrick2[i]=new brick(3,desktopHight,desktopWidth);
               rowbrick2[i]->setPos(x+x0,3*(desktopHight/15));
               x=x+(desktopWidth/20);
               scene->addItem(rowbrick2[i]);
           }
       //*****************************************
           brick* rowbrick3[5];
                       x=0;
                       for(int i=0;i<5;i++){
                           rowbrick3[i]=new brick(3,desktopHight,desktopWidth);
                           rowbrick3[i]->setPos(x+x0,11*(desktopHight/15));
                           x=x+(desktopWidth/20);
                           scene->addItem(rowbrick3[i]);
                       }
        //*****************************************
           brick* rowbrick4[5];
           x=0;

           for(int i=0;i<5;i++){
               rowbrick4[i]=new brick(3,desktopHight,desktopWidth);
               rowbrick4[i]->setPos(x+x0,2*(desktopHight/15));
               x=x+(desktopWidth/20);
               scene->addItem(rowbrick4[i]);
           }
         //******************************************
           brick* rowbrick5[5];
           x=0;

           for(int i=0;i<5;i++){
               rowbrick5[i]=new brick(3,desktopHight,desktopWidth);
               rowbrick5[i]->setPos(x+x0,12*(desktopHight/15));
               x=x+(desktopWidth/20);
               scene->addItem(rowbrick5[i]);
           }
           //*****************************************
           brick* colbrick4[7];
           y=0;
           for(int i=0;i<7;i++){
               colbrick4[i]=new brick(3,desktopHight,desktopWidth);
               colbrick4[i]->setPos(((desktopWidth)/2)+3*(desktopWidth/20),y+y0);
               y=y+(desktopHight/15);
               scene->addItem(colbrick4[i]);
           }
           //******************************************
           brick* colbrick5[7];
           y=0;
           for(int i=0;i<7;i++){
               colbrick5[i]=new brick(3,desktopHight,desktopWidth);
               colbrick5[i]->setPos(((desktopWidth)/2)+6*(desktopWidth/20),y+y0);
               y=y+(desktopHight/15);
               scene->addItem(colbrick5[i]);
           }
           //*****************************************
           brick* rowbrick6[6];
           x=0;
           int x1=(desktopWidth/2)+2*(desktopWidth/20);
           for(int i=0;i<6;i++){
               rowbrick6[i]=new brick(3,desktopHight,desktopWidth);
               rowbrick6[i]->setPos(x+x1,11*(desktopHight/15));
               x=x+(desktopWidth/20);
               scene->addItem(rowbrick6[i]);
           }
           //*******************************************
           brick* rowbrick7[6];
           x=0;
           for(int i=0;i<6;i++){
               rowbrick7[i]=new brick(3,desktopHight,desktopWidth);
               rowbrick7[i]->setPos(x+x1,12*(desktopHight/15));
               x=x+(desktopWidth/20);
               scene->addItem(rowbrick7[i]);
           }
           //*********************************************
           brick* rowbrick8[6];
           x=0;
           for(int i=0;i<6;i++){
               rowbrick8[i]=new brick(3,desktopHight,desktopWidth);
               rowbrick8[i]->setPos(x+x1,2*(desktopHight/15));
               x=x+(desktopWidth/20);
               scene->addItem(rowbrick8[i]);
           }
           //***********************************************
           brick* rowbrick9[6];
           x=0;
           for(int i=0;i<6;i++){
               rowbrick9[i]=new brick(3,desktopHight,desktopWidth);
               rowbrick9[i]->setPos(x+x1,3*(desktopHight/15));
               x=x+(desktopWidth/20);
               scene->addItem(rowbrick9[i]);
           }
           //**************************************************
           bridge* bridge1=new bridge(desktopHight,desktopWidth);
           bridge1->setPos((desktopWidth)/2,7*((desktopHight)/15));
           scene->addItem(bridge1);
           //****************************************************
           bridge* bridge2=new bridge(desktopHight,desktopWidth);
           bridge2->setPos((3*(desktopWidth/4))-(0.5*(desktopWidth/20)),12*((desktopHight)/15));
           scene->addItem(bridge2);
           //*******************************************************
           bridge* bridge3=new bridge(desktopHight,desktopWidth);
           bridge3->setPos((3*(desktopWidth/4))-(0.5*(desktopWidth/20)),11*((desktopHight)/15));
           scene->addItem(bridge3);
}

//*****************addkey3********************************

   QThread mykey;
   thread1 myk;
   myk.dowork(mykey);
   myk.moveToThread(&mykey);
   mykey.start(QThread::LowestPriority);

    key *KEY[69];
    int y=0;
    int y0=(desktopHight/12);
    for(int i=13;i<20;i++){
        KEY[i]=new key();
        KEY[i]->setpos_(2*(desktopWidth/20),y0+y);
        y+=2*(desktopHight/15);
       scene->addItem(KEY[i]);
    }
    y=0;
    y0=4*(desktopHight/14);
    for(int i=20;i<24;i++){
        KEY[i]=new key();
        KEY[i]->setpos_(3*(desktopWidth/20),y0+y);
        y+=2*(desktopHight/15);
       scene->addItem(KEY[i]);
    }
    y=0;
    y0=4*(desktopHight/14);
    for(int i=24;i<28;i++){
        KEY[i]=new key();
        KEY[i]->setpos_(4*(desktopWidth/20),y0+y);
        y+=2*(desktopHight/15);
       scene->addItem(KEY[i]);
    }
    y=0;
    y0=4*(desktopHight/14);
    for(int i=28;i<32;i++){
        KEY[i]=new key();
        KEY[i]->setpos_(6*(desktopWidth/20),y0+y);
        y+=2*(desktopHight/15);
       scene->addItem(KEY[i]);
    }
    y=0;
    y0=4*(desktopHight/14);
    for(int i=32;i<36;i++){
        KEY[i]=new key();
        KEY[i]->setpos_(7*(desktopWidth/20),y0+y);
        y+=2*(desktopHight/15);
       scene->addItem(KEY[i]);
    }
    y=0;
    y0=(desktopHight/12);
   for(int i=0;i<7;i++){//7 to 13
       KEY[i]=new key();
       KEY[i]->setpos_(8*(desktopWidth/20),y0+y);
       y+=2*(desktopHight/15);
      scene->addItem(KEY[i]);
   }
   y=0;
   y0=(desktopHight/12);
   for(int i=36;i<43;i++){
       KEY[i]=new key();
       KEY[i]->setpos_((desktopWidth/2)+(desktopWidth/20),y0+y);
       y+=2*(desktopHight/15);
      scene->addItem(KEY[i]);
   }
   y=0;
   y0=4*(desktopHight/14);
   for(int i=43;i<47;i++){
       KEY[i]=new key();
       KEY[i]->setpos_((desktopWidth/2)+2*(desktopWidth/20),y0+y);
       y+=2*(desktopHight/15);
      scene->addItem(KEY[i]);
   }
   y=0;
   y0=4*(desktopHight/14);
   for(int i=47;i<51;i++){
       KEY[i]=new key();
       KEY[i]->setpos_((desktopWidth/2)+4*(desktopWidth/20),y0+y);
       y+=2*(desktopHight/15);
      scene->addItem(KEY[i]);
   }
   y=0;
   y0=4*(desktopHight/14);
   for(int i=51;i<55;i++){
       KEY[i]=new key();
       KEY[i]->setpos_((desktopWidth/2)+5*(desktopWidth/20),y0+y);
       y+=2*(desktopHight/15);
      scene->addItem(KEY[i]);
   }
   y=0;
   y0=4*(desktopHight/14);
   for(int i=55;i<59;i++){
       KEY[i]=new key();
       KEY[i]->setpos_((desktopWidth/2)+7*(desktopWidth/20),y0+y);
       y+=2*(desktopHight/15);
      scene->addItem(KEY[i]);
   }
   y=0;
   y0=(desktopHight/12);
   for(int i=59;i<66;i++){
       KEY[i]=new key();
       KEY[i]->setpos_((desktopWidth)-2*(desktopWidth/20),y0+y);
       y+=2*(desktopHight/15);
      scene->addItem(KEY[i]);
   }
   int x=0;
   int x0=4*(desktopWidth/20);
   for(int i=7;i<9;i++){
       KEY[i]=new key();
       KEY[i]->setpos_(x+x0,(desktopHight/12));
       x+=2*(desktopWidth/20);
      scene->addItem(KEY[i]);
   }
   x=0;
   x0=4*(desktopWidth/20);
   for(int i=9;i<11;i++){
       KEY[i]=new key();
       KEY[i]->setpos_(x+x0,desktopHight-(desktopHight/8));
       x+=2*(desktopWidth/20);
      scene->addItem(KEY[i]);
   }
   x=0;
   x0=(desktopWidth/2)+3*(desktopWidth/20);
   for(int i=11;i<13;i++){
       KEY[i]=new key();
       KEY[i]->setpos_(x+x0,desktopHight-(desktopHight/8));
       x+=3*(desktopWidth/20);
      scene->addItem(KEY[i]);
   }
   x=0;
   x0=(desktopWidth/2)+2.5*(desktopWidth/20);
   for(int i=66;i<69;i++){
       KEY[i]=new key();
       KEY[i]->setpos_(x+x0,(desktopHight/12));
       x+=2*(desktopWidth/20);
      scene->addItem(KEY[i]);
   }

//*********************adddestroyer3**********************************
      QThread mydes;
      thread2 myd;
      myd.dowork(mydes);
      myd.moveToThread(&mydes);
      mydes.start(QThread::HighestPriority);
      horizontaldestroyer1 * destroyer1=new horizontaldestroyer1(2,2*(desktopWidth/20),desktopHight-(2*(desktopHight/15)));
       scene->addItem(destroyer1);
       verticaldestroyer1 * destroyer2=new verticaldestroyer1(2,(desktopWidth/2)+(desktopWidth/20),(1*(desktopHight/15)));
        scene->addItem(destroyer2);
        verticaldestroyer1 * destroyer3=new verticaldestroyer1(2,(desktopWidth/20),(1*(desktopHight/15)));
         scene->addItem(destroyer3);
         horizontaldestroyer1 * destroyer4=new horizontaldestroyer1(2,1*(desktopWidth/20),(1*(desktopHight/15)));
          scene->addItem(destroyer4);


          //*****************addplayer3************************
          player13_->setFlag(QGraphicsItem::ItemIsFocusable);
              player13_->setFocus();
              scene->addItem(player13_);


                 player23_->setFlag(QGraphicsItem::ItemIsFocusable);
                 player23_->setFocus();
                 scene->addItem(player23_);
                 if(player13_->emtiaz+player23_->emtiaz==69){
                     mykey.exit(0);
                     mydes.exit(0);
                     emit this->send_calculate3();
                 }





           view->setScene(scene);
}
void Game::ricive_set_step4()
{
}

void Game::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Escape){


        QDesktopWidget desktop;
        int desktopHight=desktop.geometry().height();
        int desktopWidth=desktop.geometry().width();
         qDebug()<<"i am startpage";
        scene->setSceneRect(0,0,desktopWidth,desktopHight);
        QImage background2(":/image/background2.png");
        scene->setBackgroundBrush(background2.scaled(desktopWidth,desktopHigh);

      view->setScene(scene);


    }
}









