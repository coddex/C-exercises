#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_SIZE = 40;

struct bop
{
    char fullname[MAX_SIZE];
    char title[MAX_SIZE];
    char bopname[MAX_SIZE];
    int preference; //full name = 0, title = 1, bopname = 2
};


int main()
{
    //create members
    bop members[3] = 
    {
        "Sarah Clark", "Chief programmer", "Meister", 2,
        "Chad Smith", "Intern", "Newb", 0,
        "Jamie Jones", "QA expert", "Watcher", 1
    };

    char selection = '0';

    while (selection != 'q' && selection != 'Q')
    {

        cout << "Enter how you would like to print member info:" << endl;
        cout << "A) Display by name         B) Display by title" << endl;
        cout << "C) Display by bopname      D) Display by preference" << endl;
        cout << "Q) quit" << endl;
        cout << "Selection: ";
        cin >> selection;

        while(selection != 'a' && selection != 'A' && selection != 'b' &&  selection != 'B' && selection != 'c' && selection != 'C' && selection != 'D' && selection != 'd' && selection != 'q' && selection != 'Q')
        {
            cout << "Invalid input, input valid option: ";
            cin >> selection;
        }

        if (selection == 'q' || selection == 'Q')
            break;

        else
        {
            cout << "Members: " << endl;
            for(int i = 0; i < 3; i++)
            {
                if(selection == 'a' || selection == 'A')
                {
                    cout << members[i].fullname << endl;
                }
                if(selection == 'b' || selection == 'B')
                {
                    cout << members[i].title << endl;
                }
                if(selection == 'c' || selection == 'C')
                {
                    cout << members[i].bopname << endl;
                }
                if(selection == 'd' || selection == 'D')
                {
                    if(members[i].preference == 0)
                        cout << members[i].fullname << endl;
                    if(members[i].preference == 1)
                        cout << members[i].title << endl;
                    if(members[i].preference == 2)
                        cout << members[i].bopname << endl;
                }
            }
            cout << endl;
        }

    }

    cout << "Exiting..." << endl;
    return 0;
}