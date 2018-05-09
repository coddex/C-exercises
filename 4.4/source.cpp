#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string first_name;
    string last_name;
    string full_name;

    //gather data
    cout << "Enter first name: ";
    getline(cin, first_name);
    cout << "Enter last name: ";
    getline(cin, last_name);

    //concatenate strings
    full_name = last_name + ", " + first_name;

    cout << "Full name: " << full_name << endl;

    return 0;
}