//
// Created by Gary Valverde Hampton on 12/12/19.
//

#ifndef MATHGAME_STACK_H
#define MATHGAME_STACK_H


#include <ostream>
#include <sstream>
#include "Node.h"

using namespace std;

template<class T>
class Stack {
private:
    int length;
    Node<T> * top;
public:
    Stack();

    int getLength() const;

    Node<T> *getTop() const;

    void push(T info);

    Node<T>* pop();

    bool isEmpty();

    void setTop(Node<T> *top);

    void setLength(int length);

    friend ostream & operator << (ostream &os, const Stack<T>& stack) {
        stringstream str;
        if (stack.top != NULL) {
            Node<T>* aux = stack.top;
            do {
                str << *aux->getInfo();
                aux = aux->getNext();
            } while (aux != NULL);
        }
        return os << str.str();
    }
};



#endif //MATHGAME_STACK_H
