#include <iostream>
#include <string>

using namespace std;

bool logon(string ID, int computer, int lab, string **labs);
bool logoff(int computer, int lab, string **labs);
void print(string ** labs, int lab_sizes[]);
int main()
{
    int lab_sizes[] = {5,6,4,3};
    string **labs = new string*[4];
    labs[0] = new string[5];
    labs[1] = new string[6];
    labs[2] = new string[4];
    labs[3] = new string[3];

    for (int lab=0; lab<4; lab++)
    {
        for (int computer=0; computer<lab_sizes[lab]; computer++)
        {
            labs[lab][computer] = "empty";
        }
    }

    char menu;
    int lab_c;
    int comp_c;
    string id;
    do
    {
        cout << "1. View lab computers\n"
             << "2. Log on to a computer\n"
             << "3. Log off of a computer\n"
             << "4. Quit\n> ";
        cin >> menu;
        switch (menu)
        {
        case '1':
            print(labs, lab_sizes);
            break;
        case '2':
            cout << "What's your ID#? ";
            cin >> id;
            cout << "Which lab are you in (1, 2, 3, or 4)? ";
            cin >> lab_c;
            cout << "What computer would you like to log into (1 - "
                 << lab_sizes[lab_c-1]
                 << ")? ";
            cin >> comp_c;
            if (!logon(id, comp_c, lab_c, labs))
            {
                cout << "\nerror: Computer already in use.\n\n";
            }
            break;
        case '3':
            cout << "Which lab are you in (1, 2, 3, or 4)? ";
            cin >> lab_c;
            cout << "What computer would you like to log out of (1 - "
                 << lab_sizes[lab_c-1]
                 << ")? ";
            cin >> comp_c;
            if (!logoff(comp_c, lab_c, labs))
            {
                cout << "\nerror: Computer not in use.\n\n";
            }
        }
    }while (menu != '4');



    return 0;
}

bool logon(string ID, int computer, int lab, string **labs)
{
    lab--;
    computer--;
    if (labs[lab][computer] == "empty")
    {
        labs[lab][computer] = ID;
        return true;
    }
    else
    {
        return false;
    }
}

bool logoff(int computer, int lab, string **labs)
{
    lab--;
    computer--;
    if (labs[lab][computer] == "empty")
    {
        return false;
    }
    else
    {
        labs[lab][computer] = "empty";
        return true;
    }
}

void print(string ** labs, int lab_sizes[])
{
    cout << "\n";
    for (int lab=0; lab<4; lab++)
    {
        cout << lab+1 << "\t";
        for (int computer=0; computer<lab_sizes[lab]; computer++)
        {
            cout << computer+1 << ": " << labs[lab][computer] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}
