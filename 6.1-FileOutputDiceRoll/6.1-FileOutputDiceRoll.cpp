#include <iostream>
#include <fstream> // for file io
#include <cstdlib> // for srand and rand function calls
#include <ctime> // for time(0) function call

using namespace std;

int main()
{
    ofstream outFile;
    outFile.open("6.1-FileOutputDiceRoll_out.txt");
    srand(time(0));

    for (int i=1; i<=10; i++)
    {
        outFile << rand() % 6 + 1 << endl;
    }

    outFile.close();

    return 0;
}
