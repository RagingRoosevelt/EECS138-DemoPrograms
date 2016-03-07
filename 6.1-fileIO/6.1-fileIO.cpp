#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("6.1-fileIO_in.txt");
    outFile.open("6.1-fileIO_out.txt");

    int var1;

    while (inFile >> var1)
    {
        cout << var1 << " -> " << 2 * var1 << endl;
        outFile << 2 * var1 << endl;
    }

    inFile.close();
    outFile.close();
    
    return 0;
}
