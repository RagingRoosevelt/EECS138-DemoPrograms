#include <iostream>
#include <cmath>

using namespace std;

void sortArray(int arr[], int s);

void swapElements(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void printArray(int arr[], int s)
{
    for (int i=0; i<s; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int a[] = {23,234,12, 122, 353, 123, 236};
    printArray(a, 7);
    sortArray(a, 7);
    printArray(a, 7);

    return 0;
}

void sortArray(int arr[], int s)
{
    for (int out=s-1; out>1; out--)
    {
        for (int in=0; in<out; in++)
        {
            if (arr[in] > arr[in+1])
                swapElements(arr[in], arr[in+1]);
        }
    }

    return;
}
