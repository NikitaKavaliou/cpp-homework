#include <iostream>
using namespace std;

// I just return the letter grade here
char computeLetterGrade(int numberGrade);

// This one returns + or - or nothing
char computeGradeSign(int numberGrade);

int main() {
    int input;

    while (true) {
        cout << "Enter number grade: ";
        cin >> input;

        // checking if it's in range
        if (input < 0 || input > 100) {
            cout << "Error: please enter a number between 0 and 100." << endl;
            continue;
        }

        // getting the letter and sign
        char letterGrade = computeLetterGrade(input);
        char gradeSign = computeGradeSign(input);

        // printing result
        cout << input << "% is " << letterGrade << gradeSign << endl;

        return 0; // I think we exit after one grade?
    }
}

// figuring out the letter part
char computeLetterGrade(int numberGrade) {
    int tens = numberGrade / 10; // like 87 -> 8

    switch (tens) {
        case 10: // 100
        case 9:  return 'A';
        case 8:  return 'B';
        case 7:  return 'C';
        case 6:  return 'D';
        default: return 'F'; // everything below 60
    }
}

// figuring out + or - or nothing
char computeGradeSign(int numberGrade) {
    int ones = numberGrade % 10; // last digit

    // special case for 100
    if (numberGrade == 100) return '+';

    // F doesn't get signs
    if (numberGrade < 60) return ' ';

    // high end of the range
    if (ones >= 7) return '+';

    // low end of the range
    if (ones <= 2) return '-';

    // middle
    return ' ';
}
