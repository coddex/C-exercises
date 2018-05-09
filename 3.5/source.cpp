#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	long long world_pop = 0;
	long long country_pop = 0;
	float pop_ratio = 0;

	cout << "Input your countries population: ";
	cin >> country_pop;
	cout << "Input world population: ";
	cin >> world_pop;

	//perform calculations
	pop_ratio = (static_cast<float>(country_pop) / static_cast<float>(world_pop)) * 100;

	cout << "The population of your country is " << pop_ratio << "% of the worlds population" << endl;


	return 0;
}