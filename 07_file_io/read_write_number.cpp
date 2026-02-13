#include <iostream>
#include <fstream>
using namespace std;

// reading a number from the file
float readNumber(char fileName[])
{
    ifstream fin(fileName);   // opening the file

    // checking if it opened correctly
    if (fin.fail())
    {
        cout << "Unable to open file " << fileName << endl;
        return -1;   // error value
    }

    // reading the number
    float number;
    fin >> number;

    // checking if reading worked
    if (fin.fail())
    {
        cout << "Unable to read the number from " << fileName << endl;
        return -1;
    }

    // showing the old number and asking for the new one
    cout << "The old number is \"" << number
         << "\". What is the new number? ";

    fin.close();
    return number;
}

// writing a number to the file
void writeNumber(char fileName[], float number)
{
    ofstream fout(fileName);   // opening for writing

    if (fout.fail())
    {
        cout << "Unable to open file " << fileName
             << " for writing." << endl;
        return;
    }

    fout << number << endl;   // writing the number
    fout.close();
}

int main()
{
    char file[] = "number.txt";   // the file we will use

    float oldNumber = readNumber(file);

    // only continue if reading worked
    if (oldNumber != -1)
    {
        float newNumber;
        cin >> newNumber;          // reading the new number
        writeNumber(file, newNumber);
    }

    return 0;
}
