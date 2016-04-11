#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main()
{
    char s[1000];
    cout << "Enter a file to open: ";
    cin >> s;
    int i = 0;
    while (i < 1000)
    {
        if (s[i] == '\0')
            break;
        i++;
    }
    s[i] = '.';
    s[i+1] = 't';
    s[i+2] = 'x';
    s[i+3] = 't';
    s[i+4] = '\0';
    ifstream in;
    in.open(s);

    if (in.fail())
    {
        cout << "That file didn't open, sorry!" << endl;
        return 1;
    }

    char c;
    while (!in.eof())
    {
        c = in.get();
        cout << c;
    }
    cout << endl;

    in.close();

    return 0;
}

