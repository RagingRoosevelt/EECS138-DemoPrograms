#include <iostream>
#include <cmath>
using namespace std;

double quadraticFormula_plus(double a, double b, double c);  // prototype
double quadraticFormulaf_minus(double a, double b, double c);  // or function declaration


int main()
{
    double a=1.1;
    double b=5;
    double c=4;
    cout << "The larger root is " << quadraticFormula_plus(a,b,c) << endl;
    cout << "and the smaller root is " << quadraticFormulaf_minus(a,b,c) << endl;
    
    return 0;
}





double quadraticFormula_plus(double a, double b, double c) // function heading
{ // function body
    return (-b + sqrt(pow(b,2) - 4 * a * c))/(2. * a);
}



double quadraticFormulaf_minus(double a, double b, double c)                //  function body
{                                                        //
    return (-b - sqrt(pow(b,2) - 4 * a * c))/(2. * a);   //
}                                                        //
