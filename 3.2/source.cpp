#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//conversion factors
const int INCHES_IN_FOOT = 12;
const double METERS_IN_INCH = 0.0254;
const double LBS_IN_KG = 2.2;

int main()
{
	int height_inches = 0;
	int height_feet = 0;
	int height_all_inches = 0;
	float height_meters = 0;
	float BMI = 0;
	float weight_lbs = 0;
	float weight_kg = 0; 

	//gather data for BMI
	cout << "Enter height " << endl;
	cout << "Feet: ";
	cin >> height_feet;
	cout << "Inches: ";
	cin >> height_inches;
	cout << "\nEnter weight in lbs: ";
	cin >> weight_lbs;

	//perform conversions
	height_all_inches = height_inches + (height_feet * INCHES_IN_FOOT);
	height_meters = height_all_inches * METERS_IN_INCH;
	weight_kg = weight_lbs / LBS_IN_KG;

	//calculate BMI
	BMI = weight_kg / (height_meters * height_meters);

	//output BMI
	cout << "Your BMI: " << BMI << endl;


	return 0;
}