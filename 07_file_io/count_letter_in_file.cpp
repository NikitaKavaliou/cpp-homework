#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// asking the user for the file name
string getFileName()
{
    string fileName;
    cout << "What is the name of the file: ";
    cin >> fileName;   // just reading one word
    return fileName;
}

// asking the user which letter to count
char getTargetLetter()
{
    char letter;
    cout << "What letter should we count: ";
    cin >> letter;
    return letter;
}

// counting how many times the letter appears in the file
int countLetterInFile(const string &fileName, char target)
{
    ifstream fin(fileName);

    // checking if the file opened correctly
    if (!fin)
    {
        cerr << "Error: Could not open file.\n";
        return 0;   // returning 0 because we couldn't read anything
    }

    int count = 0;
    char ch;

    // reading one character at a time
    while (fin.get(ch))
    {
        if (ch == target)
            count++;   // found one more
    }

    return count;
}

int main()
{
    string fileName = getFileName();
    char target = getTargetLetter();

    int count = countLetterInFile(fileName, target);

    cout << "There are " << count << " " << target << "'s in the file\n";

    return 0;
}
