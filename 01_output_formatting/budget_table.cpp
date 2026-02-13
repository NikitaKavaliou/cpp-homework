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

    // printing the table header
    cout << "\tItem               Projected\n"
         << "\t=============  ==========\n";

    // printing each row
    cout << "\tIncome"  << setw(15) << "$" << setw(9) << 1000.00 << endl;
    cout << "\tTaxes"   << setw(15) << "$" << setw(9) << 100.00  << endl;
    cout << "\tTithing" << setw(15) << "$" << setw(9) << 100.00  << endl;
    cout << "\tLiving"  << setw(15) << "$" << setw(9) << 650.00  << endl;
    cout << "\tOther"   << setw(15) << "$" << setw(9) << 90.00   << endl;

    // footer line
    cout << "\t=============  ==========\n";

    // delta row
    cout << "\tDelta"   << setw(15) << "$" << setw(9) << 60.00   << endl;

    return 0;
}
