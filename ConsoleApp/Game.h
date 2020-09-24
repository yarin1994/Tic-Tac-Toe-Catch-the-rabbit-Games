//
// Created by Chen Gutman & Yarin Mizrahi on 03/06/2020.
//

#ifndef UNTITLED27_GAME_H
#define UNTITLED27_GAME_H


#include <memory>
#include <vector>
#include <iostream>
#include <string>
#include "time.h"
#include <cstdlib>


using namespace std;

class Game
{
public:
    enum GameState{PlayerWins, ComputerWins, Tie, InProgress};
/*
    virtual void getPlayerMove() = 0;
*/
    virtual void getComputerMove() = 0;
/*
    virtual GameState getGameState() const = 0
*/

};


#endif //UNTITLED27_GAME_H
