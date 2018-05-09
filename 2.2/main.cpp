#include <iostream>

using std::cin;
using std::endl;
using std::cout;

const int yards_in_furlong = 220;

int main()
{
	double furlongs = 0;
	double yards = 0;

	cout << "Enter a number of furlongs: ";
	cin >> furlongs;

	//convert to yards
	yards = furlongs * yards_in_furlong;

	cout << furlongs << " furlongs = " << yards << " yards" << endl;

	return 0;
}