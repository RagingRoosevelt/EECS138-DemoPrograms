#include <iostream>

using namespace std;

int main()
{
    // set up several pointers
    double *p1;
    p1 = new double;
    double *p2 = NULL;

    // assign a value to the memory location pointed to by p1
    *p1 = 10;

    // display the address pointed to by p1 and p2
    cout << "p1: " << p1 << ", p2: " << p2 << endl;


    // point p2 to the same memory location as p1
    p2 = p1;
    cout << endl << "with p2 and p1 pointing to the same place:" << endl;
    // display the address pointed to by p1 and p2
    cout << "p1: " << p1 << ", p2: " << p2 << endl;
    // display the value stored at the address pointed to by p2
    cout << "p1 = " << *p1 << ", p2 = " << *p2 << endl;


    // create a variable and then point p2 to v
    double v = 20;
    p2 = &v;
    cout << endl << "with p2 pointing to v:" << endl;
    // display the address pointed to by p1 and p2
    cout << "p1: " << p1 << ", p2: " << p2 << endl;
    // display the value stored at the address pointed to by p2
    cout << "p1 = " << *p1 << ", p2 = " << *p2 << endl;


    // change the value at the address pointed to by p2
    *p2 = 30;
    cout << endl << "with the address that p2 points to storing 30:" << endl;
    // display the value stored at the address pointed to by p2
    cout << "p1 = " << *p1 << ", p2 = " << *p2 << ", v = " << v << endl;


    // change the value stored in v
    v = 40;
    cout << endl << "with the value of v changed to 40:" << endl;
    // display the value stored at the address pointed to by p2
    cout << "p1 = " << *p1 << ", p2 = " << *p2 << ", v = " << v << endl;

    return 0;
}
