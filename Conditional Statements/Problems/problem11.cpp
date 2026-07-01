// with functions and procedure

#include <iostream>
using namespace std;

struct strMarks
{
    int mark1;
    int mark2;
    int mark3;
    int avgMarks;

};
strMarks ReadMark()
{
    strMarks mar;
    cout << "Please enter your mark1: " <<endl;
    cin >> mar.mark1;
    cout << "Please enter your mark2: " <<endl;
    cin >> mar.mark2;
    cout << "Please enter your mark3: " <<endl;
    cin >> mar.mark3;

    return mar;
}

strMarks AvgMarks(strMarks Mar)
{
    
    Mar.avgMarks = ((Mar.mark1 + Mar.mark2 + Mar.mark3) / 3); 
    return Mar;
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
    marks = ReadMark();
    marks = AvgMarks(marks);
    PrintMark(marks);
    return 0;
}