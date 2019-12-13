//
// Created by rolan on 7/12/2019.
//

#include "Player.h"

Player::Player() {}

Player::Player(string nickname) {
    this->nickname = nickname;
}

string &Player::getNickname() {
    return nickname;
}

void Player::setNickname(string &nickname) {
    Player::nickname = nickname;
}
