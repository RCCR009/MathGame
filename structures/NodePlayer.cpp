//
// Created by rolan on 14/12/2019.
//

#include <cstddef>
#include <vector>
#include "NodePlayer.h"

NodePlayer::NodePlayer(Player data) {
    this->next = NULL;
    this->data = data;
}

NodePlayer * NodePlayer::getNext() {
    return this->next;
}

void NodePlayer::setNext(NodePlayer * next) {
    this->next = next;
}

Player NodePlayer::getData() {
    return this->data;
}

NodePlayer::~NodePlayer() {
    delete this->next;
}
