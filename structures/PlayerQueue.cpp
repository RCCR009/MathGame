//
// Created by rolan on 14/12/2019.
//

#include "PlayerQueue.h"
#include <cstddef>
#include <stdexcept>

using namespace std;

PlayerQueue::PlayerQueue() {
    this->longitude = 0;
    this->front = NULL;
    this->end = NULL;
}

void PlayerQueue::addElement(Player player) {
    NodePlayer *node = new NodePlayer(player);
    if (isEmpty()) {
        this->front = node;
        this->end = node;
    } else {
        this->end->setNext(node);
        this->end = node;
    }
    this->longitude ++;
}

bool PlayerQueue::isEmpty() {
    if(longitude == 0){
        return true;
    } else {
        return false;
    }
}

void PlayerQueue::deleteElement(Player player) {
    NodePlayer *node = new NodePlayer(player);
    NodePlayer *aux = this->front;
    if(this->front != NULL) {
        if (this->front->getData().getNickname() == node->getData().getNickname()) {
            this->front = this->front->getNext();
//            delete aux;
        } else {
            while(aux->getNext() !=NULL) {
                if (aux->getNext()->getData().getNickname() == player.getNickname()) {
                    NodePlayer *aux2 = aux->getNext();
                    aux->setNext(aux->getNext()->getNext());
//                    delete aux2;
                    break;
                } else {
                    aux = aux->getNext();
                }
            }
        }
    }
    this->longitude--;
}

void PlayerQueue::deleteElementByIndex(int index) {
    NodePlayer *aux = this->front;
    if(index >= this->longitude){
        throw out_of_range("The index is bigger than the length of the Queue");
    } else {
        for (int i = 0; i < this->longitude; i++) {
            if(i == index){
                this->deleteElement(aux->getData());
            } else {
                aux = aux->getNext();
            }
        }
    }
}

NodePlayer* PlayerQueue::serve() {
    NodePlayer * node = new NodePlayer(this->front->getData());
    this->deleteElementByIndex(0);
    return node;
}

int PlayerQueue::getLongitude() {
    return this->longitude;
}

NodePlayer * PlayerQueue::getFront() {
    return this->front;
}

NodePlayer* PlayerQueue::getEnd() {
    return this->end;
}