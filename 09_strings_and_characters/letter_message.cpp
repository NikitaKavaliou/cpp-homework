#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    char letter;
    string output;

    while (true) {
        cout << "Enter a letter (A, B, or C): ";
        cin >> input;

        // checking that user typed only one character
        if (input.length() != 1) {
            cout << "Error: please enter exactly one character." << endl;
            continue;
        }

        // taking the first (and only) character
        letter = input[0];

        // converting to uppercase (my own simple way)
        if (letter >= 'a' && letter <= 'z') {
            letter = letter - 'a' + 'A';
        }

        // checking what the letter is
        switch (letter) {
            case 'A':
                output = "Great job!";
                break;

            case 'B':
                output = "Good work!";
                break;

            case 'C':
                output = "You finished!";
                break;

            default:
                // if it's not A/B/C we just try again
                cout << "Invalid input. Please enter A, B, or C." << endl;
                continue;
        }

        // if we got here, everything is fine
        cout << output << endl;
        break; // leaving the loop
    }

    return 0;
}
