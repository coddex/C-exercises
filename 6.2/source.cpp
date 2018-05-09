#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int MAX_DONATIONS = 10;

int main()
{
    double donations[MAX_DONATIONS];

    double average = 0;
    int donations_larger_than_average = 0;
    int donation_count = 0;
    double sum = 0;

    for(int i = 0; i < MAX_DONATIONS; i++)
    {
        cout << "Enter donation #" << i+1 << ": ";
        cin >> donations[i];
        if(cin)
            donation_count++;
        else
            break;
    }

    //calculate average
    for(int i = 0; i < donation_count; i++)
    {
        sum = sum + donations[i];
    }
    average = sum / donation_count;

    //calculate number of donations larger than average
    for(int i = 0; i < donation_count; i++)
    {
        if(donations[i] > average)
            donations_larger_than_average++;
    }

    //output data
    cout << "Average: " << average << endl;
    cout << "Number of donations larger than average: " << donations_larger_than_average << endl;


    return 0;
}