#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int age_years = 0;
	int age_months = 0;

	cout << "Enter your age in years: ";
	cin >> age_years;

	//conversion
	age_months = age_years * 12;

	cout << age_years << " years = " << age_months << " months" << endl;

	return 0;
}