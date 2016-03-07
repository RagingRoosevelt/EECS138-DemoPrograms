#include <iostream>

#include <vector>


using namespace std;

int main()
{
    vector<int> v;

    cout << "Enter positive numbers.  The last number you want to enter should be negative, though.";

    int value;
    cin >> value;
    while (value > 0)
    {
        v.push_back(value);
        cout << value << " added to the vector.  The vector is " << v.size() << " elements in size.\n";
        cout << "Enter another value:\n>";
        cin >> value;
    }
    cout << "prior to removing elemtns, the vector is: ";
    for (auto value : val)
    {
        cout << val << " ";
    }
    cout << endl;

    v.erase(v.begin())
    cout << "after removing the first elemtnt, the vector is: ";
    for (auto value : val)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
