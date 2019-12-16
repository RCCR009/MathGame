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
    const string filePath = "..\\Records.txt";
public:
    RecordsPersistence();

    RecordList *getRecordList();

    void setRecordList(RecordList *records);

    void write();

    void read();

    Record buildRecordFromString(string sRecord);

    vector<std::string> splitRecords(const string &str, const string &delim);
};


#endif //MATHGAME_RECORDSPERSISTENCE_H
