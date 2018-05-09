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
    CandyBar snack[3] = {"Mocha Munch", 2.3, 350,
                            "Kit Kat", 4.5, 510,
                            "Oh Henry", 5, 260};

    
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

    return 0;
}