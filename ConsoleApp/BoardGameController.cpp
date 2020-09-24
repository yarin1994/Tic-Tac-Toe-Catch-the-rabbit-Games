#include "BoardGameController.h"

BoardGameController ::BoardGameController() {
    playGame();
}

void BoardGameController::start_Rabbit_game(){
    cout << "Welcome to Catch The Rabbit Game" << endl << "Please choose your difficulty level" << endl << "1.Random Game" << endl << "2.Educated Game" << endl;
    int n;
    cin >> n;
    int counter=0;
    if (n == 1) {
        Crandom_game = new CatchTheRabbitRand();
        Crandom_game->winner_check(counter);
        _winner = Crandom_game->getWinner();

        while (_winner == 3) {
            ++counter;
            Crandom_game->getPlayerMove();
            Crandom_game->winner_check(counter);
            _winner = Crandom_game->getWinner();
            if (_winner == 0 || _winner == 1)
            {
                cout << "bye";
                exit(0);
            }
            else Crandom_game->getComputerMove();
        }


    }
    else if (n == 2) {
        Ceducated_game =new CatchTheRabbitEdu;
        Ceducated_game->winner_check(counter);
        _winner = Ceducated_game->getWinner();
        while (_winner == 3) {
            ++counter;
            Ceducated_game->getPlayerMove();
            Ceducated_game->winner_check(counter);
            _winner = Ceducated_game->getWinner();
            if (_winner == 0 || _winner == 1)
            {
                cout << "bye";
                exit(0);
            }
            else Ceducated_game->getComputerMove();
        }

    }
    else
        cout << "INVALID OPTION!" << endl << "choose 1/2." << endl;


}

void BoardGameController::start_TicTacToe_game() {
    cout << "Welcome to TicTacToe game" << endl << "Please choose your difficulty level:" << endl << "1.Random Game" << endl << "2.Educated Game" << endl;
    int n;
    cin >> n;
    if (n == 1) {
        Trandom_game = new TicTacToeRand();// play random game
        Trandom_game->winner_check();
        _winner = Trandom_game->getWinner();

        while (_winner == 3)
        {
            _winner = Trandom_game->getWinner();
            Trandom_game->getPlayerMove();
            Trandom_game->getComputerMove();
            _winner = Trandom_game->getWinner();
        }

    }
    else if (n == 2) {
        Teducated_game = new TicTacToeEdu;
        Teducated_game->winner_check();
        _winner = Teducated_game->getWinner();

        while (_winner == 3)
        {
            _winner = Teducated_game->getWinner();
            Teducated_game->getPlayerMove();
            Teducated_game->getComputerMove();
            _winner = Teducated_game->getWinner();
        }
    }
    else
        cout << "INVALID OPTION!" << endl << "choose 1/2." << endl;

}

void BoardGameController::playGame() {
    cout << "Welcome our Game Zone" << endl << "Which Game do you want to play?" << endl << "1.Tic Tac Toe Game" << endl << "2.Catch the Rabbit Game" << endl;
    int n;
    cin >> n;
    if (n == 1) start_TicTacToe_game();
    else if (n == 2) start_Rabbit_game();
    else
        cout << "INVALID OPTION!" << endl << "choose 1/2." << endl;
}