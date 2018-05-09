#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Pizza
{
    string brand;
    int diameter;
    float weight;
};

int main()
{
    Pizza *pizza = new Pizza;

    cout << "Enter pizza brand: ";
    getline(cin, pizza->brand);
    cout << "Enter pizza diameter: ";
    cin >> pizza->diameter;
    cout << "Enter pizza weight: ";
    cin >> pizza->weight;

    //output data
    cout << endl;
    cout << "Your pizza: " << endl;
    cout << "Brand: " << pizza->brand << endl;
    cout << "Diameter: " << pizza->diameter << endl;
    cout << "Weight: " << pizza->weight << endl;

    delete pizza;

    return 0;
}