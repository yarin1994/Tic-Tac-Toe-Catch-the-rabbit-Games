#include "TicTacToeRand.h"

void TicTacToeRand:: getComputerMove(){
    bool flag = true;
    while(flag)
    {
        int rand_move=getRandNum();
        int row = (rand_move-1)/3;
        int col = (rand_move-1)%3;

        _board =getBoardGame();
        placeOnBoard = _board[row][col];

        if(placeOnBoard=="X" || placeOnBoard =="O") continue; // this position is already taken
        else {
            cout<< "the computer's move is:"<<placeOnBoard<<endl;
            updateBoard(row,col,"O");
            showBoardGame();
            winner_check();
            break;
        }
    }
};