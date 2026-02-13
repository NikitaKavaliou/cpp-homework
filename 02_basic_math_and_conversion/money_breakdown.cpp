#include <iostream>   // for cout and cin
#include <iomanip>    // for setw(), even though I don't use it here
using namespace std;

int main()
{
    // asking the user for a dollar amount
    cout << "Please enter a positive dollar amount (ex: 4.23): ";
    float dollars;
    cin >> dollars;

    // counting $20 bills
    int dollars20 = (int)(dollars / 20);
    if (dollars20 > 0)
    {
        cout << "$20's: " << dollars20 << endl;
    }
    dollars = dollars - dollars20 * 20;

    // counting $10 bills
    int dollars10 = (int)(dollars / 10);
    if (dollars10 > 0)
    {
        cout << "$10's: " << dollars10 << endl;
    }
    dollars = dollars - dollars10 * 10;

    // counting $5 bills
    int dollars5 = (int)(dollars / 5);
    if (dollars5 > 0)
    {
        cout << "$5's: " << dollars5 << endl;
    }
    dollars = dollars - dollars5 * 5;

    // now converting the rest to cents
    int cents = (int)(dollars * 100);

    // counting $1 bills
    cout << "$1's: " << cents / 100 << endl;
    cents = cents % 100;

    // counting quarters
    int cents25 = cents / 25;
    if (cents25 > 0)
    {
        cout << "¢25's: " << cents25 << endl;
    }
    cents = cents % 25;

    // counting dimes
    int cents10 = cents / 10;
    if (cents10 > 0)
    {
        cout << "¢10's: " << cents10 << endl;
    }
    cents = cents % 10;

    // counting nickels
    int cents5 = cents / 5;
    if (cents5 > 0)
    {
        cout << "¢5's: " << cents5 << endl;
    }
    cents = cents % 5;

    // whatever is left are pennies
    cout << "¢1's: " << cents << endl;

    return 0;
}
