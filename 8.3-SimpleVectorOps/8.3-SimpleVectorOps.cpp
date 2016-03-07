#include <iostream>

#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    // illegal to use square brackets to add a value (will crash c++)
    v[0] = 1;
    // vs not illegal
    v.push_back(1);

    // we can access a value that exists in the vector with
    cout << v[0] << endl;

    // but now it's ok to do v[0] since we've added a slot using push_back:
    v[0] = 3;
    cout << v[0] << endl;




    vector<string> s = {"str1", "str2", "str3"};//only works in c++11
    for (int i=0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    // or
    for (auto i : s)
    {
        cout << i << endl;
    }

    return 0;
}
