#ifndef CATCHTHERABBITGAME_H
#define CATCHTHERABBITGAME_H

#include "BoardGame.h"
#include <cstring>
#include <string>
#include "time.h"

class CatchTheRabbitGame : public BoardGame
{
public:
    CatchTheRabbitGame();
    void init_board();
    void make_move(int move);
    void getPlayerMove();
    void winner_check(int counter);
    int getWinner();
    void getPlayerPosition();
    string getPlayerIndex();
    string getFirstCompPosition();


private:
    vector<vector<string>> _board;
    int winner;
    string _comp_index,_player_index;
    int _row ,_col;

};


#endif //UNTITLED27_CATCHTHERABBITGAME_H
