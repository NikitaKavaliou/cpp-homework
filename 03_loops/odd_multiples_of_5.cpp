#include <iostream>
using namespace std;

int main()
{
    int count = 0;      // this will count how many numbers match
    int divide = 5;     // I want numbers that are multiples of 5
    int number;         // the upper limit

    // asking the user for the number
    cout << "What is the number: ";
    cin >> number;

    // checking all numbers from 1 up to (but not including) the number
    for (int i = 1; i < number; i++)
    {
        // i % divide == 0 means it's a multiple of 5
        // i % 2 == 1 means it's odd
        if (i % divide == 0 && i % 2 == 1)
        {
            count++;   // found one more
        }
    }

    // printing the result
    cout << "The number of values under "
         << number
         << " that are both odd and a multiple of 5 are: "
         << count
         << endl;

    return 0;
}
