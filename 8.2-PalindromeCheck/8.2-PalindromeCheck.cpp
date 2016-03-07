#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool palindromeCheck(string str);
string onlyAlphaNumerics(string str);
string stringToLower(string str);
string stringReverse(string str);

int main()
{
    // Trial A
    string str = "A man, a plan, a canal: Panama!";
    if (palindromeCheck(str))
        cout << "It's a palindrome!" << endl;
    else
        cout << "It's not a palindrome =(" << endl;

    cout << endl << endl;

    // Trial B
    str = "Is this a palindrome?";
    if (palindromeCheck(str))
        cout << "It's a palindrome!" << endl;
    else
        cout << "It's not a palindrome =(" << endl;

    return 0;
}

bool palindromeCheck(string str)
{
    str = onlyAlphaNumerics(str);
    str = stringToLower(str);
    string temp = stringReverse(str);

    // just so we can compare ourselves
    cout << str << endl << temp << endl;

    if (str == temp)
        return true;
    else
        return false;
}

string onlyAlphaNumerics(string str)
{
    string temp = "";

    // start at the beginning of the string and check if each character
    for (int i = 0; i < str.length(); i++)
    {
        if (isalnum(str.at(i)))
        {
            // if the character is an alphanumeric, add it to what we'll return
            temp += str.at(i);
        }
    }

    return temp;
}

string stringToLower(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str.at(i) = tolower(str.at(i));
    }

    return str;
}

string stringReverse(string str)
{
    string temp = "";

    // start at the end of the origional string and work to the beginning
    for (int i = str.length()-1; i >= 0; i--)
    {
        // add the character that we're looking at to the end of the reversed string
        temp += str.at(i);
    }

    return temp;
}
