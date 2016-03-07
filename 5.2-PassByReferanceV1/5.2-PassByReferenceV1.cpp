#include <iostream>

using namespace std;


void getValues(int& val1, int& val2)
{
    cout << "Enter the two values separated by a space: ";
    cin >> val1 >> val2;
}

/*void addToValues(int val1, int& val2)
{
    val1 += 2;
    val2 += 3;

    cout << "(" << val1 << ", " << val2 << ")" << endl;
}*/

int main()
{
    int value1, value2;

    getValues(value1, value2);

    cout << "Values 1 and 2 were collected from the user.  They are " << value1 << " and " << value2 << "." << endl;

    /*addToValues(value1, value2);

    cout << "(" << value1 << ", " << value2 << ")" << endl;*/
    
    return 0;
}
