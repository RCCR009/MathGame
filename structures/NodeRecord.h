//
// Created by Gary Valverde Hampton on 12/12/19.
//

#ifndef MATHGAME_NODE_H
#define MATHGAME_NODE_H

#include "../tad/Record.h"

class NodeRecord {
private:
    Record data;
    NodeRecord* next;
public:
    explicit NodeRecord(Record data);
    ~NodeRecord();
    NodeRecord * getNext();
    void setNext(NodeRecord* next);

    Record &getData();
};

#endif //MATHGAME_NODE_H
