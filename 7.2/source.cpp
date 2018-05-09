#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SCORES = 10;

//function protos
int scores_input(int []);
void scores_display(const int [], int);
double scores_average(const int [], int);

int main()
{
    int scores[MAX_SCORES] = {0};
    int count = 0;
    
    //input scores and count value
    count = scores_input(scores);

    //display scores
    scores_display(scores, count);

    //output average
    cout << "Average: " << scores_average(scores, count) << endl;

    return 0;
}

//function defs
int scores_input(int scores[])
{
    int count = 0;
    int current = 0;
    cout << "Begin entering scores, 0 to quit:" << endl;
    
    for(int i = 0; i < MAX_SCORES; i++)
    {
        cout << "Enter score #" << i+1 << ": ";
        cin >> current;
        if(current == 0)
            break;
        else
        {
            scores[i] = current;
            count++;
        }
    }
    return count;
}

void scores_display(const int scores[], int count)
{
    cout << "Scores: ";
    for(int i = 0; i < count; i++)
    {
        cout << scores[i];
        if(i+1 != count)
            cout << ", ";
    }
    cout << endl;
}

double scores_average(const int scores[], int count)
{
    double average = 0;
    for(int i = 0; i < count; i++)
    {
        average = average + scores[i];
    }

    average = average / count;

    return average;
}