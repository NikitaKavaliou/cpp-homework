#include <iostream>
using namespace std;

// asking the user to type some names
void getNames(char listNames[][256], int count)
{
    cout << "Please enter the " << count << " names." << endl;

    for (int iNames = 0; iNames < count; iNames++)
    {
        cout << "Name " << iNames + 1 << ": ";
        cin >> listNames[iNames];
        // I'm using >> so it only reads one word
        // (I know getline would read full names, but I'm keeping it simple)
    }
}

// showing all the names one per line
void displayNames(char listNames[][256], int count)
{
    cout << "\nNames entered: " << endl;

    for (int i = 0; i < count; i++)
    {
        cout << listNames[i] << endl;
        // nothing fancy, just printing each name
    }
}

int main()
{
    const int count = 10;

    // array of strings (each string can be up to 255 chars)
    char listNames[count][256];

    // getting the names from the user
    getNames(listNames, count);

    // showing them back
    displayNames(listNames, count);

    return 0;
}
