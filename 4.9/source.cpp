#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct CandyBar
{
    string brand;
    float weight;
    int calories;
};

int main()
{
    CandyBar *snack = new CandyBar[3];
    
    snack[0].brand = "Mocha Munch";
    snack[0].weight = 350;
    snack[0].calories = 120;
    snack[1].brand = "Kit Kat";
    snack[1].weight = 260.5;
    snack[1].calories = 180;
    snack[2].brand = "OhHenry";
    snack[2].weight = 274;
    snack[2].calories = 310;
    
    //output data
    cout << "Brand: " << snack[0].brand << endl;
    cout << "Weight: " << snack[0].weight << endl;
    cout << "Calories: " << snack[0].calories << endl;
    cout << "Brand: " << snack[1].brand << endl;
    cout << "Weight: " << snack[1].weight << endl;
    cout << "Calories: " << snack[1].calories << endl;
    cout << "Brand: " << snack[2].brand << endl;
    cout << "Weight: " << snack[2].weight << endl;
    cout << "Calories: " << snack[2].calories << endl;

    delete [] snack;

    return 0;
}