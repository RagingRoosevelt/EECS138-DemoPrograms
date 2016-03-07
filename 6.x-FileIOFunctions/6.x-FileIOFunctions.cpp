#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    in.open("6.x-FileIOFunctions.txt");
    char c;

    char menu;
    cout << "Would you like to" << endl
         << "1 - Read the file" << endl
         << "2 - Count the number of lines" << endl
         << "> ";
    cin >> menu;

    if (menu == '1')
    { // reading the file

        while (!in.eof()) // keep going until we reach the end of the file
        {
            c = in.get(); // get the next character

            if (c == '\n') // check if the next character was a newline
            {
                cout << c << "\n"; // if it was a newline, print it and another newline
            }
            else
            {
                cout << c; // otherwise, just print the character
            }
        }
        cout << endl;
    }
    else if (menu == '2')
    { // count the number of lines in the file

        int lineCount = 1; // assume that there's at least a single line

        while (!in.eof()) // keep going until we reach the end of the file
        {
            if (in.peek() == '\n') // check if the next character is going to be a newline
            {
                lineCount += 1; // if it is, increment our newline count
            }
            in.ignore(1); // ignore whatever the character was to advance our reading position
        }

        cout << "There were " << lineCount << " lines in that file." << endl;  // output the line count
    }

    return 0;
}
