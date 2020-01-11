#include <iostream>

using namespace std;

int main()
{
    int input;
    
    do
    {
        cout << "Please input a selection. (1, 2, 3, and 4): ";
        cin >> input;
    } while (input != 1 && input != 2 && input != 3 && input != 4);
 
    if (input == 1)
    {
        cout << "Selection 1 is chosen!" << "\n";
    }
    
    else if (input == 2)
    {
        cout << "Selection 2 is chosen!" << "\n";
    }

    else if (input == 3)
    {
        cout << "Selection 3 is chosen!" << "\n";
    }

    else if (input == 4)
    {
        cout << "Selection 4 is chosen!" << "\n";
    }

 }

