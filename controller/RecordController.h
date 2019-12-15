//
// Created by rolan on 13/12/2019.
//

#ifndef MATHGAME_RECORDCONTROLLER_H
#define MATHGAME_RECORDCONTROLLER_H

#include "../repository/RecordsPersistence.h"

class RecordController {
private:
    RecordsPersistence *rp;
public:
    RecordController();

    void loadRecords();

    void saveRecords();
};


#endif //MATHGAME_RECORDCONTROLLER_H
