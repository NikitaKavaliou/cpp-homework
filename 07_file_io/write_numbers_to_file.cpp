#include <iostream>
#include <fstream>
using namespace std;

// this function writes numbers 1..n into a file
void numbers(int n, char fileName[])
{
    ofstream fout;
    fout.open(fileName);   // opening the file

    // checking if it opened correctly
    if (fout.fail())
        return;            // just giving up if something went wrong

    // writing numbers one per line
    for (int i = 1; i <= n; i++)
        fout << i << endl;

    fout.close();          // closing the file
    return;
}

int main()
{
    numbers(10, (char*)"file.txt");   // writing 1..10 into the file
    return 0;
}
