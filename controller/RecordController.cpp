//
// Created by rolan on 13/12/2019.
//

#include <fstream>
#include <iostream>
#include "RecordController.h"

RecordController::RecordController() {
    this->recordList = new RecordList();
}

void RecordController::loadRecords() {
    string line;
    ifstream file("records.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << '\n';
        }
        file.close();
    } else std::cout << "Unable to open file";
}

void RecordController::saveRecords() {
    int i = 0;
    ofstream file;
    Record aux;
    file.open("record.txt");
    while (i < RecordController::recordList->length()) {
        aux = RecordController::recordList->findIndex(i);
        file << aux.getPlayer().getNickname() + ";" + to_string(aux.getScore()) +"\n";
        i = i++;
    }

    file.close();
}