#include <iostream>
#include <cctype>
using namespace std;

// this function prints a multiplication table up to num
void displayTable(int num)
{
    // going through all the rows
    for (int row = 1; row <= num; row++)
    {
        // going through all the columns
        for (int col = 1; col <= num; col++)
        {
            // printing the product
            cout << (row * col);

            // if it's the last column, go to next line
            // otherwise print a tab
            if (col == num)
                cout << '\n';
            else
                cout << '\t';
        }
    }
}

// asking the user how big the table should be
int userInput(int &num)
{
    cout << "How big should your multiplication table be? ";
    cin >> num;

    // if the user enters a negative number, make it positive
    num = (num < 0 ? -num : num);

    return num;
}

int main()
{
    int num;

    userInput(num);      // getting the number from the user
    displayTable(num);   // printing the table

    return 0;
}
