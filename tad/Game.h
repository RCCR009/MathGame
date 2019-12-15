//
// Created by rolan on 7/12/2019.
//

#ifndef MATHGAME_GAME_H
#define MATHGAME_GAME_H

#include "MathOperations.h"
#include "../structures/List.h"
#include "../controller/PlayerController.h"
#include "Record.h"

class Game {
private:
    List<MathOperations*> *mathOperations;
    PlayerController playerController;
public:
    Game(PlayerController playerController);
    List<Record*>* startGame();
};


#endif //MATHGAME_GAME_H
