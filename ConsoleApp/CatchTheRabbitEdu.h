#ifndef CATCHTHERABBITEDU_H
#define CATCHTHERABBITEDU_H
#pragma once


#include "CatchTheRabbitGame.h"


class CatchTheRabbitEdu : public CatchTheRabbitGame
{
public:
    void computer_make_move(int move);
    void getComputerPosition();
    void getComputerMove();
    bool enemy_around();
    string getCompIndex();
private:
    vector<vector<string>> _board;
    int _row, _col,_enemyPosition,_counter;
    string _comp_index;
};

#endif //CATCHTHERABBITEDU_H
