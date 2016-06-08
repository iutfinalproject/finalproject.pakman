#ifndef TREASURE_H
#define TREASURE_H

#include <QObject>
#include<QGraphicsPixmapItem>
#include<QGraphicsItem>
#include<QTimer>
#include<QMovie>
#include<QPair>
#include<QVector>

#include<QDesktopWidget>

class treasure : public  QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit treasure(QGraphicsPixmapItem *parent = 0);
     void setpos_(int,int);
     float randRange(float,float);
     float rand01();

signals:

public slots:
     void hiden_img();
private:
     QTimer *treasure_timer;
     QPixmap *treasure_img1;
      QPixmap *treasure_img2;
       QPixmap *treasure_img3;
        QPixmap *treasure_img4;
         QPixmap *treasure_img5;
          QPixmap *treasure_img6;
           QPixmap *treasure_img7;
            QPixmap *treasure_img8;
    QVector<QPair<int,int> > vec;
    int flag;




};

#endif // TREASURE_H
