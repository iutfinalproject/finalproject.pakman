#ifndef ADDKEY2_H
#define ADDKEY2_H
#include"key.h"
#include<QDesktopWidget>
#include<QGraphicsScene>
void addkey2(QGraphicsScene* scene){
    key* key_scene[20];
    key_scene[1]=new key(2);
    key_scene[1]->setpos_(100,70);
    key_scene[1]->setRotation(-30);
    scene->addItem(key_scene[1]);

}
#endif // ADDKEY2_H
