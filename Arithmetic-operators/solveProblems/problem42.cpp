#include<iostream>
using namespace std;

int main(){

    int days, hours,minutes,seconds;

    cout<< "How many days? " << endl;
    cin >> days;

    cout<< "How many hours? " << endl;
    cin >> hours;


    cout<< "How many minutes? " << endl;
    cin >> minutes;


    cout<< "How many seconds? " << endl;
    cin >> seconds;

    float totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds; // the seconde per a day is 86400 - and per a hour is 3600

    cout << "the total seconds is: " << totalSeconds <<endl;


    return 0;
}