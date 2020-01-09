#include <iostream>

using namespace std;

int main()
{
    char oper;
    float num1, num2;
    
    cout << "Enter operator. (either + or - or * or /)" << "\n";
    cin >> oper;
    cout << "Enter two operands: " << "\n";
    cin >> num1 >> num2;
    
    if (oper == '+')
    {
    cout << num1 + num2 << "\n";
    }
    
    else if (oper == '-')
    {
    cout << num1 - num2 << "\n";
    }
    
    else if (oper == '*')
    {
    cout << num1 * num2 << "\n";
    }
    
    else if (oper == '/')
    {
    cout << num1 / num2 << "\n";
    }
    
    else
    {
        cout << "Error! Operator is not correct!" << "\n";
    }
    
 return 0;

}
