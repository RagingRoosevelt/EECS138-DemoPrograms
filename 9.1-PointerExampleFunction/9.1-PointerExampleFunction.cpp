#include <iostream>

using namespace std;

void print(int *a, int *b)
{
    cout << endl;
    cout << "*a = " << *a << " @ " << a << endl;
    cout << "*b = " << *b << " @ " << b << endl;
}

int main()
{
    int *a = new int;
    int *b = new int;
    int c = 3;
    *a = 5;
    *b = 6;

    print(a, b);

    a = b;

    print(a, b);

    *b = 7;

    print(a, b);

    b = &c;

    print(a, b);



    return 0;
}
