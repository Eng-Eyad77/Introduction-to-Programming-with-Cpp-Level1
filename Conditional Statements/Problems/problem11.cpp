#include <iostream>
using namespace std;

struct strMarks
{
    int mark1;
    int mark2;
    int mark3;
    int avgMarks;

};
void ReadMark(strMarks &marks)
{

    cout << "Please enter your mark1: " <<endl;
    cin >> marks.mark1;
    cout << "Please enter your mark2: " <<endl;
    cin >> marks.mark2;
    cout << "Please enter your mark3: " <<endl;
    cin >> marks.mark3;
}

void AvgMarks(strMarks &marks)
{
    marks.avgMarks = ((marks.mark1 + marks.mark2 + marks.mark3) / 3); 
}

void PrintMark(strMarks marks)
{
    if (marks.avgMarks >= 50)
    {
        cout << marks.avgMarks << endl;
        cout << "PASS" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}

int main()
{
    strMarks marks;
    ReadMark(marks);
    AvgMarks(marks);
    PrintMark(marks);
    return 0;
}