#ifndef THREAD1_H
#define THREAD1_H

#include <QObject>
#include<QGraphicsScene>
#include<QThread>
#include"key.h"
class thread1 : public QObject
{
    Q_OBJECT
public:
    explicit thread1(QObject *parent = 0);
    void dowork(QThread & cthread);


public slots:
     void addkey();


private:
  key mykey;

};

#endif // THREAD1_H
