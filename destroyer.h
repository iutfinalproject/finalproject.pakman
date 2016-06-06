#ifndef DESTROYER_H
#define DESTROYER_H

#include <QObject>
#include<QGraphicsPixmapItem>

class destroyer : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit destroyer(int,int, QGraphicsPixmapItem *parent=0);


public slots:
void move();


private:
    QPixmap * mydestroyer;
    int height;
    int width;
    int x;
    int y;
    int x0;
    int y0;

};

#endif // DESTROYER1_H

