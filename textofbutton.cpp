
#include "textofbutton.h"
#include<QDebug>
#include<QColor>

textofbutton::textofbutton(QString seect_color,char* text,int size,QGraphicsTextItem *parent):QGraphicsTextItem(parent)
{

    //drow the text
    setPlainText(QString(text));
    QColor color(seect_color);
    setDefaultTextColor(color);
    setFont(QFont("wenquanyi",size));



}

