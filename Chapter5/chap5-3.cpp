#include <iostream>

using namespace std;

int main()
{
    //Variable declaration
    int num = 1; 
    int sum = 0;

    cout << "This program will add the numbers inputted" << "\n";
    cout << "Input numbers you want to add (input 0 to exit)" << "\n";

    while(num != 0)
    {
        cin >> num;
        sum += num;
    }

    cout << "The added sum is equal to " << sum << "\n";

}
