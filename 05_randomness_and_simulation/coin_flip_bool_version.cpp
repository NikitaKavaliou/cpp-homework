#include <iostream>
#include <cstdlib>  // for rand()
#include <ctime>    // for time()
using namespace std;

// this function just flips a coin
bool flipCoin()
{
    // rand() % 2 gives 0 or 1
    // I use 0 for heads and 1 for tails (or the opposite, doesn't matter)
    return rand() % 2 == 0;
}

int main()
{
    int trials;
    int heads = 0;
    int tails = 0;

    // seeding the random number generator
    srand(time(NULL));

    // asking the user how many times to flip
    cout << "Enter the number of coin flips: ";
    cin >> trials;

    // doing the experiment
    for (int i = 0; i < trials; i++)
    {
        if (flipCoin())
            heads++;   // got heads
        else
            tails++;   // got tails
    }

    // showing the results
    cout << "Heads: " << heads << endl;
    cout << "Tails: " << tails << endl;

    return 0;
}
