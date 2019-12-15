//
// Created by rolan on 14/12/2019.
//

#ifndef MATHGAME_NODEPLAYER_H
#define MATHGAME_NODEPLAYER_H

#include "../tad/Player.h"

class NodePlayer {
private:
    Player data;
    NodePlayer* next;
public:
    NodePlayer(Player data);
    ~NodePlayer();
    NodePlayer * getNext();
    void setNext(NodePlayer* next);
    Player getData();
};

#endif //MATHGAME_NODEPLAYER_H