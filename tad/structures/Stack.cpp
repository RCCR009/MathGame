//
// Created by Gary Valverde Hampton on 11/8/19.
//

#include <cstddef>
#include "Stack.h"

template<class T>
int Stack<T>::getLength() const {
    return length;
}

template<class T>
Node<T> *Stack<T>::getTop() const {
    return top;
}

template<class T>
bool Stack<T>::isEmpty() {
    return this->length == 0 && this->top == NULL;
}

template<class T>
void Stack<T>::push(T info) {
    Node<T> * nuevo = new Node<T> (info);
    if (this->isEmpty()) {
        top = nuevo;
    } else {
        nuevo->setNext(top);
        top = nuevo;
    }
    length++;
}

template<class T>
Node<T>* Stack<T>::pop () {
    Node<T> * aux;
    if (!(this->isEmpty())) {
        aux = top;
        top = top->getNext();
        length--;
        return aux;
    } else {
        return NULL;
    }
}

template<class T>
Stack<T>::Stack() {
    this->length = 0;
    this->top = NULL;
}

template<class T>
void Stack<T>::setTop(Node<T> *top) {
    Stack<T>::top = top;
}

template<class T>
void Stack<T>::setLength(int length) {
    Stack<T>::length = length;
}

template class Stack<int>;

