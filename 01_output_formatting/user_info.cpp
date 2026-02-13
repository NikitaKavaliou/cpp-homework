#include <iostream>   // for cout and cin
#include <iomanip>    // for setw(), though I don't really use it here
using namespace std;

int main()
{
    // configuring the output
    cout.setf(ios::fixed);      // no scientific notation
    cout.setf(ios::showpoint);  // always show decimal point
    cout.precision(1);          // one decimal for GPA

    // asking the user for their info
    cout << "What is your first name: ";

    char userFirstName[256];    // now it's a real char array
    cin.getline(userFirstName, 256);

    // if getline reads an empty string because of leftover '\n'
    if (userFirstName[0] == '\0')
        cin.getline(userFirstName, 256);

    cout << "What is your age: ";
    int age;
    cin >> age;

    cout << "What is your GPA: ";
    float gpa;
    cin >> gpa;

    cout << "What grade do you hope to get in CS 124: ";
    char letterGrade;
    cin >> letterGrade;

    // displaying everything nicely
    cout << "\t" << userFirstName
         << ", you are " << age
         << " with a " << gpa
         << " GPA. You will get an " << letterGrade
         << ".\n";

    return 0;
}
