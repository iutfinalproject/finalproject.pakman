
#include <QApplication>
#include <QGraphicsView>
#include<QGraphicsScene>
#include<QImage>
#include<QDesktopWidget>
#include"game.h"
    Game* game;
    int main(int argc, char *argv[])
    {
          QApplication a(argc, argv);
          game=new Game();
          int i=0;
          if(i==0){
           game->start_page();
              //game->ricive_set_step1();
              i++;
          }
          game->view->show();
          return  a.exec();
    }
