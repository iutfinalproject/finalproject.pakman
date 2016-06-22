#ifndef SELECTION_KEY_H
#define SELECTION_KEY_H
#include <QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
#include<QTimer>
#include<QMovie>
#include<QMouseEvent>

class selection_key : public  QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit selection_key(int ,int,int,QGraphicsPixmapItem *parent = 0);
    char* getimgaddress(){return return_img;}



signals:

public slots:
     void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    int id;
    char* img_address;
    char*return_img;
     QPixmap*key_img;


};
#endif // SELECTION_KEY_H
