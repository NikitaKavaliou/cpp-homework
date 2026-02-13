#include <iostream>
#include <iomanip>
using namespace std;

// this prints the month name and the year
void showMonthAndYear(int monthNumber, int year)
{
    string monthName;

    // just picking the right month name
    switch (monthNumber)
    {
        case 1:  monthName = "January"; break;
        case 2:  monthName = "February"; break;
        case 3:  monthName = "March"; break;
        case 4:  monthName = "April"; break;
        case 5:  monthName = "May"; break;
        case 6:  monthName = "June"; break;
        case 7:  monthName = "July"; break;
        case 8:  monthName = "August"; break;
        case 9:  monthName = "September"; break;
        case 10: monthName = "October"; break;
        case 11: monthName = "November"; break;
        case 12: monthName = "December"; break;
    }

    cout << "\n" << monthName << ", " << year << "\n";
}

// asking the user for month and year
void inputFromUser(int &monthNumber, int &yearNumber)
{
    cout << "Enter a month number: ";
    cin >> monthNumber;

    // making sure the month is valid
    while (monthNumber < 1 || monthNumber > 12)
    {
        cout << "Enter the right month number (between 1 - 12)! : ";
        cin >> monthNumber;
    }

    cout << "Enter year: ";
    cin >> yearNumber;

    // making sure the year is valid
    while (yearNumber < 1753)
    {
        cout << "Enter the right year (after 1753)! : ";
        cin >> yearNumber;
    }
}

// checking if a year is leap year
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// getting number of days in a month
int getNumDaysInMonth(int month, int year)
{
    switch (month)
    {
        case 2:  return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        default: return 31;
    }
}

// computing the offset (how many spaces before day 1)
int computeOffset(int month, int year)
{
    int totalDays = 1;   // starting from Jan 1, 1753

    // adding days for all previous years
    for (int y = 1753; y < year; y++)
    {
        if (isLeapYear(y))
            totalDays += 366;
        else
            totalDays += 365;
    }

    // adding days for months in the current year
    for (int m = 1; m < month; m++)
    {
        totalDays += getNumDaysInMonth(m, year);
    }

    return totalDays % 7;   // this gives the offset
}

// printing the calendar table
void displayTable(int numDays, int offset, int monthNumber, int yearNumber)
{
    showMonthAndYear(monthNumber, yearNumber);

    cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";

    int currentDay = 1;
    int dayOfWeek = 0;

    // printing empty spaces before day 1
    for (dayOfWeek = 0; dayOfWeek < offset; dayOfWeek++)
    {
        cout << "    ";
    }

    // printing all days
    while (currentDay <= numDays)
    {
        cout << setw(4) << currentDay;
        currentDay++;
        dayOfWeek++;

        // new line after Saturday
        if (dayOfWeek == 7)
        {
            cout << endl;
            dayOfWeek = 0;
        }
    }

    // just spacing at the end if needed
    if (dayOfWeek != 0)
        cout << "    ";
}

int main()
{
    int monthNumber, yearNumber;

    inputFromUser(monthNumber, yearNumber);

    int numDays = getNumDaysInMonth(monthNumber, yearNumber);
    int offset  = computeOffset(monthNumber, yearNumber);

    displayTable(numDays, offset, monthNumber, yearNumber);

    return 0;
}
