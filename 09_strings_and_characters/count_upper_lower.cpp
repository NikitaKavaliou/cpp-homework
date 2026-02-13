#include <iostream>
#include <cctype>
using namespace std;

/*****************************************
 * COUNT
 * I just count uppercase and lowercase
 ****************************************/
void count(char text[]) {
    int amountLowerCase = 0;
    int amountUpperCase = 0;

    // going through the string one char at a time
    for (int i = 0; text[i]; i++) {
        if (isupper(text[i])) {
            amountUpperCase++;
        }
        else if (islower(text[i])) {
            amountLowerCase++;
        }
        // I ignore everything else (spaces, punctuation, etc.)
    }

    cout << "Lower case = " << amountLowerCase << endl;
    cout << "Upper case = " << amountUpperCase << endl;
}

int main() {
    // just a sample text to test the function
    char sample[] = "Hello WorLd!";

    count(sample);

    return 0;
}
