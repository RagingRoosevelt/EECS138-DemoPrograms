#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    char mark;
public:
    Player();
    char getMark();
    string getName();
    int putMark();
};
Player::Player()
{
    cout << "What is your name? ";
    cin >> name;
    cout << "What single-character mark would you like to use? ";
    cin >> mark;
}
char Player::getMark()
{
    return mark;
}
int Player::putMark()
{
    int x,y;
    cout << name << ", using x and y values, where would you like to play? ";
    cin >> x >> y;
    return (x-1) + 3*(y-1);
}
string Player::getName()
{
    return name;
}

class Game {
private:
    Player p[2];
    int activePlayer = 0;
    char board[9];
    int turnsTaken = 0;
public:
    Game();
    char checkWin();
    void takeTurn();
    void printBoard();
    string getWinner();
};
Game::Game()
{
    for (int i=0; i<9; i++)
    {
        board[i] = ' ';
    }
}
void Game::printBoard()
{
    for (int y=0; y<3; y++)
    {
        for (int x=0; x<3; x++)
        {
            cout << " " << board[y*3+x];
            if (x != 2)
                cout << " |";
        }
        cout << endl;
        if (y != 2)
            for (int i=0; i < 3*4; i++)
            {
                cout << "-";
            }
        cout << endl;

    }
}
char Game::checkWin()
{
    // check all rows
    for (int offset = 0; offset <= 6; offset+=3)
    {
        if (board[0+offset] == board[1+offset]
            && board[1+offset] == board[2+offset]
            && board[0+offset] != ' ')
        {
            return board[0+offset];
        }
    }
    // check all columns
    for (int offset = 0; offset <=2; offset+=1)
    {
        if (board[0+offset] == board[3+offset]
            && board[3+offset] == board[6+offset]
            && board[0+offset] != ' ')
        {
            return board[0+offset];
        }
    }
    // check diag 1
    if (board[0] == board[4]
        && board[4] == board[8]
        && board[0] != ' ')
    {
        return board[0];
    }
    // check diag 2
    if (board[2] == board[4]
        && board[4] == board[6]
        && board[2] != ' ')
    {
        return board[2];
    }

    // check cats game
    if (turnsTaken == 9)
    {
        return '-';
    }

    // else still playing
    return ' ';
}
void Game::takeTurn()
{
    printBoard();
    int loc = p[activePlayer].putMark();
    board[loc] = p[activePlayer].getMark();
    turnsTaken++;
    activePlayer = (activePlayer+1)%2;
}
string Game::getWinner()
{
    char winningMark = checkWin();
    if (winningMark == '-')
    {
        return "The Cat";
    }

    for (int i=0; i<2; i++)
    {
        if (p[i].getMark() == winningMark)
        {
            return p[i].getName();
        }
    }
}

int main()
{
    Game g;

    while (g.checkWin() == ' ')
    {
        g.takeTurn();
    }

    g.printBoard();
    cout << g.getWinner() << " won" << endl;

    return 0;
}
