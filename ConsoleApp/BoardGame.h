#ifndef BOARDGAME_H
#define BOARDGAME_H

#include "Game.h"

class BoardGame : public Game
{
public:
    BoardGame(int rows, int cols);
    void showBoardGame();
    void updateBoard(int row,int col,string c);
    vector< vector<string>> getBoardGame();
    int getRandNum();
private:
    int _rows;
    int _cols;
    vector<vector<string>> _board;

};

#endif //BOARDGAME_H
