//
// Created by rolan on 7/12/2019.
// Modified by gary on 14/12/2019
//

#include "Game.h"
#include "../controller/PlayerController.h"
#include "Utils.h"
#include "Record.h"
#include <random>
#include <math.h>
#include <chrono>
#include <ctime>
#include <iostream>

using namespace std;

Game::Game(PlayerController playerController) : playerController(playerController) {
    this->mathOperations = new List<MathOperations*>();
    /**
     * Random Number seed
     */
    random_device randomSeed;
    mt19937 range(randomSeed());    // random-number engine used (Mersenne-Twister in this case)
    /**
     * Get the max number based on the digits
     */
    int max = 0;
    for (int i = 0; i < 1; i++) {
        max += 9 * pow(10, i);
    }
    uniform_int_distribution<int> uni(0,max); // guaranteed unbiased
    uniform_int_distribution<int> enm(0,3); // guaranteed unbiased
    /**
     * Generate the list of operations for this game
     */
    for (int i = 0; i < 10; i++) {
        this->mathOperations->addLast(new MathOperations(uni(range), uni(range), (Operation)(enm(range))));
    }
}

List<Record*>* Game::startGame() {
    PlayerQueue* playerQueue = this->playerController.getPlayerQueue();
    NodePlayer* playerNode = playerQueue->getFront();

    List<Record*> * records = new List<Record*>();

    do {
        Utils::ClearScreen();
        Node<MathOperations*> * aux = this->mathOperations->getHead();
        auto start = chrono::system_clock::now();

        do {
            bool correct = false;
            while(!correct) {
                cout << playerNode->getData().getNickname() << endl;
                cout << "Please solve the following operation" << endl;
                cout << *aux->getInfo() << endl;
                int result;
                cin >> result;

                if (result == aux->getInfo()->Result()) {
                    Utils::ClearScreen();
                    cout << "Correct, please solve the next operation." << endl;
                    correct = true;
                } else {
                    Utils::ClearScreen();
                    cout << "Incorrect, please try again." << endl;
                }
            }

            aux = aux->getNext();
        } while (aux->getNext() != NULL);


        auto end = chrono::system_clock::now();

        chrono::duration<double> elapsed_seconds = end-start;
        Utils::ClearScreen();
        Player player = playerNode->getData();
        records->addLast(new Record(player, elapsed_seconds.count()));

        playerNode = playerNode->getNext();
    } while (playerNode != NULL);

    records->readList();
    return records;
}
