#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//function prototypes
double Harmonic_mean(double, double);

//main
int main()
{
    double a = 1, b = 1;

    while(a != 0 && b != 0)
    {
        cout << "Enter 2 numbers to calculate the harmonic mean of: " << endl;
        cout << "Num 1: ";
        cin >> a;
        cout << "Num 2: ";
        cin >> b;

        if(a != 0 && b != 0)
        {
            cout << "The harmonic mean of " << a << " and " << b << " is: " << Harmonic_mean(a, b) << endl << endl;
        }
    }

    cout << "Exiting..." << endl;
    return 0;
}

//function definitions
double Harmonic_mean(double a, double b)
{
    return ((2 * a * b) / (a + b));
}