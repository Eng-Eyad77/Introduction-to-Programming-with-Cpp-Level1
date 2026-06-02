#include <iostream>

using namespace std;

void ReadGrades(float grades[3])
{
    cout << "please enter grade 1: " << endl;
    cin >> grades[0];

    cout << "please enter grade 2: " << endl;
    cin >> grades[1];

    cout << "please enter grade 3: " << endl;
    cin >> grades[2];

}

float CalculateAvgGrade(float grades[3])
{
    //also i can do it like this:
    // return (grades[0] + grades[1] + grades[2] ) / 3;
    // i don`t have to create a variable.
    float avgGrade = (grades[0] + grades[1] + grades[2] ) / 3;

    return avgGrade;

}

void PrintGrades(float grades[3])
{
    cout << "********************************************************" << endl;
    cout << "This is the Average of the entered grades; " << CalculateAvgGrade(grades) << endl;
}

int main()
{
    float grades[3];
    ReadGrades(grades);
    PrintGrades(grades);
    // i can ignore the print fuction and do it in the main like this:
    //cout << "This is the Average of the entered grades; " << CalculateAvgGrade(grades) << endl;
    return 0;
}