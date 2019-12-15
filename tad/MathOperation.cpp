//
// Created by rolan on 7/12/2019.
//

#include "MathOperation.h"
MathOperation::MathOperation(int first, int second, Operation operation) : first(first), second(second),
                                                                           operation(operation) {}

int MathOperation::Result() {
    switch (operation) {
        case ADD:
            return this->first + this->second;
        case SUB:
            return this->first - this->second;
        case MUL:
            return this->first * this->second;
        case SPL:
            return this->first / this->second;
    }
}

int MathOperation::getFirst() const {
    return first;
}

void MathOperation::setFirst(int first) {
    MathOperation::first = first;
}

int MathOperation::getSecond() const {
    return second;
}

void MathOperation::setSecond(int second) {
    MathOperation::second = second;
}

Operation MathOperation::getOperation() const {
    return operation;
}

void MathOperation::setOperation(Operation operation) {
    MathOperation::operation = operation;
}
