#include <iostream>
#include <iomanip>
using namespace std;

// asking the user for income
void getIncome(float &income)
{
    cout << "\tYour monthly income: ";
    cin >> income;
}

// asking the user for budgeted living expenses
void getBudgetLiving(float &budgetLiving)
{
    cout << "\tYour budgeted living expenses: ";
    cin >> budgetLiving;
}

// asking the user for actual living expenses
void getActualLiving(float &actualLiving)
{
    cout << "\tYour actual living expenses: ";
    cin >> actualLiving;
}

// asking the user for actual taxes
void getActualTaxes(float &actualTaxes)
{
    cout << "\tYour actual taxes withheld: ";
    cin >> actualTaxes;
}

// asking the user for actual tithing
void getActualTithing(float &actualTithing)
{
    cout << "\tYour actual tithe offerings: ";
    cin >> actualTithing;
}

// asking the user for other expenses
void getActualOther(float &actualOther)
{
    cout << "\tYour actual other expenses: ";
    cin >> actualOther;
}

// computing tithing (10%)
float computeTithing(float monthlyIncome)
{
    return monthlyIncome * 0.10f;
}

// computing taxes based on yearly brackets
float computeTax(float monthlyIncome)
{
    float yearlyIncome = monthlyIncome * 12;
    float yearlyTax;

    if (yearlyIncome < 15100)
        yearlyTax = yearlyIncome * 0.10f;
    else if (yearlyIncome < 61300)
        yearlyTax = 1510 + 0.15f * (yearlyIncome - 15100);
    else if (yearlyIncome < 123700)
        yearlyTax = 8440 + 0.25f * (yearlyIncome - 61300);
    else if (yearlyIncome < 188450)
        yearlyTax = 24040 + 0.28f * (yearlyIncome - 123700);
    else if (yearlyIncome < 336550)
        yearlyTax = 42170 + 0.33f * (yearlyIncome - 188450);
    else
        yearlyTax = 91043 + 0.35f * (yearlyIncome - 336550);

    return yearlyTax / 12;   // monthly tax
}

// printing the whole report
void display(float income, float budgetLiving, float actualTax,
             float actualTithing, float actualLiving, float actualOther)
{
    float budgetTax = computeTax(income);
    float budgetTithing = computeTithing(income);
    float budgetOther = income - budgetTax - budgetTithing - budgetLiving;

    float actualDifference = income - actualTax - actualTithing - actualLiving - actualOther;
    float budgetDifference = 0;   // assignment says this is always 0

    cout << "\nThe following is a report on your monthly expenses\n";

    cout << "\tItem" << setw(15) << "Budget" << setw(15) << "Actual" << endl;
    cout << "\t" << setw(15) << string(14, '=') << setw(15) << string(14, '=') << endl;

    cout << "\tIncome"   << setw(15) << "$" << setw(11) << income
                         << setw(15) << "$" << setw(11) << income << endl;

    cout << "\tTaxes"    << setw(15) << "$" << setw(11) << budgetTax
                         << setw(15) << "$" << setw(11) << actualTax << endl;

    cout << "\tTithing"  << setw(15) << "$" << setw(11) << budgetTithing
                         << setw(15) << "$" << setw(11) << actualTithing << endl;

    cout << "\tLiving"   << setw(15) << "$" << setw(11) << budgetLiving
                         << setw(15) << "$" << setw(11) << actualLiving << endl;

    cout << "\tOther"    << setw(15) << "$" << setw(11) << budgetOther
                         << setw(15) << "$" << setw(11) << actualOther << endl;

    cout << "\t" << setw(15) << string(14, '=') << setw(15) << string(14, '=') << endl;

    cout << "\tDifference" << setw(15) << "$" << setw(11) << budgetDifference
                           << setw(15) << "$" << setw(11) << actualDifference << endl;
}

int main()
{
    float income;
    float budgetLiving;
    float actualLiving;
    float actualTaxes;
    float actualTithing;
    float actualOther;

    cout << "This program keeps track of your monthly budget\n";
    cout << "Please enter the following:\n";

    getIncome(income);
    getBudgetLiving(budgetLiving);
    getActualLiving(actualLiving);
    getActualTaxes(actualTaxes);
    getActualTithing(actualTithing);
    getActualOther(actualOther);

    display(income, budgetLiving, actualTaxes, actualTithing, actualLiving, actualOther);

    return 0;
}
