#include <iostream>

using namespace std;

int searchArray(const int arr[], int arr_size, int query);

int main()
{
    int arr[] = {1, 3, 4, 8, 10, 12, 13, 15, 20}; // set up a sorted array
    int arr_size = 9; // record the size of the array

    int query;
    cout << "What number would you like to search for? ";
    cin >> query;

    cout << query << " located at position " << searchArray(arr, arr_size, query) << endl;

    return 0;
}

int searchArray(const int arr[], int arr_size, int query)
{
    int a=0;
    int b=arr_size-1;
    int m;

    if (arr[a] == query) {return a;} // check left endpoint
    if (arr[b] == query) {return b;} // check right endpoint

    while (true)
    {
        m = (a+b)/2; // this will automatically round down;
        cout << "Checking interval: "
             << "(arr[" << a << "], arr[" << m << "], arr[" << b << "])"
             << " = (" << arr[a] << ", " << arr[m] << ", " << arr[b] << ")"
             << endl;

        if (arr[m] == query) {return m;} // did we find the query?
        else if (b-a <= 1) {return -1;} // we didn't find the query in previous test and we can't shrink the interval any further
        else if (query < arr[m]) {b = m;} // is the query to the left of the midpoint?
        else if (arr[m] < query) {a = m;} // is the query to the right of the midpoint?
    }

    return -1;
}

