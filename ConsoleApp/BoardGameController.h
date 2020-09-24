#ifndef PLAYCONTROLLER_H
#define PLAYCONTROLLER_H


#include "CatchTheRabbitRand.h"
#include "CatchTheRabbitEdu.h"
#include "TicTacToeRand.h"
#include "TicTacToeEdu.h"
#include <iostream>

using namespace std;

class BoardGameController {
public:
    BoardGameController();
    void start_Rabbit_game();
    void start_TicTacToe_game();
    void playGame() ;

private:
    TicTacToeRand* Trandom_game;
    TicTacToeEdu* Teducated_game;
    CatchTheRabbitRand* Crandom_game;
    CatchTheRabbitEdu* Ceducated_game;
    int _winner;
};

#endif //PLAYCONTROLLER_H
