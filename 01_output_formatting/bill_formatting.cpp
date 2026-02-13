#include <iostream>   // for cout
#include <iomanip>    // for setw()
using namespace std;

int main()
{
    // configuring the output to look like money
    cout.setf(ios::fixed);      // no scientific notation
    cout.setf(ios::showpoint);  // always show decimal point
    cout.precision(2);          // two decimals for money

    // printing the bill header
    cout << "Bill:\n";

    // printing each line
    cout << "\t$"
         << setw(6)
         << 10.00
         << " - Price\n";

    cout << "\t$"
         << setw(6)
         << 1.50
         << " - Tip\n";

    cout << "\t$"
         << setw(6)
         << 11.50
         << " - Total\n";

    return 0;
}
