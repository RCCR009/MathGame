//
// Created by rolan on 14/12/2019.
//

#ifndef MATHGAME_RECORDLIST_H
#define MATHGAME_RECORDLIST_H

#include "NodeRecord.h"

class RecordList {
private:
    int _length;
    NodeRecord *head;
public:
    RecordList();

    ~RecordList();

    void addFirst(Record data);

    void readList();

    bool isEmpty();

    void addLast(Record data);

    NodeRecord *find(Record data);

    Record findIndex(int index);

    void addOrdered(Record data);

    void remove(Record data);

    void removeFirst();

    void removeLast();

    void removeIndex(int index);

    int length();

    string toString();
};
#endif //MATHGAME_RECORDLIST_H