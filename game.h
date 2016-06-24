#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include <QGraphicsView>
#include<QGraphicsScene>
#include<QDesktopWidget>
#include"player.h"
#include"key.h"
#include"brick.h"
#include"player_1.h"
#include"player_2.h"
#include"bridge.h"
#include<QDebug>
#include"treasure.h"
#include"verticaldestroyer1.h"
#include"horizontaldestroyer1.h"
#include"startpage.h"
#include"score.h"
#include"health.h"
#include"textofbutton.h"
#include"selection_key.h"
#include<QString>
class Game:public QObject {
    Q_OBJECT
public:
    Game(QWidget*parent=0);
   QGraphicsScene* scene;
    static QGraphicsView* view;
    void start_page();
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
    int desktopHight;
    int desktopWidth;
    char*player_address;
    player_1 *player11_;
    player_1 *player12_;
    player_1 *player13_;
    player_2 *player21_;
    player_2 *player22_;
    player_2 *player23_;
private:

public slots:
    void ricive_set_step1();
    void ricive_set_step2();
    void ricive_set_step3();
    void ricive_set_step4();
    void keyPressEvent(QKeyEvent *event);
signals:
     void send_calculate1();
     void send_calculate2();
     void send_calculate3();


};

#endif // GAME_H
