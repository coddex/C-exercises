#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int INCHES_IN_FOOT = 12;

int main()
{
	int height_all_inches = 0;
	int height_inches = 0;
	int height_feet = 0;

	cout << "Input your height in inches: ";
	cin >> height_all_inches;

	//perform conversion
	height_inches = height_all_inches % INCHES_IN_FOOT;
	height_feet = height_all_inches / INCHES_IN_FOOT;

	cout << height_all_inches << " inches = " << height_feet << "ft, " << height_inches << "in" << endl;
	

	return 0;
}