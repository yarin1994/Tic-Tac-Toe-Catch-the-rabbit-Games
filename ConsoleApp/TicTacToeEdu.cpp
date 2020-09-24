#include "TicTacToeEdu.h"

void TicTacToeEdu:: getComputerMove() {

    bool flag = true;

    while (flag)
    {
        _board = getBoardGame();

        if ((_board[0][0] == _board[0][1]) && (_board[0][0] == "X") && (_board[0][2] == "3")) {
            placeOnBoard = _board[0][0]; //input 3
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][0] == _board[0][2]) && (_board[0][0] == "X") && (_board[0][1] == "2")) {
            placeOnBoard = _board[0][1]; //input  2
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 1, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][0] == _board[1][0]) && (_board[0][0] == "X") && (_board[2][0] == "7")) {
            placeOnBoard = _board[2][0]; //inpupt 7
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][0] == _board[2][0]) && (_board[0][0] == "X") && (_board[1][0] == "4")) {
            placeOnBoard = _board[1][0]; //input 4
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][0] == _board[1][1]) && (_board[0][0] == "X") && (_board[2][2] == "9")) {
            placeOnBoard = _board[2][2]; //input 9
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2, 2, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][0] == _board[2][2]) && (_board[0][0] == "X") && (_board[1][1] == "5")) {
            placeOnBoard = _board[1][1]; //input 5
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 1, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][1] == _board[0][2]) && (_board[0][1] == "X") && (_board[0][0] == "1")) {
            placeOnBoard = _board[0][0]; //input 1
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][1] == _board[1][1]) && (_board[0][1] == "X") && (_board[2][1] == "8")) {
            placeOnBoard = _board[2][1]; //input 8
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2, 1, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][1] == _board[2][1]) && (_board[0][1] == "X") && (_board[1][1] == "5")) {
            placeOnBoard = _board[1][1]; //input 5
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 1, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][2] == _board[1][2]) && (_board[0][2] == "X") && (_board[2][2] == "9")) {
            placeOnBoard = _board[2][2]; //input 9
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2, 2, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][2] == _board[2][2]) && (_board[0][2] == "X") && (_board[1][2] == "6")) {
            placeOnBoard = _board[1][2]; //input 6
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 2, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][2] == _board[2][0]) && (_board[0][2] == "X") && (_board[1][1] == "5")) {
            placeOnBoard = _board[1][1]; //input 5
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 1, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[0][2] == _board[1][1]) && (_board[0][2] == "X") && (_board[2][0] == "7")) {
            placeOnBoard = _board[2][0]; //input 7
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][0] == _board[1][1]) && (_board[1][0] == "X") && (_board[1][2] == "6")) {
            placeOnBoard = _board[1][2]; //input 6
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 2, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][0] == _board[1][2]) && (_board[1][0] == "X") && (_board[1][1] == "5")) {
            placeOnBoard = _board[1][1]; //input 5
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 1, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][0] == _board[2][0]) && (_board[1][0] == "X") && (_board[0][0] == "1")) {
            placeOnBoard = _board[0][0]; //input 1
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][1] == _board[1][2]) && (_board[1][1] == "X") && (_board[1][0] == "4")) {
            placeOnBoard = _board[1][0]; //input 4
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(1, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][1] == _board[2][0]) && (_board[1][1] == "X") && (_board[0][2] == "3")) {
            placeOnBoard = _board[0][2]; //input 3
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 2, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][1] == _board[2][1]) && (_board[1][1] == "X") && (_board[0][1] == "2")) {
            placeOnBoard = _board[0][1]; //input 2
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 1, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][1] == _board[2][2]) && (_board[1][1] == "X") && (_board[0][0] == "1")) {
            placeOnBoard = _board[2][2]; //input 9
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[1][2] == _board[2][2]) && (_board[1][2] == "X") && (_board[0][2] == "3")) {
            placeOnBoard = _board[0][2]; //input 3
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(0, 2, "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[2][0] == _board[2][1]) && (_board[2][0] == "X") && (_board[2][2] == "9")) {
            placeOnBoard = _board[2][2]; //input 9
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2,2 , "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[2][0] == _board[2][2]) && (_board[2][0] == "X") && (_board[2][1] == "8")) {
            placeOnBoard = _board[2][1]; //input 8
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2,1 , "O");
            showBoardGame();
            winner_check();
            break;
        }
        else if ((_board[2][1] == _board[2][2]) && (_board[2][1] == "X") && (_board[2][0] == "7")) {
            placeOnBoard = _board[2][0]; //input 7
            cout << "the computer's move is:" << placeOnBoard << endl;
            updateBoard(2, 0, "O");
            showBoardGame();
            winner_check();
            break;
        }

        else {
            int rand_move = getRandNum();
            int row = (rand_move - 1) / 3;
            int col = (rand_move - 1) % 3;

            _board = getBoardGame();
            placeOnBoard = _board[row][col];

            if (placeOnBoard == "X" || placeOnBoard == "O") continue; // this position is already taken
            else {
                cout << "the computer's move is:" << placeOnBoard << endl;
                updateBoard(row, col, "O");
                showBoardGame();
                winner_check();
                break;
            }

        }
    }
};