#ifndef CREATURE_H
#define CREATURE_H
#include<QObject>
#include<QGraphicsPixmapItem>
#include<QList>
#include<TypeInfo>
class creature:public QObject ,public QGraphicsPixmapItem{

public:
    explicit creature(QGraphicsPixmapItem *parent);
    void accident();
protected:
    int x;
    int y;
    QGraphicsPixmapItem *creature_img;
public slots:



};
#endif // CREATURE_H
