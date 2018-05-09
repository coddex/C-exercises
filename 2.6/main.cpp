#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double astronomial_unit_conversion(double light_years)
{
	return 63240 * light_years;
}

int main()
{
	double light_years = 0;
	double astronomical_units = 0;

	cout << "Enter your distance in light years: ";
	cin >>light_years;

	//conversion
	astronomical_units = astronomial_unit_conversion(light_years);

	cout << light_years << " light years = " << astronomical_units << " astronomical_units" << endl;

	return 0;
}