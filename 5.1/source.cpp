#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int firstnum = 0, secondnum = 0, sum = 0;

    //gather data
    cout << "This program will give you the sum of all of the integers between and including A and B" << endl;
    cout << "Enter A: ";
    cin >> firstnum;
    cout << "Enter B: ";
    cin >> secondnum;

    //calculate sum
    for(int i = firstnum; i <= secondnum; i++)
    {
        sum = sum + i;
    }

    cout << "The sum of all integers between " << firstnum << " and " << secondnum << " is: " << sum << endl;


    return 0;
}