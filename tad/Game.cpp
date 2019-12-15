//
// Created by rolan on 7/12/2019.
//

#include "Game.h"
#include "random"

Game::Game() {}

double Game::startGame() {

}

int Game::getRandomNumber() {
    int randNum = rand()%(10-1 + 1) + 1;
    return randNum;
}

MathOperations Game::getMathOperator() {

}