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

    int sales[12] = {0};
    int total_sales = 0;

    //gather sales data
    for(int i = 0; i < 12; i++)
    {
        cout << "Enter sales number for " << months[i] << ": ";
        cin >> sales[i];
    }

    //calculate total sales
    for(int i = 0; i < 12; i++)
    {
        total_sales = total_sales + sales[i];
    }

    cout << "Total years sales: " << total_sales << endl;

    return 0;
}