#include <iostream>   // for cout and cin
#include <iomanip>    // for setw(), though I don't really use it here
#define ANSI_UNDERLINED_POST "\033[0m"
using namespace std;

int main()
{
    // asking the user for Fahrenheit temperature
    cout << "Please enter Fahrenheit degrees: ";

    float fahrenheitDegrees;
    cin >> fahrenheitDegrees;

    // converting to Celsius
    float celsiusDegrees;
    celsiusDegrees = (5.0 / 9) * (fahrenheitDegrees - 32);

    // printing the result (I cast to int because the assignment wants that)
    cout << "\nCelsius: " << (int)celsiusDegrees << endl;

    return 0;
}
