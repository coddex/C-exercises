#include <iostream>

using std::cin;
using std::endl;
using std::cout;

void time(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}

int main()
{
	int hours = 0;
	int minutes = 0;

	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes: ";
	cin >> minutes;

	time(hours, minutes);

	return 0;
}