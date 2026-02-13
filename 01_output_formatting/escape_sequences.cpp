#include <iostream>   // for cout
#include <iomanip>    // for setw()
using namespace std;

int main()
{
    // just printing some escape sequences
    cout << "The escape sequences are:" << endl;

    // newline
    cout << "\tNewline  \\n\n";

    // tab
    cout << "\tTab      \\t\n";

    // backslash
    cout << "\tSlash    \\\\\n";

    // single quote
    cout << "\tSQuote   \\'\n";

    // double quote
    cout << "\tDQuote   \\\"\n";

    return 0;
}
