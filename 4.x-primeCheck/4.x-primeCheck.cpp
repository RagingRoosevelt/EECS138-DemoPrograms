#include <iostream>
using namespace std;

bool primeCheck(int);
// bool primeCheck(int value);

int main()
{
    cout << "what value would you like to check?" << endl << "> ";
    int value;
    cin >> value;

    if (primeCheck(value))
    {
        cout << value << " is prime" << endl;
    }
    else
    {
        cout << value << " is not prime" << endl;
    }


//    cout << "Where would you like to stop listing primes?"
//         << endl << "> ";
//    int maxNum;
//    cin >> maxNum;
//
//    for (int num = 1; num <= maxNum; num++)
//    {
//        if (primeCheck(num))
//        {
//            cout << num << " is prime" << endl;
//        }
//    }

    return 0;
}


bool primeCheck(int value)
{
    int div = 2;

    while (div < value)
    {
        if (value % div == 0)
        {
            return false;
        }

        div++;
    }

    return true;
}
