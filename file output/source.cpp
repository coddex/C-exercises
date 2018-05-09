#include <iostream>
#include <fstream>  //required for file I/O

int main()
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;    //create output file stream called outFile
    outFile.open("carinfo.txt");    //open txt file for output stream to write to

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    //display info on screen with cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model year: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking:$" << a_price << endl;
    cout << "Now asking:$" << d_price << endl;

    //now output to file
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model year: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking:$" << a_price << endl;
    outFile << "Now asking:$" << d_price << endl;

    outFile.close(); //close output stream
    return 0;
}