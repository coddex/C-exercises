#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//conversion factors
const int SECONDS_IN_MINUTE = 60;
const int MINUTES_IN_DEGREE = 60;

int main()
{
	float degrees_converted = 0;
	float degrees = 0;
	float minutes = 0;
	float seconds = 0;

	//gather data
	cout << "Enter a latitude in degrees, minutes, and seconds" << endl;
	cout << "Degrees: ";
	cin >> degrees;
	cout << "Minutes: ";
	cin >> minutes;
	cout << "Seconds: ";
	cin >> seconds;

	//perform conversion
	degrees_converted = degrees + (minutes / MINUTES_IN_DEGREE) + (seconds / MINUTES_IN_DEGREE / SECONDS_IN_MINUTE);

	cout << degrees << " Degrees, " << minutes << " Minutes, " << seconds << " seconds = ";
	cout << degrees_converted << " degrees" << endl;

	return 0;
}