#include <iostream>
#include <fstream>
using namespace std;

// asking the user for the file name
void getFileName(char fileName[])
{
    cout << "Please enter the filename: ";
    cin >> fileName;   // just reading one word
}

// reading the file and calculating the average
float readFile(char fileName[])
{
    ifstream fin(fileName);   // opening the file

    // checking if it opened correctly
    if (fin.fail())
    {
        cout << "Unable to open file " << fileName << endl;
        return -1;   // error value
    }

    const int expectedCount = 10; // I expect exactly 10 numbers
    int count = 0;
    float sum = 0;
    float data;

    // reading numbers one by one
    while (fin >> data)
    {
        count++;
        sum += data;
    }

    // checking if the file had the right amount of numbers
    if (count != expectedCount)
    {
        cout << "The file " << fileName
             << " does not contain exactly "
             << expectedCount << " numbers!" << endl;
        return -1;
    }

    fin.close();

    // computing the average
    float average = sum / count;
    return average;
}

// printing the result
void display(float average)
{
    cout << "Average Grade: " << average << "%" << endl;
}

int main()
{
    char fileName[256];

    getFileName(fileName);

    float average = readFile(fileName);

    if (average >= 0)
        display(average);
    else
        cout << "Failed to compute average.\n";

    return 0;
}
