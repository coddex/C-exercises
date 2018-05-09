#include <iostream>

using std::cin;
using std::cout;

int main()
{
    char ch;
    int spaces = 0;
    int total = 0;

    cin.get(ch);    //get a string of characters from input
    while(ch != '.')    //not end of sentence
    {
        if(ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch); // next character in input stream
    }

    cout << spaces << " spaces, " << total << " characters total in sentence\n";


    return 0;
}