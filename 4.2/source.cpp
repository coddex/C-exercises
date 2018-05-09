#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;

int main()
{
    string first_name;
    string last_name;
    char grade;
    int age = 0;

    //gather data
    cout << "Enter first name: ";
    getline(cin,first_name);
    cout << "Enter last name: ";
    getline(cin, last_name);
    cout << "Enter grade deserved: ";
    cin >> grade;
    cout << "Enter age: ";
    cin >> age;

    //output data
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << static_cast<char>(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}