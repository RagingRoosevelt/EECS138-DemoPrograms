#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int die1, die2, sum;
    int goAgain;
    int twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0, sevens = 0, eights = 0, nines = 0, tens = 0, elevens = 0, twelves = 0;

    cout << "How many rolls would you like to do? ";
    cin >> goAgain;

    while (goAgain)
    {


        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;
        sum = die1 + die2;

        //cout << "Die rolls: " << die1 << " + " << die2 << " = " << sum << endl;

        switch (sum)
        {
        case 2:
            twos ++;
            break;
        case 3:
            threes ++;
            break;
        case 4:
            fours ++;
            break;
        case 5:
            fives ++;
            break;
        case 6:
            sixes ++;
            break;
        case 7:
            sevens ++;
            break;
        case 8:
            eights ++;
            break;
        case 9:
            nines ++;
            break;
        case 10:
            tens ++;
            break;
        case 11:
            elevens ++;
            break;
        case 12:
            twelves ++;
            break;
        }


        goAgain--;
    }


    int crtWdth = 50;
    int totalRolls = twos + threes + fours + fives + sixes + sevens + eights + nines + tens + elevens + twelves;

    cout << endl << " 2: ";
    for (int i=0; i < crtWdth * (double)twos / totalRolls; i++)
        cout << "=";

    cout << endl << " 3: ";
    for (int i=0; i < crtWdth * (double)threes / totalRolls; i++)
        cout << "=";

    cout << endl << " 4: ";
    for (int i=0; i < crtWdth * (double)fours / totalRolls; i++)
        cout << "=";

    cout << endl << " 5: ";
    for (int i=0; i < crtWdth * (double)fives / totalRolls; i++)
        cout << "=";

    cout << endl << " 6: ";
    for (int i=0; i < crtWdth * (double)sixes / totalRolls; i++)
        cout << "=";

    cout << endl << " 7: ";
    for (int i=0; i < crtWdth * (double)sevens / totalRolls; i++)
        cout << "=";

    cout << endl << " 8: ";
    for (int i=0; i < crtWdth * (double)eights / totalRolls; i++)
        cout << "=";

    cout << endl << " 9: ";
    for (int i=0; i < crtWdth * (double)nines / totalRolls; i++)
        cout << "=";

    cout << endl << "10: ";
    for (int i=0; i < crtWdth * (double)tens / totalRolls; i++)
        cout << "=";

    cout << endl << "11: ";
    for (int i=0; i < crtWdth * (double)elevens / totalRolls; i++)
        cout << "=";

    cout << endl << "12: ";
    for (int i=0; i < crtWdth * (double)twelves / totalRolls; i++)
        cout << "=";
    
    return 0;
}
