#include "CatchTheRabbitEdu.h"

void CatchTheRabbitEdu:: computer_make_move(int move) {

    if (move == 1)
    {
        updateBoard(_row, _col, _comp_index);
        --_row;
        _comp_index = _board[_row][_col];
        updateBoard(_row, _col, "R");
    }
    else if (move == 2) {
        updateBoard(_row, _col, _comp_index);
        ++_col;
        _comp_index = _board[_row][_col];
        updateBoard(_row, _col, "R");
    }
    else if (move == 3) {
        updateBoard(_row, _col, _comp_index);
        ++_row;
        _comp_index = _board[_row][_col];
        updateBoard(_row, _col, "R");
    }
    else {
        updateBoard(_row, _col, _comp_index);
        --_col;
        _comp_index = _board[_row][_col];
        updateBoard(_row, _col, "R");
    }
    showBoardGame();
}
void CatchTheRabbitEdu:: getComputerPosition() {
    _board = getBoardGame();
    _counter = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; ++j) {
            ++_counter;
            if (_board[i][j] == "R")
            {
                _row = i;
                _col = j;
                _comp_index = to_string(_counter);
            }
        }
    }
}
void CatchTheRabbitEdu:: getComputerMove()
{
    bool flag_around = enemy_around();
    int comp_move;
    while (true)
    {
        comp_move = rand() % 4 + 1;
        getComputerPosition();

        if (_row == 0 && _col > 0 && _col < 8) {
            if (flag_around && _enemyPosition == 3) {
                comp_move = 2;
                computer_make_move(comp_move);
                break;
            }
            else if (comp_move != 1){
                computer_make_move(comp_move);
                break;
            }
        }
        else if (_row == 8 && _col > 0 && _col < 8) {
            if (flag_around && _enemyPosition == 1) {
                comp_move = 4;
                computer_make_move(comp_move);
                break;
            }
            else if (comp_move != 3) {
                computer_make_move(comp_move);
                break;
            }
        }
        else if (_col == 0 && _row > 0 && _row < 8)
        {
            if (flag_around && _enemyPosition == 2) {
                comp_move = 1;
                computer_make_move(comp_move);
                break;
            }
            else if (comp_move != 4) {
                computer_make_move(comp_move);
                break;
            }
        }
        else if (_col == 8 && _row > 0 && _row < 8)
        {
            if (flag_around && _enemyPosition == 4) {
                comp_move = 3;
                computer_make_move(comp_move);
                break;
            }
            else if (comp_move != 2 ) {
                computer_make_move(comp_move);
                break;
            }
        }
        else if (_col == 0 && _row == 0) {
            if (flag_around && _enemyPosition == 2) {
                comp_move = 3;
                computer_make_move(comp_move);
                break;
            }
            if (flag_around && _enemyPosition == 3) {
                comp_move = 2;
                computer_make_move(comp_move);
                break;
            }
            else if (comp_move == 2 || comp_move == 3) {
                computer_make_move(comp_move);
                break;
            }
        }
        else if (_row == 0 && _col == 8) {
            if (flag_around && _enemyPosition == 4) {
                comp_move = 3;
                computer_make_move(comp_move);
                break;
            }
            if (flag_around && _enemyPosition == 3) {
                comp_move = 4;
                computer_make_move(comp_move);
                break;
            }
            if (comp_move == 3 || comp_move == 4) {
                computer_make_move(comp_move);
                break;
            }
        }
        else if (_row == 8 && _col == 0) {
            if (flag_around && _enemyPosition == 1) {
                comp_move = 2;
                computer_make_move(comp_move);
                break;
            }
            if (flag_around && _enemyPosition == 2) {
                comp_move = 1;
                computer_make_move(comp_move);
                break;
            }
            else if (comp_move == 1 || comp_move == 2) {
                computer_make_move(comp_move);
                break;
            }
        }
        else if (_row == 8 && _col == 8) {
            if (flag_around && _enemyPosition == 1) {
                comp_move = 4;
                computer_make_move(comp_move);
                break;
            }
            if (flag_around && _enemyPosition == 4) {
                comp_move = 1;
                computer_make_move(comp_move);
                break;
            }
            else if (comp_move == 1 || comp_move == 4) {
                computer_make_move(comp_move);
                break;
            }
        }
        else
        {
            if (flag_around) {
                if(comp_move != _enemyPosition) {
                    computer_make_move(comp_move);
                    break;
                }
            }
            else computer_make_move(comp_move);
            break;
        }

    }
    cout << "The computer move is:" << comp_move << endl;

};

bool CatchTheRabbitEdu:: enemy_around() {

    int computerFirst, player,computer;
    player = stoi(getPlayerIndex());
    cout<<_comp_index;

    if(_counter==0){
        computer = stoi(getFirstCompPosition());
    }
    else computer= stoi(getCompIndex());


    if (player == computer - 9) {
        _enemyPosition = 1;
        return true;
    }
    else if (player == computer + 1)
    {
        _enemyPosition = 2;
        return true;
    }
    else if (player == computer + 9)
    {
        _enemyPosition = 3;
        return true;
    }
    else if (player == computer - 1)
    {
        _enemyPosition = 4;
        return true;
    }
    return false;

};


string CatchTheRabbitEdu:: getCompIndex(){
    return _comp_index;
}