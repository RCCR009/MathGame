//
// Created by rolan on 12/12/2019.
//

#include "PlayerController.h"

PlayerController::PlayerController() {
    this->playerQueue = new PlayerQueue();
}

PlayerQueue* PlayerController::getPlayerQueue() {
    return this->playerQueue;
}
