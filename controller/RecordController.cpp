//
// Created by rolan on 13/12/2019.
//

#include <fstream>
#include <iostream>
#include "RecordController.h"

RecordController::RecordController() {
    this->rp = new RecordsPersistence();
}

RecordList *RecordController::loadRecords() {
    this->rp->read();
    return this->rp->getRecordList();
}

void RecordController::saveRecords(RecordList *records) {
    this->rp->setRecordList(records);
    this->rp->write();
}

void RecordController::showRecords() {
    this->rp->read();
    this->rp->getRecordList()->readList();
}