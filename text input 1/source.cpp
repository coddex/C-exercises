#include <iostream>

int main()
{
    using namespace std;

    char ch; // will be used as input character
    int count = 0;
    cout << "Enter characters; Enter # to end: ";
    cin.get(ch);   //input the whole string to the cin stream passing through ch

    while(ch != '#')    //while input stream is not #
    {
        cout << ch;  //echo stream
        ++count;
        cin.get(ch);  //check next char in input stream
    }

    cout << endl << count << " Characters read" << endl;
    return 0;
}