#include <iostream>

using namespace std;

int main()
{
    // set up 'multiDimArray' as a double-pointer
    int** multiDimArray;

    // create the first layer of the 2D array as an array of pointers
    multiDimArray = new int* [3];

    // go through each element in the above array and make each element point to an array of ints
    for (int i=0; i < 3; i++)
    {
        multiDimArray[i] = new int[5];
    }

    // store values in the array like normal
    for (int i=0; i < 3; i++)
    {
        for (int j=0; j < 5; j++)
        {
            multiDimArray[i][j] = i+j;
        }
    }

    // print out values in the array, again, as normal
    for (int i=0; i < 3; i++)
    {
        for (int j=0; j < 5; j++)
        {
            cout << multiDimArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
