//
// Created by Gary Valverde Hampton on 12/12/19.
//

#ifndef MATHGAME_NODE_H
#define MATHGAME_NODE_H


template <class T>
class Node {
private:
    T info;
    Node<T>* next;
public:
    Node(T info);
    ~Node();
    Node<T> * getNext();
    void setNext(Node<T>* next);
    T getInfo();
};


#endif //MATHGAME_NODE_H
