#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QObject>
#include <QGraphicsScene>


class background : public QObject
{
    Q_OBJECT
public:
    explicit background(int &,QObject *parent = 0, QGraphicsScene *nowscene=0, int nowid=0);
      void addbrick();
      void addkey();
      void adddestroyer();
      void addtreasure();
      void addscore();
      void addHealth();
      void page_of_start();
      void addplayer();
      char*getplayeraddress(){return player_address;}
      void middle_page(int );

  private:
      QGraphicsScene* scene;
      int id;
      int desktopHight;
      int desktopWidth;
      char*player_address;
      int &select_page;
};

#endif // BACKGROUND_H
