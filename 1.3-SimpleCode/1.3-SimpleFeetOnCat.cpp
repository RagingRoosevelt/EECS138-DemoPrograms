#include <iostream>

using namespace std;

int main()
{
    int feetOnACat, numberOfCats, totalFeet;

    cout << "How feet do cats have?\n> ";
    cin >> feetOnACat;
    cout << "\nHow many cats are there?\n> ";
    cin >> numberOfCats;

    totalFeet = feetOnACat * numberOfCats;

    cout << "\nThere are a total of " << totalFeet << " feet on all the cats.\n\n";


    return 0;
}
