#ifndef HUMAN_H
#define HUMAN_H
#include"creature.h"
#include"brick.h"
#include<QGraphicsItem>
#include<QKeyEvent>
#include<QTimer>
class human:public creature/*, public  QObject,public QGraphicsPixmapItem*/{
    Q_OBJECT
public:
    explicit human(QGraphicsPixmapItem *parent2=0);

private slots:
    void keyPressEvent(QKeyEvent *event);

  private:
    QPixmap* human_img1;

};
#endif // HUMAN_H
