#include "brick.h"
#include <QGraphicsScene>
brick1::brick1(QGraphicsPixmapItem *parent1):QObject(),QGraphicsPixmapItem(parent1)
{

    setPixmap(QPixmap("://image/brike1.jpg"));
}

void brick1::setpos_(int x, int y)
{
    this->setPos(x,y);

}

