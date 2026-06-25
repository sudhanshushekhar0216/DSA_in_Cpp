#include <iostream>
using namespace std;

/*
 Question: Calculate "Simple Intrest" from principal (p), Rate (R), and Time (T).
 Formula: SI = (P * R * T) / 100
 */

int main()
{
    float P, R, T, SI;
    cout << "Enter the value of Principal (P) :" << endl;
    cin >> P;

    cout << "Enter the value of Rate (R) :" << endl;
    cin >> R;

    cout << "Enter the value of Time (T) :" << endl;
    cin >> T;

    SI = (P * R * T) / 100;
    cout << "Simple Interest is :" << SI << endl;
}