#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAKE_LENGTH = 30; //maximum length of make name

struct Car
{
    char make[MAKE_LENGTH];
    int year;
};

int main()
{
    int car_count = 0;

    cout << "How many cars would you like to catalogue: ";
    cin >> car_count;
    cin.get(); // discard newline

    Car *my_cars = new Car[car_count];  //new array of cars

    for(int i = 0; i < car_count; i++)  //gather car data
    {
        cout << "Enter make for car #" << i+1 << ": ";
        cin.getline(my_cars[i].make, MAKE_LENGTH);
        cout << "Enter year of car: ";
        cin >> my_cars[i].year;
        cin.get();  //discard newline
    }

    //output car catalogue
    cout << endl << "Car Collection" << endl;
    for(int i = 0; i < car_count; i++)
    {
        cout << my_cars[i].year << ", " << my_cars[i].make << endl;
    }

    delete [] my_cars;

    return 0;
}