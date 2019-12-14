//
// Created by rolan on 12/12/2019.
//

#include "RecordsPersistence.h"
#include <iostream>
#include <fstream>
using namespace std;

void RecordsPersistence::write() {
    ofstream myfile ("records.txt");
    if (myfile.is_open())
    {
        for(int i = 0; i < 3; i++){
            myfile << "hello world here.\n";
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}

void RecordsPersistence::read() {
    string line;
    ifstream myfile ("records.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}