#ifndef STARTTEXT_H
#define STARTTEXT_H

#include<QGraphicsTextItem>
#include<QFont>
#include<QString>

class starttext:public QGraphicsTextItem
{
public:
    starttext(QString,char*,int,QGraphicsTextItem* parent=0);

private:

};

#endif // STARTTEXT_H
