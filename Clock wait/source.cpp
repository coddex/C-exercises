//waiting.cpp - using clock() in a time delay loop

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "Enter your time delay in seconds: ";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC;  //convert to clock ticks, assigns number of seconds in time to delay
    cout << "Starting\a\n";
    clock_t start = clock();    //set current clock time as start
    while(clock()-start < delay)    //wait until time elapses
    {
        ;
    }

    cout << "Done\a\n";

    return 0;
}