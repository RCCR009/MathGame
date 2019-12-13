//
// Created by Gary Valverde Hampton on 12/12/19.
//

#ifndef MATHGAME_QUEUE_H
#define MATHGAME_QUEUE_H


#include "Node.h"
#include <ostream>
#include <sstream>

using namespace std;

template <class T>
class Queue {
private:
    int _length;
    Node<T> * start;
    Node<T> * end;
public:
    Queue();
    void insert(T info);
    Node<T> *remove();
    bool isEmpty();

    Node<T> *getStart() const;

    void setStart(Node<T> *start);

    Node<T> *getEnd() const;

    void setEnd(Node<T> *end);

    int length();

    friend ostream & operator << (ostream &os, const Queue<T>& queue) {
        stringstream str;
        if (queue.start != NULL) {
            Node<T>* aux = queue.start;
            do {
                str << *aux->getInfo();
                aux = aux->getNext();
            } while (aux != NULL);
        }
        return os << str.str();
    }
};


#endif //MATHGAME_QUEUE_H
