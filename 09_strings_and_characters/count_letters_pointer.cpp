#include <iostream>
#include <cctype>
using namespace std;

/*****************************************
 * COUNT letter
 * I count how many times a letter appears
 ****************************************/
int countLetters(char text[], char letter) {
    int amountLetters = 0;

    // using a pointer this time (trying to practice)
    for (char *p = text; *p; p++) {
        if (*p == letter) {
            amountLetters++;
        }
        // not checking uppercase/lowercase differences here
    }

    return amountLetters;
}

// getting the letter and the text from the user
void userInput(char text[], char &letter) {
    cout << "Enter a letter: ";
    cin >> letter;

    cin.ignore(); // clearing leftover newline

    cout << "\nEnter text: ";
    cin.getline(text, 256); // reading the whole line
}

// printing the result
void displayLetters(int amountLetters, char letter) {
    cout << "\nNumber of " << letter << "'s: " << amountLetters;
}

int main() {
    char text[256];
    char letter;

    userInput(text, letter);

    int amountLetters = countLetters(text, letter);

    displayLetters(amountLetters, letter);

    return 0;
}
