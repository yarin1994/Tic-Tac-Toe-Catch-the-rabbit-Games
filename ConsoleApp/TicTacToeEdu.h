
#ifndef TICTACTOEEDU_H
#define TICTACTOEEDU_H

#include "TicTacToeGame.h"


class TicTacToeEdu : public TicTacToeGame
{
public:
    void getComputerMove();

private:
    string placeOnBoard;
    vector<vector<string>> _board;
};
#endif //TICTACTOEEDU_H
