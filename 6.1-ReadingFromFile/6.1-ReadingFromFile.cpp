// This program requires a file called 'numbers.txt' to be in the same folder.
// The file must contain numbers separated by spaces.

#include <iostream>
#include <fstream>

void readMethodOne();
void readMethodTwo();

int main()
{
    using namespace std;

    int version = -1;
    cout << "Which version would you like to use (1 or 2)?\n> ";
    cin >> version;

    if (version == 1)
    {
        readMethodOne();
    }
    else if (version == 2)
    {
        readMethodTwo();
    }
    else
    {
        readMethodOne();
    }

}


void readMethodOne()
// This version reads 3 values from the file.
// It'll run into issues if there are fewer than 3 values in the file
{
    using namespace std;

    // input file stream variable declaration
    ifstream inputFile;
    // attach the stream to a file
    inputFile.open("6.1-ReadingFromFile_in.txt");

    int val1, val2, val3;
    // reading from the file happens here
    inputFile >> val1 >> val2 >> val3;

    // close the file
    inputFile.close();

    cout << "The first value read was  " << val1 << endl
         << "The second value read was " << val2 << endl
         << "The third value read was  " << val3 << endl;
}



void readMethodTwo()
// this version reads until it reaches the end of the file
{
    using namespace std;

    // input file stream variable declaration
    ifstream inputFile;
    // attach the stream to a file
    inputFile.open("6.1-ReadingFromFile_in.txt");

    // reading from the file happens here
    int value, counter = 0;

    while (inputFile >> value)
    {
        counter++;
        cout << "The value #" << counter << " is " << value << endl;
    }

    // close the file
    inputFile.close();
}
