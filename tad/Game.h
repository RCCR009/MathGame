//
// Created by rolan on 7/12/2019.
//

#ifndef MATHGAME_GAME_H
#define MATHGAME_GAME_H

#include "MathOperations.h"

enum operations {ADD,SUBTRACT,MULTIPLICATION,SLIT};

class Game {
private:
    MathOperations mathOperations;
    int randomNumber;
    operations mathOperation;
public:
    Game();
    double startGame();
    int getRandomNumber();
    MathOperations getMathOperator();
};


#endif //MATHGAME_GAME_H
