#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
    using namespace std;
    char filename[SIZE];    //input file name
    ifstream inFile;    //input stream from file
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);

    if(!inFile.is_open())    //Check if file failed to open
    {
        cout << "Could not open file " << filename << endl;
        cout << "Program terminating" << endl;
        exit(EXIT_FAILURE);
    }

    double value = 0.0;
    double sum = 0.0;
    int count = 0;

    inFile >> value;    //get first value
    while(inFile.good())
    {
        ++count;
        sum = sum + value;
        inFile >> value;
    }

    if(inFile.eof())
    {
        cout << "End of file reached" << endl;
    }
    else if(inFile.fail())
    {
        cout << "Input terminated by data mismatch" << endl;
    }
    else
    {
        cout << "Input terminated for unknown reason" << endl;
    }

    if(count == 0)
    {
        cout << "No data processed" << endl;
    }
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }

    inFile.close();
    return 0;
}