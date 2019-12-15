#include <iostream>
#include "../service/GameService.h"

int main() {
    GameService* gameService = new GameService(200, 3);

    cout << *gameService->getMathOperations() << endl;
}