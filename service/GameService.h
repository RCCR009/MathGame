//
// Created by rolan on 12/12/2019.
//

#ifndef MATHGAME_GAMESERVICE_H
#define MATHGAME_GAMESERVICE_H


#include "../tad/MathOperation.h"
#include "../structures/List.h"

class GameService {
private:
    List<MathOperation*> * mathOperations;

public:
    GameService(int operations, int digits);

    List<MathOperation *> *getMathOperations() const;
    void setMathOperations(List<MathOperation *> *mathOperations);


};


#endif //MATHGAME_GAMESERVICE_H
