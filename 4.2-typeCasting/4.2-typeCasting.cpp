#include <iostream>

using namespace std;

int main()
{
    cout << "without type casting: " << 9 / 2 << endl;
    cout << "with type casting   : " << static_cast<double>(9) / 2 << " vs " << (double)9 / 2 << " vs " << double(9) / 2;
    
    return 0;
}
