#include <iostream>

using namespace std;

int main()
{
    int i;
    
    for (i = 99; i > 1; i-- )
    {
        cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << "\n";
        cout << "Take one down and pass it around, " << i-1 << "  bottles of beer on the wall." << "\n";
    }

    return 0;
}
