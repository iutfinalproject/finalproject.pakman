#ifndef CREATURE_H
#define CREATURE_H
#include<QObject>
#include<QGraphicsPixmapItem>
class creature:public QObject ,public QGraphicsPixmapItem{

public:
    explicit creature(QGraphicsPixmapItem *parent);
private:
    int x;
    int y;
public slots:



};
#endif // CREATURE_H
