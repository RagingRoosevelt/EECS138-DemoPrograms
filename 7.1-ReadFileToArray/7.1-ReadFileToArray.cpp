#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    ifstream in;
    in.open("input.txt");

    const int s = 10000;
    int a[s] = {0};

    int i = 0;

    cout << "Trying to store into position " << i << endl;
    while (in >> a[i])
    {
        i++;
        cout << "Trying to store into position " << i << endl;
    }

    for (int j = 0; j < i; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;







    return 0;
}

