// p229problem7

#include <iostream>
using namespace std;

// this function fills the array with numbers 1 to 10
void fill(int array[])
{
    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 1; // just putting 1,2,3,...10
    }
}

// this prints the array backwards
void display(int array[])
{
    for (int i = 9; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[10];  // making an array of 10 integers

    fill(array);    // calling the function to fill it

    // printing the array normally first
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // now printing it backwards
    display(array);

    return 0;
}
