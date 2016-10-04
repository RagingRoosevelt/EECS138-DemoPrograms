#include <iostream>
#include <cmath>

using namespace std;

double sizeHat(double weight, double height);
double sizeJacket(double weight, double height, int age);
double sizePants(double weight, int age);
double getWeight();
double getHeight();
int getAge();

int main()
{
    double weight, height;
    int age;
    char choice;

    weight = getWeight();
    height = getHeight();
    age = getAge();

    cout << "\n\n";

    do
    {
        cout << "What task would you like to do?\n"
             << "1 - Enter the parameters for a new user\n"
             << "2 - View current user parameters\n"
             << "3 - Calculate a hat size\n"
             << "4 - Calculate a jacket size\n"
             << "5 - Calculate a pant size\n"
             << "e - Exit\n"
             << "> ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            weight = getWeight();
            height = getHeight();
            age = getAge();
            break;
        case '2':
            cout << "Height: " << height << endl
                 << "Weight: " << weight << endl
                 << "Age   : " << age << endl;
            break;
        case '3':
            cout << "The hat size is " << ceil(sizeHat(weight, height));
            break;
        case '4':
            cout << "The jacket size is " << sizeJacket(weight, height, age) << " inches";
            break;
        case '5':
            cout << "The pant size is " << sizePants(weight, age) << " inches";
            break;
        case 'e': case 'E':
            cout << "Thanks for using us for your calculation needs.";
            break;
        default:
            cout << "That is an invalid choice, please try again!";
        }
        cout << "\n\n";
    } while (choice != 'e');

    return 0;
}

double sizeHat(double weight, double height)
{
    return 2.9 * (weight / height);
}
double sizeJacket(double weight, double height, int age)
{
    int n = 0;
    if (age > 30)
    {
        n = floor((age - 30) / 10.0);
    }

    return (height * weight) / 288 + (1.0/8) * n;
}
double sizePants(double weight, int age)
{
    int n = 0;
    if (age > 28)
    {
        n = floor((age - 28) / 2.0);
    }

    return weight / 5.7 + 0.1 * n;
}

double getWeight()
{
    double temp;
    cout << "Enter the person's weight: ";
    cin >> temp;
    return temp;
}
double getHeight()
{
    double feet, inches;
    cout << "Enter the person's height (feet inches): ";
    cin >> feet >> inches;
    return feet * 12 + inches;
}
int getAge()
{
    int temp;
    cout << "Enter the person's age: ";
    cin >> temp;
    return temp;
}
