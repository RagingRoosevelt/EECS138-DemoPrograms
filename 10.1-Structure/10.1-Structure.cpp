#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string fName;
    string lName;
    int age;
    char gender;
};

void printPerson(Person person);

int main()
{
    Person doug, zoe;

    zoe.fName = "Zoe";
    zoe.lName = "Barnes";
    zoe.age = 27;
    zoe.gender = 'f';

    // make sure the parameters are in the order
    // they are declared in the struct
    doug = {"Doug", "Stamper", 51, 'm'};
    // which is equivalent to:
//    doug.fName = "Doug";
//    doug.lName = "Stamper";
//    doug.age = 51;
//    doug.gender = 'm';

    printPerson(zoe);
    cout << endl;
    printPerson(doug);

    return 0;
}


void printPerson(Person person)
{
    cout << "Name:   " << person.fName << " " << person.lName << endl;
    cout << "Age:    " << person.age << endl;

    cout << "Gender: ";
    if (person.gender == 'm')
    {
        cout << "Male";
    }
    else if (person.gender == 'f')
    {
        cout << "Female";
    }
    else
    {
        cout << "unknown";
    }
    cout << endl;

    return;
}
