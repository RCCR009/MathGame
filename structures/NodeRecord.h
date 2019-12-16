//
// Created by Gary Valverde Hampton on 12/12/19.
//

#ifndef MATHGAME_NODERECORD_H
#define MATHGAME_NODERECORD_H

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
