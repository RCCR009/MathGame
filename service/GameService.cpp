//
// Created by rolan on 12/12/2019.
//

#include <random>
#include <math.h>
#include "GameService.h"

using namespace std;

GameService::GameService(int operations, int digits) {
    this->mathOperations = new List<MathOperation*>();
    /**
     * Random Number seed
     */
    random_device randomSeed;
    mt19937 range(randomSeed());    // random-number engine used (Mersenne-Twister in this case)

    /**
     * Get the max number based on the digits
     */
    int max = 0;
    for (int i = 0; i < digits; i++) {
        max += 9 * pow(10, i);
    }
    uniform_int_distribution<int> uni(0,max); // guaranteed unbiased
    uniform_int_distribution<int> enm(0,3); // guaranteed unbiased

    /**
     * Generate the list of operations for this game
     */
    for (int i = 0; i < operations; i++) {
        this->mathOperations->addLast(new MathOperation(uni(range), uni(range), (Operation)(enm(range))));
    }
}

List<MathOperation *> *GameService::getMathOperations() const {
    return mathOperations;
}

void GameService::setMathOperations(List<MathOperation *> *mathOperations) {
    GameService::mathOperations = mathOperations;
}
