#include <iostream>
#include <fstream>

using std::cin;
using std::endl;
using std::cout;

int main()
{
    std::ifstream my_file;
    my_file.open("data.txt");
    char my_char;
    int count = 0;

    while(my_file.eof() != 1)
    {
        my_file >> my_char;
        if(my_file.eof() != 1)
            count++;
    }

    cout << "character count: " << count << endl;

    my_file.close();
    return 0;
}