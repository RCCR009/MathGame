//
// Created by rolan on 7/12/2019.
//

#ifndef MATHGAME_PLAYER_H
#define MATHGAME_PLAYER_H

#include <ostream>
#include "string"

using namespace std;

class Player {
private:
    string nickname;
public:
    Player();
    Player(string nickname);
    string &getNickname();
    void setNickname(string &nickname);

    friend ostream &operator<<(ostream &os, const Player &player);
};


#endif //MATHGAME_PLAYER_H
