
#include "health.h"





Health::Health(QGraphicsTextItem *parent):QGraphicsTextItem(parent)
{
    //intiliaze Health to zero
    health=3;

    //drow the text
    setPlainText(QString("Health: ")+QString::number(health));//Health: 0

    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));


}

void Health::increase()
{
    health++;
}

void Health::decrease()
{
    health--;
}

int Health::getHealth()
{
    return health;
}
