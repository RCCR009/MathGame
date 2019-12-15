////
//// Created by Gary Valverde Hampton on 12/12/19.
////

#ifndef MATHGAME_LIST_H
#define MATHGAME_LIST_H


#include <ostream>
#include <sstream>
#include "Node.h"

using namespace std;

template <class T>
class List {
private:
    int _length;
    Node<T>* head;
public:
    List();
    ~List();

    void addFirst(T info);
    void readList();
    bool isEmpty();
    void addLast(T info);
    Node<T>* find(T info);
    T findIndex(int index);
    void addOrdered(T info);
    void remove(T info);
    void removeFirst();
    void removeLast();
    void removeIndex(int index);
    int length();
    string toString();

    Node<T> *getHead() const;

    friend ostream & operator << (ostream &os, const List<T>& list) {
        stringstream str;
        if (list.head != NULL) {
            Node<T>* aux = list.head;
            do {
                str << *aux->getInfo();
                aux = aux->getNext();
            } while (aux != NULL);
        }
        return os << str.str();
    }

};



#endif //MATHGAME_LIST_H
