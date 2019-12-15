//
// Created by rolan on 12/12/2019.
//

#ifndef MATHGAME_PLAYERCONTROLLER_H
#define MATHGAME_PLAYERCONTROLLER_H

#include "../structures/PlayerQueue.h"
#include "../tad/Player.h"

class PlayerController {
private:
    PlayerQueue *playerQueue;
public:
    PlayerController();
    PlayerQueue *getPlayerQueue();
};




#endif //MATHGAME_PLAYERCONTROLLER_H
