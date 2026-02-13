#include <iostream>
#include <cassert>
using namespace std;

// getting grades from the user
void getGrades(int listGrades[], int count) {
    assert(count > 0); // just making sure count is not weird

    for (int iGrades = 0; iGrades < count; iGrades++) {

        while (true) {
            cout << "Grade " << iGrades + 1 << ": ";
            cin >> listGrades[iGrades];

            // checking if user typed something wrong
            if (cin.fail()) {
                cin.clear();              // fixing the error flag
                cin.ignore(1000, '\n');   // throwing away bad input
                cout << "Invalid input. Please enter a number between 0 and 100." << endl;
                continue;
            }

            // checking the range
            if (listGrades[iGrades] < 0 || listGrades[iGrades] > 100) {
                cout << "Grade must be between 0 and 100." << endl;
                continue;
            }

            break; // if we get here, the grade is fine
        }
    }
}

// calculating the average of positive grades
float averageGrades(const int listGrades[], int count) {
    cout << "\nGrades entered: ";

    float total = 0;
    int divide = 0;

    // going through all grades
    for (int i = 0; i < count; i++) {
        if (listGrades[i] > 0) { // only counting positive ones
            cout << listGrades[i] << " ";
            total += listGrades[i];
            divide++;
        }
    }

    cout << "\nTotal of positive grades: " << total << endl;

    if (divide == 0)
        return -1; // nothing to divide by, so I return -1

    return total / divide; // the actual average
}

int main() {
    const int count = 10;
    int listGrades[count];

    getGrades(listGrades, count);

    float avg = averageGrades(listGrades, count);

    if (avg == -1) {
        cout << "Average Grade: ---%" << endl; // no valid grades
    } else {
        cout << "Average Grade: " << avg << "%" << endl;
    }

    return 0;
}
