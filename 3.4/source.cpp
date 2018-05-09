#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int SECONDS_IN_MINUTE = 60;
const int MINUTES_IN_HOUR = 60;
const int HOURS_IN_DAY = 24;

int main()
{
	long long second_input = 0;
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	int days = 0;

	//gather data
	cout << "Enter number of seconds: ";
	cin >> second_input;

	//perform conversions
	long long working_seconds = second_input; // make math easier by subtrating awway values as we go
	days = working_seconds / (HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
	working_seconds = working_seconds - (days * HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);

	hours = working_seconds / (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
	working_seconds = working_seconds - (hours * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);

	minutes = working_seconds / (SECONDS_IN_MINUTE);
	working_seconds = working_seconds - (minutes * SECONDS_IN_MINUTE);

	seconds = working_seconds;

	cout << second_input << " seconds = " << days << " days, " << hours << " hours, ";
	cout << minutes << " minutes, " << seconds << " seconds" << endl;

	return 0;
}