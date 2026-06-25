#include <iostream>
using namespace std;

/*
Question: Calculate Max of 2 numbers.
*/

int main()
{
    int a, b;

    cout << "Enter the value of 'a' :" << endl;
    cin >> a, b;

    cout << "Enter the value of 'b' :" << endl;
    cin >> b;

    if (a > b)
    {
        cout << "a is max number" << endl;
    }

    else
    {
        cout << "b is max number" << endl;
    }
}