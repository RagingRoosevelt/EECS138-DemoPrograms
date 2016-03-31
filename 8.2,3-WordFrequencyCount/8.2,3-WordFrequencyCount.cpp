#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void sanitize(string & term);
int search(string query, vector<string> v);
void print(vector<string> terms, vector<int> freq);

int main()
{
    vector<string> terms;
    vector<int> frequencies;
    string term;
    int term_index;
    ifstream in ("8.2,3-WordFrequencyCount-text.txt");

    while (in >> term)
    {
        cout << term << endl;
        sanitize(term);
        term_index = search(term, terms);

        if (term_index >= 0)
        {
            frequencies.at(term_index) += 1;
        }
        else
        {
            terms.push_back(term);
            frequencies.push_back(1);
        }
    }
    in.close();

    print(terms, frequencies);



    return 0;
}

void sanitize(string & term)
{
    string temp = "";
    for (int i=0; i < term.size(); i++)
    {
        if (isalpha(term.at(i)))
        {
            temp += tolower(term.at(i));
        }
    }
    term = temp;
}


int search(string query, vector<string> v)
{
    for (int i=0; i<v.size(); i++)
    {
        if (query == v.at(i))
        {
            return i;
        }
    }
    return -1;
}



void print(vector<string> terms, vector<int> freq)
{
    for (int i = 0; i < terms.size(); i++)
    {
        cout << setw(15) << terms.at(i) << ": " << freq.at(i) << endl;
    }
}
