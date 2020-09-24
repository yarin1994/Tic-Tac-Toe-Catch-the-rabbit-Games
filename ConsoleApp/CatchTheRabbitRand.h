
#ifndef CATCHTHERABBITRAND_H
#define CATCHTHERABBITRAND_H


#pragma once


#include "CatchTheRabbitGame.h"



class CatchTheRabbitRand : public CatchTheRabbitGame
{
public:
    void computer_make_move(int move);
    void getComputerPosition();
    string getCompIndex();
    void getComputerMove();

private:
    vector<vector<string>> _board;
    int _row,_col;
    string _comp_index;
};
#endif //CATCHTHERABBITRAND_H
