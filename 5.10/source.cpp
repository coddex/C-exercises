#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int rows = 0;

    cout << "Enter a number of rows: ";
    cin >> rows;

    //create pattern
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 0; j < rows - i; j++)   // "." portion of pattern
        {
            cout << ".";
        }
        for(int k = 0; k < i; k++)  //"* portion of pattern"
        {
            cout << "*";
        }

        cout << endl;   //newline to next in pattern
    }


    return 0;
}