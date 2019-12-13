//
// Created by Gary Valverde Hampton on 11/8/19.
//

#include <cstddef>
#include "Queue.h"

template<class T>
Queue<T>::Queue() {
    this->_length = 0;
    this->end = NULL;
    this->start = NULL;
}

template<class T>
bool Queue<T>::isEmpty() {
    return this->_length == 0 && this->start == NULL && this->end == NULL;
}


template<class T>
void Queue<T>::insert (T info ) {
    Node<T> * node = new Node<T>(info);
    if (this->isEmpty()) {
        start = node;
        end = node;
    } else {
        Node<T> * aux = end;
        end->setNext(node);
        end = node;
    }
    _length++;
}

template<class T>
Node<T> *Queue<T>::getStart() const {
    return start;
}


template<class T>
Node<T> *Queue<T>::getEnd() const {
    return end;
}

template<class T>
Node<T> *Queue<T>::remove() {
    if (!(this->isEmpty())) {
        Node<T> * ant = end;
        Node<T> * act = end->getNext();

        while(act->getNext() != NULL) {
            ant = act;
            act = ant->getNext();
        }

        start = ant;
        start->setNext( NULL);
        _length--;

        return act;
    }
    return NULL;
}


template<class T>
int Queue<T>::length() {
    return _length;
}

template<class T>
void Queue<T>::setEnd(Node<T> *end) {
    Queue<T>::end = end;
}

template<class T>
void Queue<T>::setStart(Node<T> *start) {
    Queue<T>::start = start;
}


template class Queue<int>;