#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fill_array(double [], int);
void show_array(const double [], int);
void reverse_array(double [], int);

const int ARRAY_SIZE = 10;

int main()
{
    double my_array[ARRAY_SIZE] = {0};
    int count = fill_array(my_array, ARRAY_SIZE);
    show_array(my_array, count);
    reverse_array(my_array,count);
    show_array(my_array,count);


    return 0;
}


//function definitions
int fill_array(double my_array[], int count)
{
    /*
    This function will take as its arguments an array and the size of that array. It will then prompt the user to fill said array
    */

   int total = 0;
   double current = 0;

   for(int i = 0; i < count; i++)
   {
       if(cin)
       {
           cout << "Input value #" << i+1 << ": ";
           cin >> current;
           if(cin)
           {
               my_array[i] = current;
               total++;
           }
       }
   }
   cin.clear();

   return total;
}

void show_array(const double my_array[], int size)
{
    cout << "Your array: ";
    for(int i = 0; i < size; i++)
    {
        cout << my_array[i];
        if(i < size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

//reverse array
void reverse_array(double my_array[], int size)
{
    double holder = 0;
    int firstpos = 0;
    int secondpos = size - 1;

    for(int i = 0; i < (size/2); i++)
    {
        holder = my_array[i];
        my_array[i] = my_array[secondpos];
        my_array[secondpos] = holder;
        secondpos--;
    }
}