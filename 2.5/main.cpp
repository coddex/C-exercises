#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
	double celsius = 0;
	double farenheit = 0;

	cout << "Enter your temperature in celcius: ";
	cin >> celsius;

	//conversion
	farenheit = (1.8 * celsius) + 32;

	cout << celsius << " C = " << farenheit << " F" << endl;

	return 0;
}