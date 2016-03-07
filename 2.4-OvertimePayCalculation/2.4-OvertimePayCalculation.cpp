#include <iostream>

using namespace std;

int main()
{
    double payRate = 12.50;
    int hours;
    double totalPay;

    cout << (bool)-123 << endl;


    // prompt the user for the number of hours they worked
    cout << "How many hours did you work?\n> ";
    cin >> hours;


    // decide what compensation formula to use based on hours worked
    if (hours <= 40)
    { // we'll use this branch if the condition is true
        totalPay = hours * payRate;
    }
    else
    { // and we'll use this branch if the condition is false
        totalPay = 40 * payRate + (hours - 40) * 1.5 * payRate;
    }


    // force only two decimal points
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    // display the results to the user
    cout << "You earned $" << totalPay << " this week." << endl;




    return 0;
}
