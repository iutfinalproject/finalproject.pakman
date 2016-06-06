#ifndef KEY_H
#define KEY_H

#include <QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
#include<QTimer>
#include<QMovie>
class key : public  QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit key(int,QGraphicsPixmapItem *parent = 0);
     void setpos_(int,int);

signals:

public slots:
     void rotate_img();
private:
     QTimer *key_timer;
     QPixmap*key_img1;
     QPixmap*key_img2;
     QPixmap*key_img3;
     QPixmap*key_img4;
     QPixmap*key_img5;
     QPixmap*key_img6;

     int flag;

};

#endif // KEY_H
