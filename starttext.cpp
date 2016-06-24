
#include "starttext.h"
#include<QDebug>
#include<QColor>

starttext::starttext(QString seect_color,char* text,int size,QGraphicsTextItem *parent):QGraphicsTextItem(parent)
{

    //drow the text
    setPlainText(QString(text));
    //char*b=blue;
    QColor color(seect_color);
    setDefaultTextColor(color);
    setFont(QFont("wenquanyi",size));
    qDebug()<<"i am in starttext";



}

