#include <iostream>
using namespace std;

// this function counts how many even and odd numbers there are
void displayEvenOdd(const int values[], int num)
{
    // I just store even in [0] and odd in [1]
    int numEvenOdd[2] = {0, 0};

    // going through the array
    for (int i = 0; i < num; i++) {
        if (values[i] % 2 == 0)
            numEvenOdd[0]++;   // even
        else
            numEvenOdd[1]++;   // odd
    }

    // printing the results
    cout << "Number even: " << numEvenOdd[0] << endl;
    cout << "Number odd: " << numEvenOdd[1] << endl;
}
