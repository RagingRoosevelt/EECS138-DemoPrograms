#include <iostream>
#include <cstdlib>

using namespace std;

void clear_screen()
{
    #ifdef _WIN32
    system("cls");
    #else //In any other OS
    system("clear");
    #endif

}

class TTT
{
private:
    char** board;
    char pieces[2] = {'X', 'O'};
    int s = 0;
public:
    TTT();
    TTT(int size);
    bool winCheck();
    bool placePiece(int row, int col, int p);
    void printBoard();
    char piece(int player);
    bool catsGame();
};

TTT::TTT()
{
    TTT(3);
}

TTT::TTT(const int size)
{
    s = size;
    board = new char*[s];
    for (int i=0; i<s; i++)
    {
        board[i] = new char[s];
        for (int j=0; j<s; j++)
        {
            board[i][j] = ' ';
        }
    }
}

bool TTT::winCheck()
{
    bool gameover = false;
    int diagcheck1 = 0;
    int diagcheck2 = 0;
    for (int i = 0; i < s; i++)
    {
        int rowcheck = 0;
        int colcheck = 0;

        for (int j=0; j<s; j++)
        {
            rowcheck += board[i][j];
            colcheck += board[j][i];
        }
        diagcheck1 += board[i][i];
        diagcheck2 += board[i][2-i];
        if (rowcheck == s*'O' || rowcheck == s*'X' || colcheck == s*'O' || colcheck == s*'X')
        {
            gameover = true;
            break;
        }
    }
    if (diagcheck1 == s*'O' || diagcheck1 == s*'X')
        gameover = true;
    if (diagcheck2 == s*'O' || diagcheck2 == s*'X')
        gameover = true;

    return gameover;
}

bool TTT::catsGame()
{
    for (int i=0; i<s; i++)
    {
        for (int j=0; j<s; j++)
        {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

char TTT::piece(int player)
{
    return pieces[player-1];
}

bool TTT::placePiece(int row, int col, int p)
{
    row--;
    col--;
    if (board[row][col] == ' ')
    {
        board[row][col] = piece(p);
        return true;
    }
    return false;
}

void TTT::printBoard()
{
    clear_screen();
    for (int i = -1; i<s; i++)
    {
        for (int j=-1; j<s; j++)
        {
            if (i==-1 && j == -1)
                cout << "    ";
            else if (i == -1)
            {
                cout << j+1 << "   ";
            }
            else if (j == -1)
            {
                cout << i+1 << " " << "| ";
            }
            else
            {
                cout << board[i][j] << " | " ;
            }
        }

        cout << endl << "  +";
        for (int j=0; j<s; j++)
            cout << "---+";
        cout << endl;
    }

}

int main()
{
    int row, col, turn = 0, player = 0, size;
    bool placed;

    cout << "How big of a game would you like to play? ";
    cin >> size;
    TTT game(size);
    cout << endl << endl;

    while (!game.winCheck() && !game.catsGame())
    {
        player = (player % 2) + 1;
        game.printBoard();
        do
        {
            cout << "Player " << game.piece(player) << ", enter a move (or -1 to quit): ";
            cin >> row;
            if (row == -1)
            {
                cout << "Exiting..." << endl;
                return 0;
            }
            cin >> col;
            placed = game.placePiece(row, col, player);
        }
        while (!placed);
    }
    game.printBoard();

    if (game.catsGame())
    {
        cout << "Cat's game.  Better luck next time!" << endl;
    }
    else
    {
        cout << "Player " << game.piece(player) << " won!" << endl;
    }

    return 0;
}

