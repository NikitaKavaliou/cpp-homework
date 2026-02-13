#include <iostream>   // for cout and cin
#include <iomanip>    // for setw()
using namespace std;

int main()
{
    // configuring the output to look like money
    cout.setf(ios::fixed);      // no scientific notation
    cout.setf(ios::showpoint);  // always show decimal point
    cout.precision(2);          // two decimals for money

    // printing the columns of numbers
    cout << "$"
         << setw(7)
         << 124.45
         << "\t$"
         << setw(7)
         << 321.31
         << endl;

    cout << "$"
         << setw(7)
         << 1.74
         << "\t$"
         << setw(7)
         << 4.21
         << endl;

    cout << "$"
         << setw(7)
         << 7439.12
         << "\t$"
         << setw(7)
         << 54.92
         << endl;

    return 0;
}
