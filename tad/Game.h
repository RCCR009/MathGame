//
// Created by rolan on 7/12/2019.
//

#ifndef MATHGAME_GAME_H
#define MATHGAME_GAME_H

#include "MathOperations.h"
#include "../structures/List.h"
#include "../controller/PlayerController.h"
#include "Record.h"
#include "../structures/RecordList.h"

class Game {
private:
    List<MathOperations *> *mathOperations;
    PlayerController playerController;
public:
    Game(PlayerController plpayerController, int operations, int digits);

    RecordList *startGame();
};


#endif //MATHGAME_GAME_H
