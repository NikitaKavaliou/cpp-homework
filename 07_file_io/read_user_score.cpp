#include <iostream>
#include <fstream>
using namespace std;

// reading from the file and showing the result
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

    // reading two pieces of data
    string userName;
    int userScore;

    fin >> userName >> userScore;   // reading name and score together

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
