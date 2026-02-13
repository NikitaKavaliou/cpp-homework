#include <iostream>
using namespace std;

// getting grades from the user
void getGrades(int listGrades[], int count)
{
    for (int iGrades = 0; iGrades < count; iGrades++)
    {
        cout << "Grade " << iGrades + 1 << ": ";
        cin >> listGrades[iGrades]; 
        // I'm not checking input here (this is the simple version)
    }
}

// computing the average of all grades
float averageGrades(int listGrades[], int count)
{
    cout << "\nGrades entered: " << endl;

    float total = 0;

    // just printing and adding everything
    cout << "Ttl=" << total;

    for (int i = 0; i < count; i++) {
        cout << " + " << listGrades[i];
        total += listGrades[i];
        cout << "; Ttl = " << total << endl;
    }

    // dividing by count (assuming count > 0)
    return total / count;
}

int main()
{
    const int count = 10;
    int listGrades[count];

    getGrades(listGrades, count);

    cout << averageGrades(listGrades, count) << "%" << endl;

    return 0;
}
