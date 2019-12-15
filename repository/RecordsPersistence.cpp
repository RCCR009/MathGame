//
// Created by rolan on 12/12/2019.
//

#include "RecordsPersistence.h"
#include "../tad/Record.h"
#include "../controller/RecordController.h"
#include <iostream>
#include <fstream>

using namespace std;

RecordsPersistence::RecordsPersistence() {
    this->recordList = new RecordList();
}

void RecordsPersistence::write() {
    int i = 0;
    ofstream file;
    Record aux;
    file.open("Records.txt", std::ofstream::out | std::ofstream::trunc);
    while (i < RecordsPersistence::recordList->length()) {
        aux = RecordsPersistence::recordList->findIndex(i);
        file << aux.getPlayer().getNickname() + ";" + to_string(aux.getScore()) + "\n";
        i = i++;
    }

    file.close();
}

void RecordsPersistence::read() {
    string line;
    ifstream file("Records.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            this->recordList->addOrdered(this->buildRecordFromString(line));
            std::cout << line << '\n';
        }
        file.close();
    } else std::cout << "Unable to open file";
}

Record RecordsPersistence::buildRecordFromString(string line) {
    Player p;
    NodeRecord *n;
    double s;
    vector<string> result = this->splitRecords(line, ";");
    p = Player(result[0]);
    s = stod(result[1]);
    return Record(p, s);
}

vector<std::string> RecordsPersistence::splitRecords(const string &str, const string &delim) {
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos - prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());
    return tokens;
}