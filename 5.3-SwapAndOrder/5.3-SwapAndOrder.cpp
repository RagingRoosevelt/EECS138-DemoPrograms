#include <iostream>

using namespace std;

void getValues(int& val1, int& val2);
void swapValues(int& val1, int& val2);
void orderValues(int& val1, int& val2);

int main()
{
    int value1, value2;
    getValues(value1, value2);
    cout << "entered values: (" << value1 << ", " << value2 << ")" << endl;
    orderValues(value1, value2);
    cout << "ordered values: (" << value1 << ", " << value2 << ")" << endl;
    
    return 0;
}

void orderValues(int& val1, int& val2)
{
    if (val1 < val2)
    {
        swapValues(val1, val2);
    }
}

void swapValues(int& val1, int& val2)
{
    int temp;

    temp = val1;

    val1 = val2;
    val2 = temp;
}

void getValues(int& val1, int& val2)
{
    cout << "Enter the two values separated by a space: ";
    cin >> val1 >> val2;
}
