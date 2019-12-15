//
// Created by rolan on 12/12/2019.
//

#ifndef MATHGAME_RECORDSTACK_H
#define MATHGAME_RECORDSTACK_H

#include "NodeRecord.h"
#include "../tad/Record.h"

class RecordStack {
private:
    int longitude;
    NodeRecord *top;
public:
    RecordStack();
    bool push(Record record);
    bool isEmpty();
    bool pop();
    int getLongitude(int longitude);
    NodeRecord *getTop();
    ~RecordStack();
};

#endif //MATHGAME_RECORDSTACK_H
