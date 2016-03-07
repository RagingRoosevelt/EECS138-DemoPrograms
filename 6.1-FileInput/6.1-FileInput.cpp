#include <iostream>
#include <fstream>

using namespace std;

void readVals(ifstream& in);

int main()
{
    ifstream inFile;
    // make sure you you have a file called input.txt in the same folder as the source code.
    inFile.open("6.1-FileInput_in.txt");

    if (inFile.fail())
    {
        cout << "Failed to open file, sorry." << endl;
        return 1;
    }

    readVals(inFile);

    inFile.close();

    return 0;
}

void readVals(ifstream& in)
{
    int val;

    while (in >> val)
    {
        cout << val << endl;
    }
}
