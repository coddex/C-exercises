#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MONTHS = 12;

int main()
{
    const char * months[MONTHS] =   //char arrays for months
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"

    };

    int sales[3][12] = {0}; // year, month
    int total_sales = 0;

    //gather sales data
    for(int j = 0; j < 3; j++) // year loop
    {
        for(int i = 0; i < 12; i++) // month loop
        {
            cout << "Enter sales number for year " << j+1 << ", " << months[i] << ": ";
            cin >> sales[j][i];
        }
    }

    //calculate total sales
    for(int j = 0; j < 3; j++) // year loop
    {
        for(int i = 0; i < 12; i++) // month loop
        {
            total_sales = total_sales + sales[j][i];
        }
    }

    cout << "Total years sales: " << total_sales << endl;

    return 0;
}