//
// Created by rolan on 7/12/2019.
// Modified by gary on 14/12/2019
//

#include "Game.h"
#include "../controller/PlayerController.h"
#include "Record.h"
#include "../structures/RecordList.h"
#include <random>
#include <math.h>
#include <chrono>
#include <iostream>

using namespace std;

Game::Game(PlayerController playerController, int operations, int digits) : playerController(playerController) {
    this->mathOperations = new List<MathOperations *>();
    /**
     * Random Number seed
     */
    random_device randomSeed;
    mt19937 range(randomSeed());    // random-number engine used (Mersenne-Twister in this case)
    /**
     * Get the max number based on the digits
     */
    int max = 0;
    for (int i = 0; i < digits; i++) {
        max += 9 * pow(10, i);
    }
    uniform_int_distribution<int> uni(0, max); // guaranteed unbiased
    uniform_int_distribution<int> enm(0, 3); // guaranteed unbiased
    /**
     * Generate the list of operations for this game
     */
    for (int i = 0; i < operations; i++) {
        int first = uni(range);
        int second = uni(range);
        Operation operation = (Operation) (enm(range));
        if (operation == SPL) {
            if (second == 0) {
                second++;
            }
            if (first < second) {
                first = first + second;
            }
        }
        this->mathOperations->addLast(new MathOperations(first, second, operation));
    }
}

RecordList *Game::startGame() {
    PlayerQueue *playerQueue = this->playerController.getPlayerQueue();
    NodePlayer *playerNode = playerQueue->getFront();

    RecordList *records = new RecordList();

    do {
        Node<MathOperations*> * aux = this->mathOperations->getHead();
        auto start = chrono::system_clock::now();

        int i = 1;
        do {
            bool correct = false;
            while(!correct) {
                cout << playerNode->getData().getNickname() << endl;
                cout << i << ". Please solve the following operation" << endl;
                cout << *aux->getInfo() << endl;
                int result;
                cin >> result;

                if (result == aux->getInfo()->Result()) {
                    cout << "Correct, please solve the next operation." << endl;
                    correct = true;
                } else {
                    cout << "Incorrect, please try again." << endl;
                }
            }

            i++;

            aux = aux->getNext();
        } while (aux != NULL);


        auto end = chrono::system_clock::now();

        chrono::duration<double> elapsed_seconds = end-start;

        Player player = playerNode->getData();
        records->addFirst(Record(player, elapsed_seconds.count()));

        playerNode = playerNode->getNext();
    } while (playerNode != NULL);

    records->readList();
    return records;
}