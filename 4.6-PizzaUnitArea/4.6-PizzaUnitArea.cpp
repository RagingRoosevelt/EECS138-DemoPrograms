#include <iostream>
#include <cmath>
using namespace std;

double const PI = 3.14159;

double unitCost(double price, int diameter)
{
    int area = PI * pow(diameter / 2.0, 2);
    return price / area;
}

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double unitPrice;
    double price;
    int dim1;

    cout << "How much does that pizza cost?\n> ";
    cin >> price;
    cout << "What is the diameter of the pizza (in inches)?\n> ";
    cin >> dim1;

    unitPrice = unitCost(price, dim1);

    cout << "That pizza has a unit cost of $" << unitPrice << " per square inch." << endl;
    return 0;
}
