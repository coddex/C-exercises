#include <iostream>

using std::cin;
using std::endl;
using std::cout;

int main()
{
    float daphne_money = 100;
    float chloe_money = 100;
    int daphne_simple_interest = 10;    //10$ every year
    float chloe_compound_interest = 1.05;   //5% interest
    int years = 0;  //years for chloe to make more than daphne

    while(chloe_money <= daphne_money)
    {
        chloe_money = chloe_money * chloe_compound_interest;
        daphne_money = daphne_money + daphne_simple_interest;
        years++;
    }

    cout << "After " << years << " years, Chloe will have more money ($" << chloe_money <<") that Daphne($" << daphne_money << ")" << endl;

    return 0;
}