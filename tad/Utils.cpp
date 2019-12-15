//
// Created by Gary Valverde Hampton on 12/14/19.
//

#include <ostream>
#include "Utils.h"

using namespace std;

void Utils::ClearScreen() {
    int n;
    for (n = 0; n < 10; n++)
        printf("\n\n\n\n\n\n\n\n\n\n");
}