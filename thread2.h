#ifndef THREAD2_H
#define THREAD2_H

#include <QObject>
#include<QGraphicsScene>
#include<QThread>
#include"horizontaldestroyer1.h"
#include"verticaldestroyer1.h"
class thread2 : public QObject
{
    Q_OBJECT
public:
    explicit thread2(QObject *parent = 0);
    void dowork(QThread & cthread);


public slots:
     void adddestroyer();


private:
verticaldestroyer1 vdes;
horizontaldestroyer1 hdes;


};

#endif // thread2_H
