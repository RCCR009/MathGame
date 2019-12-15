//
// Created by rolan on 13/12/2019.
//

#include <fstream>
#include <iostream>
#include "RecordController.h"

RecordController::RecordController() {
    this->rp = new RecordsPersistence();
}

void RecordController::loadRecords() {
    this->rp->read();
}

void RecordController::saveRecords() {
    this->rp->write();
}