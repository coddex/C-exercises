#include <iostream>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string my_string;

    cout << "Enter a string, @ will indicate the end of processing: ";
    getline(cin, my_string);

    for(int i = 0; i < my_string.length(); i++)
    {
        if(islower(my_string[i]))
        {
            cout << static_cast<char>(toupper(my_string[i]));
        }
        if(isupper(my_string[i]))
        {
            cout << static_cast<char>(tolower(my_string[i]));
        }
        if(my_string[i] == '@')
        {
            cout << endl;
            return 0;
        }
        if(my_string[i] == ' ')
        {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}