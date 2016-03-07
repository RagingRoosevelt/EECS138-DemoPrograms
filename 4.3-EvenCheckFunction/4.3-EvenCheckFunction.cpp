#include <iostream>

using namespace std;

bool evenCheck(int val);  // function declaration

int main()
{
    int usrStop;
    cout << "What's the largest value you'd like to check?\n> ";
    cin >> usrStop;

    for (int i = 1; i <= usrStop; i++)
    {
        cout << i << ": ";
        if (evenCheck(i)) // function call inside if statement's condition
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }
        cout << endl;
    }
    
    return 0;
}

// function definition
bool evenCheck(int val)// function header
{// function body
    if (val % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
