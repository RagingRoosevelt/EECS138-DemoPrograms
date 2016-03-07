#include <iostream>

using namespace std;

int main()
{
    char usrChoice;
    bool stillGoing = true;

    while (stillGoing)
    {
        cout << "Choose a menu option:" << endl
             << "a - Option A" << endl
             << "b - Option B" << endl
             << "c - Option C" << endl
             << "d - Exit" << endl
             << "> ";
        cin >> usrChoice;

        cout << endl;

        switch (usrChoice)
        {
        case 'a': case 'A':
            cout << "You picked option A";
            break;
        case 'b': case 'B':
            cout << "You picked option B";
            break;
        case 'c': case 'C':
            cout << "You picked option C";
            break;
        case 'd': case 'D':
            stillGoing = false;
            cout << "Exiting...";
            break;
        default:
            cout << "You didn't make a valid selection.";
        }

        cout << endl;
    }
    
    return 0;
}
