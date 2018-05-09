#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int my_num = 0;
    int sum = 0;

    do
    {
        cout << "Enter a number to add to the cummulative sum, enter 0 to quit: ";
        cin >> my_num;
        sum = sum + my_num;
        cout << "Current sum: " << sum << endl;
    }
    while(my_num != 0);

    cout << "EXITING..." << endl;

    return 0;
}