#include <iostream>
#include <iomanip>
using namespace std;

// asking the user for their favorite heroes
void getNames(char listNames[][256], int numNames)
{
    cout << "Who are your top " << numNames << " scripture heroes?\n";

    // just a simple loop to read each name
    for (int iNames = 0; iNames < numNames; iNames++)
    {
        cout << "\t#" << iNames + 1 << ": ";
        cin >> listNames[iNames]; 
        // I'm using >> so it only reads one word
        // (I know getline would read full names, but I'm keeping it simple)
    }
}

// printing the names in one line
void display(char listNames[][256], int numNames) {
    cout << "Your five heroes are: ";

    for (int iNames = 0; iNames < numNames; iNames++) {
        cout << listNames[iNames];

        // adding commas between names
        if (iNames != numNames - 1)
            cout << ", ";
        else
            cout << " ";
    }
}

int main()
{
    // array of strings (each string can be up to 255 chars)
    char names[5][256];

    // getting the names from the user
    getNames(names, 5);

    // showing the result
    display(names, 5);

    return 0;
}
