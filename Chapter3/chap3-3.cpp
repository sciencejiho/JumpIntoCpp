#include <iostream>

using namespace std;

int main()
{
    double dividend, divisor;
    double quotient;

    cout << "Please enter a dividend: ";
    cin >> dividend;
    cout << "Please enter a divisor: ";
    cin >> divisor;
    
    quotient = dividend / divisor;
    cout << "The quotient is equal to " << quotient << ".\n";

}
