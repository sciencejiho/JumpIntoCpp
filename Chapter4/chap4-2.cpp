#include <iostream>

using namespace std;

int main()
{
    int password;

    cout << "Enter your password: ";
    cin >> password;

    if (password == 12345678)
    {
        cout << "Access allowed" << "\n";
    }
    else
    {
        cout << "Bad password. Denied access!" << "\n";
        return 0;
    }

}
