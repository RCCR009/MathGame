//
// Created by rolan on 12/12/2019.
//

#include "RecordStack.h"

#include <cstddef>

using namespace std;

RecordStack::RecordStack() {
    this->longitude = 0;
    this->top = NULL;
}

bool RecordStack::push(Record record) {
    NodeRecord *node = new NodeRecord(record);
    if(node == NULL) {
        return false;
    } else {
        if(this->isEmpty()) {
            this->top = node;
        } else {
            node->setNext(this->top);
            this->top = node;
        }
    }
    this->longitude++;
    return true;
}

bool RecordStack::pop() {
    NodeRecord *aux;
    if(!this->isEmpty()){
        aux = this->top;
        top = top->getNext();
        this->longitude--;
//        delete aux;
        return true;
    } else {
        return false;
    }
}

bool RecordStack::isEmpty() {
    return longitude == 0;
}

int RecordStack::getLongitude(int longitude) {
    return this->longitude;
}

NodeRecord* RecordStack::getTop() {
    return this->top;
}

RecordStack::~RecordStack() {
    this->longitude = 0;
    delete this->top;
}
