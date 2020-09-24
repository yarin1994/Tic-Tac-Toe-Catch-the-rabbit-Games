#include "TicTacToeGame.h"

TicTacToeGame:: TicTacToeGame() : BoardGame(3,3)
{
    cout << "Player 1(X) - Computer(O)" << endl << endl;
    srand (time(NULL));
    showBoardGame();
}
void TicTacToeGame:: getPlayerMove(){
    int player_move;
    int index,row,col;
    bool flag =true;


    while(flag)
    {
        cout<<"Please enter your play move:";
        cin>>player_move;
        if(player_move>=1 && player_move<=9)
        {
            index= player_move-1;
            row = index/3;
            col = index %3;

            _board=getBoardGame();
            placeOnBoard=_board[row][col];


            if(placeOnBoard.compare("X")==0 || placeOnBoard.compare("O")==0) continue; // this position is already taken
            else {
                cout<< "Your move is:"<<placeOnBoard<<endl;
                updateBoard(row,col,"X");
                showBoardGame();
                winner_check();
                break;
            }
        }
        else{
            cout<< "Invalid move!"<<endl<<"You have to play in range 1-9";
            continue;
        }

    }
};
void TicTacToeGame:: winner_check()
{
    _board=getBoardGame();
    bool flag=false;
    string who_won;
    if (_board[0][0] == _board[0][1] && _board[0][1] == _board[0][2]){
        flag=true;
        who_won=_board[0][0];
    }
    else if (_board[1][0] == _board[1][1] && _board[1][1] == _board[1][2]){
        flag=true;
        who_won=_board[1][0];
    }
    else if (_board[2][0] == _board[2][1] && _board[2][1] == _board[2][2]){
        flag=true;
        who_won=_board[2][0];
    }
    else if (_board[0][0] == _board[1][0] && _board[1][0] == _board[2][0]){
        flag=true;
        who_won=_board[0][0];
    }
    else if (_board[0][1] == _board[1][1] && _board[1][1] == _board[2][1]){
        flag=true;
        who_won=_board[0][1];
    }
    else if (_board[0][2] == _board[1][2] && _board[1][2] == _board[2][2]){
        flag=true;
        who_won=_board[0][2];
    }
    else if (_board[0][0] == _board[1][1] && _board[1][1] == _board[2][2]){
        flag=true;
        who_won=_board[0][0];
    }
    else if (_board[0][2] == _board[1][1] && _board[1][1] == _board[2][0]){
        flag=true;
        who_won=_board[0][2];
    }
    else if (_board[0][0] != "1" && _board[0][1] != "2" && _board[0][2] != "3" && _board[1][0] != "4" && _board[1][1] != "5" && _board[1][2] != "6" && _board[2][0] != "7" && _board[2][1] != "8" && _board[2][2] != "9") {
        cout << "It's a TIE!" << endl;
        winner= 2;
        exit(0);
    }
    else winner= 3;

    if (flag==true) {
        if (who_won == "X") {
            cout << "*****Congratulations we have a winner!*****" << endl << "the Player is the winner :)" << endl;
            winner = 0;
            exit(0);
        } else {
            cout << "*****Sorry bud you lost to the Computer :( *****" << endl;
            winner = 1;
            exit(0);
        }
    }
};
int TicTacToeGame:: getWinner(){
    return winner;
}