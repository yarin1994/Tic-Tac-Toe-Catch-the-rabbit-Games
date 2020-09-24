#include "CatchTheRabbitGame.h"

CatchTheRabbitGame:: CatchTheRabbitGame() : BoardGame(9, 9)
{
    cout << "Player 1(B) - Computer(R)" << endl << endl;
    srand (time(NULL));
    init_board();
    showBoardGame();
}
void CatchTheRabbitGame:: init_board() {
    _board = getBoardGame();
    while(true){
        int player_index_row = getRandNum()-1;
        int player_index_col = getRandNum()-1;
        int comp_index_row = getRandNum()-1;
        int comp_index_col = getRandNum()-1;
        _player_index=_board[player_index_row][player_index_col];
        _comp_index=_board[comp_index_row][comp_index_col];
        if(_player_index!=_comp_index){
            updateBoard(player_index_row, player_index_col, "B");
            updateBoard(comp_index_row, comp_index_col, "R");
            break;
        }
        else continue;
    }

}
void CatchTheRabbitGame:: make_move(int move){
    if(move == 1)
    {
        updateBoard(_row,_col,_player_index);
        --_row;
        _player_index=_board[_row][_col];
        updateBoard(_row,_col,"B");
    }
    else if(move==2){
        updateBoard(_row,_col,_player_index);
        ++_col;
        _player_index=_board[_row][_col];
        updateBoard(_row,_col,"B");
    }
    else if(move==3){
        updateBoard(_row,_col,_player_index);
        ++_row;
        _player_index=_board[_row][_col];
        updateBoard(_row,_col,"B");
    }
    else{
        updateBoard(_row,_col,_player_index);
        --_col;
        _player_index=_board[_row][_col];
        updateBoard(_row,_col,"B");
    }
    showBoardGame();
}
void CatchTheRabbitGame:: getPlayerMove() {
    int player_move;
    while(true)
    {
        getPlayerPosition();
        if(_row==0 &&_col>0 && _col<8){
            cout<<"Please enter your play move:"<<endl<<"2.RIGHT"<<endl<<"3.DOWN"<<endl<<"4.LEFT"<<endl;
            cin>>player_move;
            if (player_move==2 ||player_move==3||player_move==4){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 2,3 or 4";
                continue;
            }
        }
        else if(_row==8 &&_col>0 && _col<8 ){
            cout<<"Please enter your play move:"<<endl<<"1.UP"<<endl<<"2.RIGHT"<<endl<<"4.LEFT"<<endl;
            cin>>player_move;
            if (player_move==1 ||player_move==2||player_move==4){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 1,2 or 4";
                continue;
            }
        }
        else if(_col == 0 && _row != 0 && _row != 8)
        {
            cout<<"Please enter your play move:"<<endl<<"1.UP"<<endl<<"2.RIGHT"<<endl<<"3.DOWN"<<endl;
            cin>>player_move;
            if (player_move==1 ||player_move==2||player_move==3){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 1,2 or 3";
                continue;
            }

        }
        else if(_col == 8 && _row != 0 && _row != 8)
        {
            cout<<"Please enter your play move:"<<endl<<"1.UP"<<endl<<"3.DOWN"<<endl<<"4.LEFT"<<endl;
            cin>>player_move;
            if (player_move==1 ||player_move==3||player_move==4){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 1,3 or 4";
                continue;
            }
        }
        else if(_col == 0 && _row ==0){
            cout<<"Please enter your play move:"<<endl<<"2.RIGHT"<<endl<<"3.DOWN"<<endl;
            cin>>player_move;
            if (player_move==2||player_move==3){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 2 or 3";
                continue;
            }
        }
        else if(_row ==0 && _col ==8){
            cout<<"Please enter your play move:"<<endl<<"3.DOWN"<<endl<<"4.LEFT"<<endl;
            cin>>player_move;
            if (player_move==3||player_move==4){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 3 or 4";
                continue;
            }
        }
        else if(_row ==8 && _col == 0){
            cout<<"Please enter your play move:"<<endl<<"1.UP"<<endl<<"2.RIGHT"<<endl;
            cin>>player_move;
            if (player_move==1||player_move==2){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 1 or 2";
                continue;
            }
        }
        else if(_row == 8 && _col == 8){
            cout<<"Please enter your play move:"<<endl<<"1.UP"<<endl<<"4.LEFT"<<endl;
            cin>>player_move;
            if (player_move==1||player_move==4) {
                make_move(player_move);
                break;
            }

            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 1 or 4";
                continue;
            }
        }
        else{
            cout<<"Please enter your play move:"<<endl<<"1.UP"<<endl<<"2.RIGHT"<<endl<<"3.DOWN"<<endl<<"4.LEFT"<<endl;
            cin>>player_move;
            if (player_move==1||player_move==2 ||player_move==3||player_move==4){
                make_move(player_move);
                break;
            }
            else{
                cout<< "Invalid move!"<<endl<<"You have to choose 1,2,3 or 4";
                continue;
            }

        }

    }

}
void CatchTheRabbitGame:: winner_check(int counter)
{
    if (counter <10 && _player_index!="R"){
        winner=3;
    }
    else if (counter <10 && _player_index=="R"){
        cout << "*****Congratulations we have a winner!*****" << endl << "the Player is the winner :)" << endl;
        updateBoard(_row,_col,"B+R");
        winner =0;
    }
    else {
        winner = 1;
        cout << "*****Sorry bud you lost to the Computer :( *****" << endl;
    }
}
int CatchTheRabbitGame:: getWinner() {
    return winner;
}
void CatchTheRabbitGame:: getPlayerPosition(){
    _board=getBoardGame();
    for(int i=0;i<9;i++)
    {
        for (int j = 0; j <9 ; ++j) {
            if(_board[i][j]=="B")
            {
                _row=i;
                _col=j;

            }
        }
    }
}
string CatchTheRabbitGame:: getPlayerIndex(){
    return _player_index;
}
string CatchTheRabbitGame:: getFirstCompPosition(){
    return _comp_index;
}