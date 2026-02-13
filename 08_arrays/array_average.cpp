#include <iostream>
using namespace std;

// this function fills the array and also calculates the average
float fill(float array[], int count)
{
    float total = 0;

    cout << "Input numbers: ";

    // reading each number and adding it to total
    for (int i = 0; i < count; i++) {
        cin >> array[i];
        total += array[i];
    }

    // returning the average (I assume count > 0)
    return total / count;
}

// this just prints the array
void display(float array[], int count)
{
    for (int i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int count = 4;          // I decided to use 4 numbers
    float array[count];     // making an array of 4 floats

    float average = fill(array, count);  // filling and getting the average

    cout << "Average: " << average << endl;

    cout << "Numbers entered: ";
    display(array, count);

    return 0;
}
