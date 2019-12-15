//
// Created by rolan on 13/12/2019.
//

#include "Record.h"

Record::Record() {}

Record::Record(Player &player, double score) : player(player), score(score) {}

Player &Record::getPlayer() {
    return player;
}

void Record::setPlayer(Player &player) {
    Record::player = player;
}

double Record::getScore() {
    return score;
}

void Record::setScore(double score) {
    Record::score = score;
}
