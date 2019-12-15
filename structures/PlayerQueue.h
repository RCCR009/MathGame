//
// Created by rolan on 14/12/2019.
//

#ifndef MATHGAME_PLAYERQUEUE_H
#define MATHGAME_PLAYERQUEUE_H

#include "NodePlayer.h"
#include "../tad/Player.h"

class PlayerQueue {
private:
    int longitude;
    NodePlayer * front;
    NodePlayer * end;
    void deleteElement(Player player);
public:
    PlayerQueue();
    void addElement(Player player);
    bool isEmpty();
    void deleteElementByIndex(int index);
    int getLongitude();
    NodePlayer * getFront();
    NodePlayer * getEnd();
    NodePlayer * serve();
};


#endif //MATHGAME_PLAYERQUEUE_H
