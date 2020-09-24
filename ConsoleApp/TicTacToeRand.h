#ifndef TICTACTOERAND_H
#define TICTACTOERAND_H

#include "TicTacToeGame.h"


class TicTacToeRand : public TicTacToeGame
{
public:
    void getComputerMove();

private:
    string placeOnBoard;
    vector<vector<string>> _board;
};
#endif //TICTACTOERAND_H