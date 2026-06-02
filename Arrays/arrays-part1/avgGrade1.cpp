#include <iostream>

using namespace std;


int main()
{
    float gradeArray[3];
    cout << "Please enter grade1: " << endl;
    cin >> gradeArray[0];

    cout << "Please enter grade2: " << endl;
    cin >> gradeArray[1];

    cout << "Please enter grade3: " << endl;
    cin >> gradeArray[2];

    float avgGrade = (gradeArray[0] +gradeArray[1] + gradeArray[2]) / 3;

    cout << "*************************************************" << endl;
    cout << "The average of grades is: " << avgGrade << endl;
    return 0;
}