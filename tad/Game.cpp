//
// Created by rolan on 7/12/2019.
//

#include "Game.h"

Game::Game() {}

Game::Game(Player &player, double score) : player(player), score(score) {}

Player &Game::getPlayer() {
    return player;
}

void Game::setPlayer(Player &player) {
    Game::player = player;
}

double Game::getScore() {
    return score;
}

void Game::setScore(double score) {
    Game::score = score;
}


