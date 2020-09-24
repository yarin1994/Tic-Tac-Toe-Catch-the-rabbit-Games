#include "BoardGame.h"

BoardGame:: BoardGame(int rows, int cols) : _rows(rows), _cols(cols)
{
    int counter = 1;
    for (int i = 0; i < rows; ++i)
    {

        vector<string> x;
        _board.push_back(x);
        for (int j = 0; j < cols; ++j)
        {
            _board[i].push_back(to_string(counter));
            ++counter;
        }
    }

}
void BoardGame:: showBoardGame(){

    cout<<"\033[0m"<<"-------"<<endl;
    for(int i=0;i<_rows;i++){
        cout<<"|";
        for(int j=0;j<_cols;j++){
            if(_board[i][j]=="X"|| _board[i][j]=="B")
            {
                cout<<"\033[32m"<<_board[i][j]<< "\033[0m"<<"|";
            }
            else if(_board[i][j]=="O"|| _board[i][j]=="R"){
                cout<<"\033[31m"<<_board[i][j]<<"\033[0m"<<"|";
            }

            else cout<<"\033[0m"<<_board[i][j]<<"|";
        }
        cout<<endl <<"-------"<<endl;
    }
}
void BoardGame:: updateBoard(int row,int col,string c){
    _board[row][col] = c;
}
vector< vector<string>> BoardGame:: getBoardGame()
{
    return _board;
}
int BoardGame:: getRandNum(){
    int number = rand() % 9 + 1;
    return number;
}