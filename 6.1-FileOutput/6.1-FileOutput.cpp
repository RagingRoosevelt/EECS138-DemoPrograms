#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    int a=0;
    int b=1;
    ofstream file;
    file.open("6.1-FileOutput_out.txt");
    if (file.fail())
    {
        cout << "error: Problem opening file.\n";
        exit(1);
    }

    for (int i=1; i<= 100; i++)
    {
        file << a << endl;
        b=a+b;
        a=b-a;
    }
    file.close();

    return 0;
}
