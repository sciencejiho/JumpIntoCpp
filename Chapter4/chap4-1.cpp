#include <iostream>

using namespace std;

int main ()
{
    int ageA, ageB;

    cout << "Enter the age of the person A: ";
    cin >> ageA;
    cout << "Enter the age of the person B: ";
    cin >> ageB;

    if (ageA > 100 && ageB > 100)
    {
        cout << "Age of the both person is beyond 100, congratulations!\n";
    }
    
    else
    {
        if (ageA > ageB)
        {
            cout << "Age of person A is larger than person B.\n";
        }
    
        else if (ageA < ageB)
        {
            cout << "Age of person B is larger than person A.\n";
        }
        
        else
        {
            cout << "Age of person A and person B are equal.\n";
        }

    }

}
