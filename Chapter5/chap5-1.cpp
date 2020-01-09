#include <iostream>

using namespace std;

int main()
{
    int i;
    
    for (i = 99; i > 2; i-- )
    {
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << "\n";
        cout << "Take one down and pass it around, " << i-1 << "bottles of beer on the wall." << "\n";
    }

    cout << "2 bottles of beer on the wall, 2 bottles of beer." << "\n";
    cout << "Take one down and pass it around, 1 bottle of beer on the wall." << "\n";
    cout << "1 bottle of beer on the wall, 1 bottle of beer." << "\n";
    cout << "Take one down and pass it around, no more bottles of beer on the wall." << "\n";
    cout << "No more bottles of beer on the wall, no more bottles of beer." << "\n";
    cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << "\n";

    return 0;
}
