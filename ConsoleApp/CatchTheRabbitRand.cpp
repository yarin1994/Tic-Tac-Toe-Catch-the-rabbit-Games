#include "CatchTheRabbitRand.h"

void CatchTheRabbitRand:: computer_make_move(int move){

    if(move == 1)
    {
        updateBoard(_row,_col,_comp_index);
        --_row;
        _comp_index=_board[_row][_col];
        updateBoard(_row,_col,"R");
    }
    else if(move==2){
        updateBoard(_row,_col,_comp_index);
        ++_col;
        _comp_index=_board[_row][_col];
        updateBoard(_row,_col,"R");
    }
    else if(move==3){
        updateBoard(_row,_col,_comp_index);
        ++_row;
        _comp_index=_board[_row][_col];
        updateBoard(_row,_col,"R");
    }
    else{
        updateBoard(_row,_col,_comp_index);
        --_col;
        _comp_index=_board[_row][_col];
        updateBoard(_row,_col,"R");
    }
    showBoardGame();
}
void CatchTheRabbitRand:: getComputerPosition(){
    _board=getBoardGame();
    int counter=0;
    for(int i=0;i<9;i++)
    {
        for (int j = 0; j <9 ; ++j) {
            ++counter;
            if(_board[i][j]=="R")
            {
                _row=i;
                _col=j;
                _comp_index=to_string(counter);
            }
        }
    }
}
string CatchTheRabbitRand:: getCompIndex(){
    return _comp_index;
}
void CatchTheRabbitRand:: getComputerMove() {
    while(true)
    {
        int comp_move=rand()%4+1;
        getComputerPosition();
        if(_row==0 &&_col>0 && _col<8){
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==2 ||comp_move==3||comp_move==4){
                computer_make_move(comp_move);
                break;
            }
        }
        else if(_row==8 &&_col>0 && _col<8 ){
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==1 ||comp_move==2||comp_move==4){
                computer_make_move(comp_move);
                break;
            }
        }
        else if(_col == 0 && _row > 0 && _row < 8)
        {
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==1 ||comp_move==2||comp_move==3){
                computer_make_move(comp_move);
                break;
            }
        }
        else if(_col == 8 && _row >0 && _row <8)
        {
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==1 ||comp_move==3||comp_move==4){
                computer_make_move(comp_move);
                break;
            }
        }
        else if(_col == 0 && _row ==0){
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==2||comp_move==3){
                computer_make_move(comp_move);
                break;
            }
        }
        else if(_row ==0 && _col ==8){
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==3||comp_move==4){
                computer_make_move(comp_move);
                break;
            }
        }
        else if(_row ==8 && _col == 0){
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==1||comp_move==2){
                computer_make_move(comp_move);
                break;
            }
        }
        else if(_row == 8 && _col == 8){
            cout<<"The computer move is:"<<comp_move<<endl;
            if (comp_move==1||comp_move==4) {
                computer_make_move(comp_move);
                break;
            }
        }
        else
        {
            cout<<"The computer move is:"<<comp_move<<endl;
            computer_make_move(comp_move);
            break;
        }

    }

};
