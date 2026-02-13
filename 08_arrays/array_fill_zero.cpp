// p229problem7

#include <iostream>
using namespace std;

// this function just fills the array with zeros
void fill(int array[])
{
    // going through all 10 spots
    for (int i = 0; i < 10; i++)
    {
        array[i] = 0; // setting each one to zero
    }
}

int main()
{
    int array[10];  // making an array of 10 integers

    fill(array);    // calling the function to fill it

    // printing the array to check if it worked
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    return