#include <iostream>

using namespace std;

int srch(const int a[], int s, int query);

int main()
{
    int a[] = {1,243,6,2,6,3,6,819};

    int query = 6;
    int location = srch(a, 8, query);
    if (location != -1)
    {
        cout << "I found the "<<query<<" at position " << location << endl;
    }
    else
    {
        cout << query <<" was not in the array" << endl;
    }


    return 0;
}

int srch(const int a[], int s, int query)
{
    for (int i=0; i<s; i++)
    {
        if (a[i] == query)
        {
            return i;
        }
    }

    return -1;
}
