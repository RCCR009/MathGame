//
// Created by rolan on 13/12/2019.
//

#ifndef MATHGAME_RECORDCONTROLLER_H
#define MATHGAME_RECORDCONTROLLER_H
#include "../structures/RecordList.h"

class RecordController {
private:
//    Stack<Record> *recordStack();
    RecordList *recordList;
public:
    RecordController();
    void loadRecords();
    void saveRecords();
};


#endif //MATHGAME_RECORDCONTROLLER_H
