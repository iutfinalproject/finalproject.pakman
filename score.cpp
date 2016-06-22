
#include "score.h"



score::score(QGraphicsTextItem *parent):QGraphicsTextItem(parent)
{
    //intiliaze score to zero
    Score=0;

    //drow the text
    setPlainText(QString("Score: ")+QString::number(Score));//score: 0

    setDefaultTextColor(Qt::black);
    setFont(QFont("times",16));


}

void score::increase()
{
    Score++;
}

int &score::getscore()
{
    return Score;
}
