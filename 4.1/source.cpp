#include <iostream>

using std::cin;
using std::endl;
using std::cout;

const int ARRAY_SIZE = 40;

int main()
{
    char first_name[ARRAY_SIZE];
    char last_name[ARRAY_SIZE];
    char grade;
    int age = 0;

    //gather data
    cout << "Enter your first name: ";
    cin.getline(first_name, ARRAY_SIZE);
    cout << "Enter your last name: ";
    cin.getline(last_name, ARRAY_SIZE);
    cout << "What grade do you deserve: ";
    cin >> grade;
    cout << "What is your age: ";
    cin >> age;

    //output data
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << static_cast<char>(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}