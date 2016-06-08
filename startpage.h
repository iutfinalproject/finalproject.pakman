#ifndef STARTPAGE_H
#define STARTPAGE_H
#include <QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
#include<QTimer>
#include<QMovie>
#include<QMouseEvent>
class startpage : public  QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit startpage(char*,QGraphicsPixmapItem *parent = 0);
    char* getimgaddress(){return return_img;}



signals:

public slots:
     void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    int id;
    char* img_address;
    char*return_img;
     QPixmap*startpage_img1;


};

#endif // STARTPAGE_H
