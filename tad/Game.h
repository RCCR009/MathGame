//
// Created by rolan on 7/12/2019.
//

#ifndef MATHGAME_GAME_H
#define MATHGAME_GAME_H

#include "Player.h"

class Game {
private:
    Player player;
    double score;
public:
    Game();

    Game(Player &player, double score);

    Player &getPlayer();

    void setPlayer(Player &player);

    double getScore();

    void setScore(double score);

};


#endif //MATHGAME_GAME_H
