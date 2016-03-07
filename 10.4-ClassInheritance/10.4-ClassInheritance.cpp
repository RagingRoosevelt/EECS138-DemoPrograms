#include <iostream>

using namespace std;

// Person class
class Person{
private:
    string fName;
    string mName;
    string lName;

    int dobDay;
    int dobMonth;
    int dobYear;

public:
    // constructors
    Person();
    Person(int day, int month, int year);
    Person(int day, int month, int year, string f, string m, string l);

    // setters and getters
    void setName(string f, string m, string l);
    void setDOB(int day, int month, int year);
    void getName();
    void getDOB();
};

// Student class: inherits from Person class
class Student : public Person {
private:
    string studentID;
    string classStanding;
    string major;
    double gpa;
public:
    // constructors
    Student();
    Student(int day, int month, int year);
    Student(int day, int month, int year, string f, string m, string l);

    // setters and getters
    void setID(string ID);
    void setClassStanding(string standing);
    void setMajor(string m);
    void setGPA(double g);
    void printStudentInfo();
};

int main()
{
    // create an instance of the Person class
    Person bob(14, 01, 1964, "Bobby", "", "B");

    // output stuff
    bob.getName();
    cout << "'s birthday is ";
    bob.getDOB();

    cout << endl << endl;

    // create an instance of the Student class
    Student charles(19, 11, 1600, "Charles", "", "I");

    // set stuff
    charles.setClassStanding("Senior");
    charles.setGPA(3.6);
    charles.setMajor("Politics");
    charles.setID("123445");

    // output stuff
    charles.getName();
    cout << "'s birthday is ";
    charles.getDOB();
    cout << endl;
    charles.printStudentInfo();

    cout << endl << endl;

    return 0;
}



// constructor
Person::Person()
{
    fName = "";
    mName = "";
    lName = "";
    dobDay = -1;
    dobMonth = -1;
    dobYear = -1;
}


// constructor
Person::Person(int day, int month, int year)
{
    fName = "";
    mName = "";
    lName = "";
    dobDay = day;
    dobMonth = month;
    dobYear = year;
}


// constructor
Person::Person(int day, int month, int year, string f, string m, string l)
{
    fName = f;
    mName = m;
    lName = l;
    dobDay = day;
    dobMonth = month;
    dobYear = year;
}


// setter
void Person::setName(string f, string m, string l)
{
    fName = f;
    mName = m;
    lName = l;

    return;
}


// setter
void Person::setDOB(int day, int month, int year)
{
    dobDay = day;
    dobMonth = month;
    dobYear = year;

    return;
}


// getter
void Person::getName()
{
    cout << fName << " " << mName << " " << lName;

    return;
}


// getter
void Person::getDOB()
{
    cout << dobYear << "-" << dobMonth << "-" << dobDay;

    return;
}


// constructor
Student::Student() :
    Person() // just calls constructor from Person
{
}


// constructor
Student::Student(int day, int month, int year) :
    Person(day, month, year) // just calls constructor from Person
{
}


// constructor
Student::Student(int day, int month, int year, string f, string m, string l) :
    Person(day, month, year, f, m, l) // just calls constructor from Person
{
}


// setter
void Student::setID(string ID)
{
    studentID = ID;

    return;
}


// setter
void Student::setClassStanding(string standing)
{
    classStanding = standing;

    return;
}


// setter
void Student::setMajor(string m)
{
    major = m;

    return;
}


// setter
void Student::setGPA(double g)
{
    gpa = g;

    return;
}


// getter
void Student::printStudentInfo()
{
    cout << "ID:       " << studentID << endl
         << "Major:    " << major << endl
         << "Standing: " << classStanding << endl
         << "GPA:      " << gpa;

    return;
}
