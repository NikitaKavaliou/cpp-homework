// p229problem8

#include <iostream>
using namespace std;

// this function fills the array with numbers 1..count
void fill(int array[], int count)
{
    for (int i = 0; i < count; i++)
    {
        array[i] = i + 1; // just putting 1, 2, 3, ...
    }
}

// this prints the array normally
void display(int array[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int count = 32;          // I decided to use 32 numbers
    int array[count];        // making an array with that many spots

    fill(array, count);      // filling the array

    // printing it once here (kind of a quick check)
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // printing it again using the function
    display(array, count);

    return 0;
}
