#include <iostream>
using namespace std;

int main()
{
    // going through numbers 1 to 5
    for (int number = 1; number <= 5; number++)
    {
        // multiplying the current number by 1..5
        for (int multiply = 1; multiply <= 5; multiply++)
        {
            cout << number * multiply << "\t";  // printing the product
        }

        cout << endl;   // new line after each row
    }

    return 0;
}
