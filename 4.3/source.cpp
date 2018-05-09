#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

const int STRING_SIZE = 40;

int main()
{
    char first_name[STRING_SIZE];
    char last_name[STRING_SIZE];
    char full_name[2 * STRING_SIZE];

    //gather data
    cout << "Enter first name: ";
    cin.getline(first_name, STRING_SIZE);
    cout << "Enter last name: ";
    cin.getline(last_name, STRING_SIZE);

    //concatenate strings
    strcat(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);

    cout << "Full name: " << full_name << endl;

    return 0;
}