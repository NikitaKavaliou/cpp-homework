#include <iostream>
using namespace std;

// making the fibonacci numbers and putting them in the array
void fibonacci(int array[], int num) {
    // just handling the first two numbers manually
    if (num > 0) array[0] = 0;
    if (num > 1) array[1] = 1;

    // filling the rest (if there is more)
    for (int i = 2; i < num; i++) {
        array[i] = array[i - 1] + array[i - 2];
        // nothing fancy here, just the usual formula
    }
}

// printing the array nicely
void display(int array[], int num) {
    for (int i = 0; i < num; i++) {
        cout << array[i];
        if (i < num - 1)
            cout << ", "; // adding commas between numbers
    }
    cout << endl;
}

int main() {
    int number = 10; // I just picked 10 numbers
    int array[number];

    fibonacci(array, number);
    display(array, number);

    return 0;
}
