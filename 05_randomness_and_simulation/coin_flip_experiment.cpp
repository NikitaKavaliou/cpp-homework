#include <iostream>
#include <cstdlib>  // needed for rand()
#include <ctime>    // needed for time()
using namespace std;

// asking the user how many flips to do
void getNumbersOfCoinFlip(int &numbersOfCoinFlip)
{
    cout << "How many coin flips for this experiment: ";
    cin >> numbersOfCoinFlip;
}

// counting heads and tails
void countCoinFlip(int numbersOfCoinFlip, int &heads, int &tails)
{
    heads = 0;
    tails = 0;

    // doing the flips one by one
    for (int i = 0; i < numbersOfCoinFlip; i++)
    {
        bool isHead = rand() % 2;   // 0 = tails, 1 = heads

        if (isHead)
            heads++;
        else
            tails++;
    }
}

// showing the results
void display(int heads, int tails)
{
    cout << "There were " << heads << " heads." << endl;
    cout << "There were " << tails << " tails." << endl;
}

int main(int argc, char **argv)
{
    int numbersOfCoinFlip;
    int heads = 0;
    int tails = 0;

    getNumbersOfCoinFlip(numbersOfCoinFlip);

    // setting up the random number generator
    srand(time(NULL));

    countCoinFlip(numbersOfCoinFlip, heads, tails);

    display(heads, tails);

    return 0;
}
