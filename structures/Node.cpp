//
// Created by Gary Valverde Hampton on 10/7/19.
//

#include <cstddef>
#include <vector>
#include "Node.h"

template <class T>
Node<T>::Node(T info) {
    this->next = NULL;
    this->info = info;
}

template <class T>
Node<T> * Node<T>::getNext() {
    return this->next;
}

template <class T>
void Node<T>::setNext(Node<T> * next) {
    this->next = next;
}

template <class T>
T Node<T>::getInfo() {
    return this->info;
}

template<>
Node<int>::~Node() {
    delete this->next;
}


template<class T>
Node<T>::~Node() {
    delete this->next;
}


template class Node<int>;