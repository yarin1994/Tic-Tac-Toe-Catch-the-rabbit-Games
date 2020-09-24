#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H


#include "BoardGame.h"

//
// 1 2 3
// 4 5 6
// 7 8 9
//

class TicTacToeGame : public BoardGame
{
public:
    TicTacToeGame();
    void getPlayerMove();
    void winner_check();
    int getWinner();

private:
    string placeOnBoard;
    vector<vector<string>> _board;
     int winner;

};


#endif //TICTACTOEGAME_H
