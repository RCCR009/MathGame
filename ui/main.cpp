#include <iostream>
#include <fstream>
#include "string"
#include "sstream"
#include "chrono"
#include <ctime>

#include "../tad/Player.h"
#include "../tad/Record.h"
#include "../controller/PlayerController.h"

#include "../tad/Game.h"

using namespace std;

void showMenu();
void doOption(int option);
void setPlayers();
void startMathGame();

PlayerController playerController = PlayerController();

using namespace std;
int main() {
//    Game game();
//    for(int i = 0; i < 100; i++) {
//        int randNum = rand()%(10-1 + 1) + 1;
//        cout << randNum << endl;
//    }

    showMenu();
    return 0;
}

void showMenu() {
    string option = "";
    int numOption;
    do {
        cout << " " << endl;
        cout << "Menu principal" << endl;
        cout << "1. Definir jugadores" << endl;
        cout << "2. Iniciar Juego" << endl;
        cout << "3. Mostar mejores records" << endl;
        cout << "6. Salir" << endl;
        cin >> option;
        stringstream iss(option);
        iss >> numOption;
        if(iss.fail()){
            cout << "Por favor dijite una opcion valida!" << endl;
        } else if(numOption > 6) {
            cout << "Por favor dijite una opcion valida!" << endl;
        } else {
            doOption(numOption);
        }
    } while(numOption != 6);
    cout << "" << endl;
}

void doOption(int option) {
    switch(option) {
        case 1:
            if (playerController.getPlayerQueue()->getLongitude() == 0) {
                setPlayers();
            } else {
                cout << "ya hay jugadores registrados para la partida" << endl;
            }
            break;
        case 2:
            if (playerController.getPlayerQueue()->getLongitude() > 0) {
                startMathGame();
            } else {
                cout << "Nesecita agragar primero a los jugadores para iniciar el juego" << endl;
            }
            break;
        default:
            break;
    }
}

void setPlayers() {
    string nickName;
    for(int i = 1; i <= 2; i++) {
        cout << " " << endl;
        cout << "digite nombre del jugador " << i << endl;
        cin >> nickName;
        playerController.getPlayerQueue()->addElement(Player(nickName));
    }
//    cout << playerController.getPlayerQueue()->serve()->getData().getNickname() << endl;
//    cout << playerController.getPlayerQueue()->serve()->getData().getNickname() << endl;
}

void startMathGame() {
    Game* game = new Game(playerController, 10, 2);
    List<Record*>* records = game->startGame();
}