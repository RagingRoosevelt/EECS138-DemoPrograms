#include <iostream>

using namespace std;

void fill_array(double a[], int size);
void print_array(double a[], int size);

int main()
{
    // declare a new type
    typedef double* DoublePtr;
    // set up p as a pointer
    DoublePtr p;

    int Array_Size;
    cout << "how big of an array? ";
    cin >> Array_Size;


    // set a double array to p
    p = new double [Array_Size];
    // note that we're still using double* even though this is an array

    fill_array(p, Array_Size);
    print_array(p, Array_Size);

    return 0;
}



void fill_array(double a[], int size)
{
    double temp;
    cout << "Enter values for the array:\n";
    for (int i=0; i<size; i++)
    {
        cin >> temp;
        a[i] = temp;
    }

    return;
}


void print_array(double a[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return;
}
