#include <iostream>

using namespace std;

int main(){
     int mark1, mark2, mark3, avgMarks;

    cout << "Please enter Mark1:" << endl;
    cin >> mark1;

    cout << "Please enter Mark2:" << endl;
    cin >> mark2;

    cout << "Please enter Mark3:" << endl;
    cin >> mark3;

    avgMarks = (mark1 + mark2 + mark3) / 3;

    cout << "Average of all Marks is: " << avgMarks << endl;
    return 0;

}
