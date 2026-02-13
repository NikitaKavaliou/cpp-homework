#include <iostream>
#include <iomanip>   // for fixed and setprecision
using namespace std;

// getting balances from user
void userInput(float &accountSam, float &accountSue) {
    cout << "What is Sam's balance? ";
    cin >> accountSam;

    cout << "\nWhat is Sue's balance? ";
    cin >> accountSue;
}

// just printing everything out
void displayAccounts(float &accountSam, float &accountSue,
                     float priceDinner, float priceMovie, float priceIceCream) {

    cout << fixed << setprecision(2);  // so money looks normal

    cout << "Dinner: " << priceDinner;
    cout << "\nMovie: " << priceMovie;
    cout << "\nIce cream: " << priceIceCream;

    // printing accounts too
    cout << "\nSam's account: " << accountSam << ".";
    cout << "\nSue's account: " << accountSue << ".";
}

int main() {
    float accountSam;
    float accountSue;
    float *pAccount; // pointer to whoever pays

    userInput(accountSam, accountSue);

    // picking who has more money
    if (accountSam > accountSue)
        pAccount = &accountSam;
    else
        pAccount = &accountSue;

    // prices (I hope these are correct)
    float priceDinner = 32.19;
    float priceMovie = 14.50;
    float priceIceCream = 6.00;

    // subtracting everything from the richer person
    *pAccount -= priceDinner;
    *pAccount -= priceMovie;
    *pAccount -= priceIceCream;

    // tip for dinner (15%)
    *pAccount -= priceDinner * 0.15;

    displayAccounts(accountSam, accountSue, priceDinner, priceMovie, priceIceCream);

    return 0;
}
