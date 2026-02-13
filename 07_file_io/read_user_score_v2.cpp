#include <iostream>
#include <fstream>
using namespace std;

// this function reads a name and a score from a file
bool read(char fileName[])   // filename we will read from
{
    // opening the file
    ifstream fin(fileName);

    // checking if it opened correctly
    if (fin.fail())
    {
        cout << "Unable to open file " << fileName << endl;
        return false;   // something went wrong
    }

    // variables to store what we read
    string userName;
    int userScore;

    // reading two pieces of data at once
    fin >> userName >> userScore;

    // checking if reading worked
    if (fin.fail())
    {
        cout << "Unable to read name and points from " << fileName << endl;
        return false;
    }

    // printing the result in a friendly way
    cout << "The user " << userName
         << " has got " << userScore << " points\n";

    fin.close();   // closing the file
    return true;   // everything worked
}
