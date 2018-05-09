#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char user_choice;   // Users input choice for menu

    cout << "Input your choice:" << endl;
    cout << "C) Carnivore       P) Pianist" << endl;
    cout << "T) Tree            G)Game" << endl;
    cin >> user_choice;

    while(user_choice != 'c' && user_choice != 'C' && user_choice != 'P' &&  user_choice != 'p' && user_choice != 'T' && user_choice != 't' && user_choice != 'G' && user_choice != 'g')
    {
        cout << "Invalid input, input valid option: ";
        cin >> user_choice;
    }

    switch(user_choice)
    {
        case 'c':
        case 'C':
            cout << "A lion is a carnivore" << endl;
            break;
        case 'P':
        case 'p':
            cout << "Chopin was a pianist" << endl;
            break;
        case 'T':
        case 't':
            cout << "A maple is a tree" << endl;
            break;
        case 'G':
        case 'g':
            cout << "Call of Duty is a game" << endl;
            break;
    }

    return 0;
}