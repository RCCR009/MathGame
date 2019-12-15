//
// Created by rolan on 14/12/2019.
//

#include "RecordList.h"

#include <iostream>
#include <cstddef>
#include <sstream>
#include "List.h"

using namespace std;

RecordList::RecordList() {
    this->head = NULL;
}

void RecordList::addFirst(Record record) {
    NodeRecord* node = new NodeRecord(record);

    if (this->head == NULL) {
        this->head = node;
    } else {
        node->setNext(head);
        head = node;
    }
    this->_length++;
}

void RecordList::addLast(Record record) {
    NodeRecord * node = new NodeRecord(record);

    if (this->head == NULL) {
        this->head = node;
    } else {
        NodeRecord* aux = head;
        while (aux->getNext() != NULL) {
            aux = aux->getNext();
        }
        aux->setNext(node);
    }
    this->_length++;
}

void RecordList::addOrdered(Record record) {

    if(this->head == NULL || record.getScore() < this->head->getData().getScore()) {
        this->addFirst(record);
    } else {
        NodeRecord* node = new NodeRecord(record);
        NodeRecord* previous = this->head;
        NodeRecord* current = previous->getNext();
        while(current != NULL && node->getData().getScore() > current->getData().getScore()) {
            previous = current;
            current = previous->getNext();
        }
        node->setNext(current);
        previous->setNext(node);
        this->_length++;
    }
}

void RecordList::removeFirst() {
    if (this->head != NULL) {
        NodeRecord* aux = this->head;
        this->head = this->head->getNext();
        aux->setNext(NULL);
        delete aux;
        this->_length--;
    }
}

void RecordList::removeLast() {
    if (this->head != NULL) {
        NodeRecord* previous = this->head;
        NodeRecord* current = previous->getNext();

        while(current->getNext() != NULL) {
            previous = current;
            current = previous->getNext();
        }
        previous->setNext(NULL);
        delete current;
        this->_length--;
    }
}

//void RecordList::remove(Record record) {
//    if(this->head != NULL) {
//        if (this->head->getData() == record) {
//            this->removeFirst();
//        } else {
//            Node<T>* previous = this->head;
//            Node<T>* current = previous->getNext();
//
//            while(current != NULL) {
//                if (current->getInfo() == info) {
//                    previous->setNext(current->getNext());
//                    current->setNext(NULL);
//                    delete current;
//                    current = previous->getNext();
//                    this->_length--;
//                } else {
//                    previous = current;
//                    current = previous->getNext();
//                }
//            }
//        }
//    }
//}

void RecordList::removeIndex(int index) {
    if(this->head != NULL && this->length() > index) {
        if (index == 0) {
            this->removeFirst();
        } else if (index == this->length() - 1) {
            this->removeLast();
        } else {
            int counter = 1;
            NodeRecord* previous = this->head;
            NodeRecord* current = previous->getNext();
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

//NodeRecord* RecordList::find(Record record) {
//    NodeRecord* node = NULL;
//    if (this->head != NULL) {
//        if (this->head->getInfo() != info) {
//            Node<T>* aux = head;
//            while(aux->getNext() != NULL && node == NULL) {
//                aux = aux->getNext();
//                if (aux->getInfo() == info) {
//                    node = aux;
//                }
//            }
//        } else {
//            node = head;
//        }
//    }
//    return node;
//}

Record RecordList::findIndex(int index) {
    NodeRecord* node = NULL;
    if (this->head != NULL && index < _length) {
        if (index != 0) {
            NodeRecord* aux = head;
            while(index > 0) {
                aux = aux->getNext();
                index--;
            }
            node = aux;
        } else {
            node = head;
        }
    }
    return node->getData();
}

void RecordList::readList() {
    NodeRecord* aux = head;
    if (aux != NULL) {
        do {
            cout << "Nickname: "<< aux->getData().getPlayer().getNickname() << endl;
            cout << "Score: " << aux->getData().getScore() << endl;
            aux = aux->getNext();
        } while (aux != NULL);
    }
}

bool RecordList::isEmpty() {
    return this->head == NULL;
}

int RecordList::length() {
    return this->_length;
}

RecordList::~RecordList() {
    delete this->head;
}