//
// Created by rolan on 12/12/2019.
//

#ifndef MATHGAME_RECORDSPERSISTENCE_H
#define MATHGAME_RECORDSPERSISTENCE_H


#include <vector>
#include "../structures/RecordList.h"

class RecordsPersistence {
private:
    RecordList *recordList;
public:
    RecordsPersistence();

    RecordList *getRecordList();

    void write();

    void read();

    Record buildRecordFromString(string sRecord);

    vector<std::string> splitRecords(const string &str, const string &delim);
};


#endif //MATHGAME_RECORDSPERSISTENCE_H
