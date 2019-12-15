//
// Created by rolan on 13/12/2019.
//

#ifndef MATHGAME_RECORD_H
#define MATHGAME_RECORD_H

#include "Player.h"

class Record {
private:
    Player player;
    double score;
public:
    Record();
    Record(Player &player, double score);
    Player &getPlayer();
    void setPlayer(Player &player);
    double getScore();
    void setScore(double score);
};

#endif //MATHGAME_RECORD_H