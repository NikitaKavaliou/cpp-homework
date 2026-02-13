#include <iostream>   // for cout
#include <iomanip>    // for setw()
using namespace std;

int main()
{
    // just printing some escape sequences
    cout << "The escape sequences are:" << endl;

    // newline
    cout << "\t\\n"
         << setw(10)
         << "Newline\n";

    // tab
    cout << "\t\\t"
         << setw(10)
         << "Tab\n";

    // backslash
    cout << "\t\\\\"
         << setw(10)
         << "Slash\n";

    // single quote
    cout << "\t\\'"
         << setw(10)
         << "SQuote\n";

    // double quote
    cout << "\t\\\""
         << setw(10)
         << "DQuote\n";

    return 0;
}
