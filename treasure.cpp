#include"treasure.h"
#include<QObject>
treasure::treasure(QGraphicsPixmapItem *parent):QObject(),QGraphicsPixmapItem(parent)
{
    vec.push_back(QPair<int,int>(205,100));
     vec.push_back(QPair<int,int>(0,200));
      vec.push_back(QPair<int,int>(300,270));
       vec.push_back(QPair<int,int>(405,355));
        vec.push_back(QPair<int,int>(525,510));
        vec.push_back(QPair<int,int>(950,130));
         vec.push_back(QPair<int,int>(985,490));
          vec.push_back(QPair<int,int>(540,715));
           vec.push_back(QPair<int,int>(890,610));
            vec.push_back(QPair<int,int>(610,0));

        flag=0;

     treasure_img1=new QPixmap("://image/treasure1");
     treasure_img2=new QPixmap("://image/treasure2");
     treasure_img3=new QPixmap("://image/treasure3");
     treasure_img4=new QPixmap("://image/treasure4");

     treasure_img5=new QPixmap("://image/treasure5");

     treasure_img6=new QPixmap("://image/treasure6");
     treasure_img7=new QPixmap("://image/treasure7");
     treasure_img8=new QPixmap("://image/treasure8");

     QDesktopWidget desktop;
     int desktopHight=desktop.geometry().height();
     int desktopWidth=desktop.geometry().width();

      * treasure_img1= treasure_img1->scaled(desktopWidth/20,desktopHight/15);
     * treasure_img2= treasure_img2->scaled(desktopWidth/20,desktopHight/15);

     * treasure_img3= treasure_img3->scaled(desktopWidth/20,desktopHight/15);
     * treasure_img4= treasure_img4->scaled(desktopWidth/20,desktopHight/15);
     * treasure_img5= treasure_img5->scaled(desktopWidth/20,desktopHight/15);
     * treasure_img6= treasure_img6->scaled(desktopWidth/20,desktopHight/15);
     * treasure_img7= treasure_img7->scaled(desktopWidth/20,desktopHight/15);
     * treasure_img8= treasure_img8->scaled(desktopWidth/20,desktopHight/15);

      setPixmap(*treasure_img1);
     treasure_timer=new QTimer();
     treasure_timer->start(5000);


     connect(treasure_timer,SIGNAL(timeout()),this,SLOT(hiden_img()));


}


void treasure::hiden_img()
{



    this->setPos(vec[flag].first,vec[flag].second);
    flag++;
   if(flag==10)
        flag=0;
}

float treasure::rand01()
{
    return rand() / (float)RAND_MAX;
}





float treasure::randRange(float min, float max)
{

//natonestam behesh zamun bedam va error midad
    return  min + (max - min) *rand01();  //% 60; //(*(int*)(qsrand( QDateTime::currentDateTime().toTime_t() )))// QTime now = QTime::currentTime();   min + (max - min) * (qsrand(now.msec())); ;

}


void treasure::setpos_(int x, int y)
{
    this->setPos(x,y);
}
