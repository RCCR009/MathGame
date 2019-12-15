//
// Created by rolan on 7/12/2019.
//
#include "MathOperations.h"
MathOperations::MathOperations(int first, int second, Operation operation) : first(first), second(second),
                                                                           operation(operation) {}
int MathOperations::Result() {
    switch (operation) {
        case ADD:
            return this->first + this->second;
        case SUB:
            return this->first - this->second;
        case MUL:
            return this->first * this->second;
        case SPL:
            return this->first / this->second;
        default:
            break;
    }
}

int MathOperations::getFirst() const {
    return first;
}
void MathOperations::setFirst(int first) {
    MathOperations::first = first;
}
int MathOperations::getSecond() const {
    return second;
}
void MathOperations::setSecond(int second) {
    MathOperations::second = second;
}
Operation MathOperations::getOperation() const {
    return operation;
}
void MathOperations::setOperation(Operation operation) {
    MathOperations::operation = operation;
}