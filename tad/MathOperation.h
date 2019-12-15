//
// Created by rolan on 7/12/2019.
//

#ifndef MATHGAME_MATHOPERATION_H
#define MATHGAME_MATHOPERATION_H

#include <ostream>

using namespace std;

enum Operation {
    ADD,
    SUB,
    MUL,
    SPL,
};

class MathOperation {
private:
    int first;
    int second;
    Operation operation;
public:
    MathOperation(int first, int second, Operation operation);
    int Result();

    int getFirst() const;

    void setFirst(int first);

    int getSecond() const;

    void setSecond(int second);

    Operation getOperation() const;

    void setOperation(Operation operation);

    friend std::ostream &operator<<(std::ostream &os, const MathOperation &operation) {
        string symbol;
        switch(operation.operation) {
            case ADD:
                symbol = '+';
                break;
            case SUB:
                symbol = '-';
                break;
            case MUL:
                symbol = '*';
                break;
            case SPL:
                symbol = '/';
                break;
        }

        os << operation.first << " " << symbol << " " << operation.second << endl;
        return os;
    }
};


#endif //MATHGAME_MATHOPERATION_H
