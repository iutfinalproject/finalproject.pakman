#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QObject>
#include <QGraphicsScene>


class background : public QObject
{
    Q_OBJECT
public:
    explicit background(QObject *parent = 0, QGraphicsScene *nowscene=0, int nowid=0);
    void addbrick();
    void addkey();
    void adddestroyer();
private:
    QGraphicsScene* scene;
    int id;
    int desktopHight;
    int desktopWidth;

};

#endif // BACKGROUND_H
