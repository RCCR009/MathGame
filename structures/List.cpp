//
// Created by Gary Valverde Hampton on 10/7/19.
//

#include <iostream>
#include <cstddef>
#include <sstream>
#include "List.h"

using namespace std;

template <class T>
List<T>::List() {
    this->head = NULL;
}

template <class T>
void List<T>::addFirst(T info) {
    Node<T>* node = new Node<T>(info);

    if (this->head == NULL) {
        this->head = node;
    } else {
        node->setNext(head);
        head = node;
    }
    this->_length++;
}

template <class T>
void List<T>::addLast(T info) {
    Node<T>* node = new Node<T>(info);

    if (this->head == NULL) {
        this->head = node;
    } else {
        Node<T>* aux = head;
        while (aux->getNext() != NULL) {
            aux = aux->getNext();
        }
        aux->setNext(node);
    }
    this->_length++;
}

template <class T>
void List<T>::addOrdered(T info) {

    if(this->head == NULL || info < this->head->getInfo()) {
        this->addFirst(info);
    } else {
        Node<T>* node = new Node<T>(info);
        Node<T>* previous = this->head;
        Node<T>* current = previous->getNext();
        while(current != NULL && node->getInfo() > current->getInfo()) {
            previous = current;
            current = previous->getNext();
        }
        node->setNext(current);
        previous->setNext(node);
        this->_length++;
    }
}

template <class T>
void List<T>::removeFirst() {
    if (this->head != NULL) {
        Node<T>* aux = this->head;
        this->head = this->head->getNext();
        aux->setNext(NULL);
        delete aux;
        this->_length--;
    }
}

template <class T>
void List<T>::removeLast() {
    if (this->head != NULL) {
        Node<T>* previous = this->head;
        Node<T>* current = previous->getNext();

        while(current->getNext() != NULL) {
            previous = current;
            current = previous->getNext();
        }
        previous->setNext(NULL);
        delete current;
        this->_length--;
    }
}

template <class T>
void List<T>::remove(T info) {
    if(this->head != NULL) {
        if (this->head->getInfo() == info) {
            this->removeFirst();
        } else {
            Node<T>* previous = this->head;
            Node<T>* current = previous->getNext();

            while(current != NULL) {
                if (current->getInfo() == info) {
                    previous->setNext(current->getNext());
                    current->setNext(NULL);
                    delete current;
                    current = previous->getNext();
                    this->_length--;
                } else {
                    previous = current;
                    current = previous->getNext();
                }
            }
        }
    }
}

template <class T>
void List<T>::removeIndex(int index) {
    if(this->head != NULL && this->length() > index) {
        if (index == 0) {
            this->removeFirst();
        } else if (index == this->length() - 1) {
            this->removeLast();
        } else {
            int counter = 1;
            Node<T>* previous = this->head;
            Node<T>* current = previous->getNext();
            while(counter < index) {
                previous = current;
                current = previous->getNext();
                counter++;
            }

            previous->setNext(current->getNext());
            current->setNext(NULL);
            delete current;
            this->_length--;
        }
    }
}

template <class T>
Node<T>* List<T>::find(T info) {
    Node<T>* node = NULL;
    if (this->head != NULL) {
        if (this->head->getInfo() != info) {
            Node<T>* aux = head;
            while(aux->getNext() != NULL && node == NULL) {
                aux = aux->getNext();
                if (aux->getInfo() == info) {
                    node = aux;
                }
            }
        } else {
            node = head;
        }
    }
    return node;
}

template <class T>
T List<T>::findIndex(int index) {
    Node<T>* node = NULL;
    if (this->head != NULL && index < _length) {
        if (index != 0) {
            Node<T>* aux = head;
            while(index > 0) {
                aux = aux->getNext();
                index--;
            }
            node = aux;
        } else {
            node = head;
        }
    }
    return node->getInfo();
}

template <class T>
void List<T>::readList() {
    Node<T>* aux = head;

    if (aux != NULL) {
        do {
            cout << *aux->getInfo() << endl;
            aux = aux->getNext();
        } while (aux != NULL);
    }
}

template <>
void List<int>::readList() {
    Node<int>* aux = head;

    if (aux != NULL) {
        do {
            cout << aux->getInfo() << endl;
            aux = aux->getNext();
        } while (aux != NULL);
    }
}

template <class T>
bool List<T>::isEmpty() {
    return this->head == NULL;
}

template <class T>
int List<T>::length() {
    return this->_length;
}

template<class T>
List<T>::~List() {
    delete this->head;
}

template<class T>
inline string List<T>::toString() {
    stringstream str;
    Node<T>* aux = head;
    if (aux != NULL) {
        do {
            str << *aux->getInfo() << endl;
            aux = aux->getNext();
        } while (aux != NULL);
    }
    return str.str();
}

template<>
inline string List<int>::toString() {
    stringstream str;
    Node<int>* aux = head;
    if (aux != NULL) {
        do {
            str << aux->getInfo() << endl;
            aux = aux->getNext();
        } while (aux != NULL);
    }
    return str.str();
}

template class List<int>;