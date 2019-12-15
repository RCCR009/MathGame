//
// Created by Gary Valverde Hampton on 10/7/19.
//

#include <cstddef>
#include <vector>
#include "NodeRecord.h"

NodeRecord::NodeRecord(Record data) {
    this->next = NULL;
    this->data = data;
}

NodeRecord * NodeRecord::getNext() {
    return this->next;
}

void NodeRecord::setNext(NodeRecord * next) {
    this->next = next;
}

NodeRecord::~NodeRecord() {
    delete this->next;
}

Record &NodeRecord::getData() {
    return data;
}
