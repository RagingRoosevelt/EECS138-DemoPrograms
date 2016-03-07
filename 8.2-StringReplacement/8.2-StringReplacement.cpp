#include <iostream>

using namespace std;

int main()
{
    string str = "this is a string.  we'll replace the first 'a' with a 'the'.";
    cout << str << endl;

    string stringToFind = "a";
    string stringToSubstitute = "the";

    size_t position = str.find(stringToFind);
    str.replace(position, stringToFind.length(), stringToSubstitute);

    cout << str << endl;
    
    return 0;
}
