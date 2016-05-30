#ifndef KEY_H
#define KEY_H

#include <QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
class key : public  QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit key(int,QGraphicsPixmapItem *parent = 0);
     void setpos_(int,int);
signals:
    
public slots:
private:
     QPixmap*key_img;
    
};

#endif // KEY_H
