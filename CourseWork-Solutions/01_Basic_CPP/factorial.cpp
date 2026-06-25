#include <iostream>
using namespace std;

/*
Question: Calculate Factorial of a number N.
*/

int getfactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * getfactorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter the value of n :" << endl;
    cin >> n;
    
    cout << "The factorial of " << n << " is :" << getfactorial(n) << endl;
}