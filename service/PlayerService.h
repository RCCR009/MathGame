//
// Created by Gary Valverde Hampton on 12/12/19.
//

#ifndef MATHGAME_PLAYERSERVICE_H
#define MATHGAME_PLAYERSERVICE_H


#include "../tad/Player.h"
#include "../structures/List.h"

class PlayerService {
private:
    List<Player*>* players;
public:
    PlayerService();

};


#endif //MATHGAME_PLAYERSERVICE_H
