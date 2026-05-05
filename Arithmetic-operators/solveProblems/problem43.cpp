#include<iostream>
using namespace std;

int main(){
    
    int totalSeconds;
    int secondsPerDay =  24 * 60 * 60;
    int secondsPerHour =   60 * 60;
    int secondsPerMinute =   60;  
    
    
    cout<< "Enter the total seconds i well conver it to days-hours-minutes-seconds: " << endl;
    cin >> totalSeconds;

    int numOfDays = totalSeconds / secondsPerDay ;
    int remainder = totalSeconds % secondsPerDay;

    int numOfHours = remainder / secondsPerHour;
     remainder = remainder % secondsPerHour;

    int numOfMinutes = remainder / secondsPerMinute;
     remainder = remainder % secondsPerMinute;

    int numOfSeconds =  remainder;
   
    cout << numOfDays << ":" << numOfHours << ":" << numOfMinutes << ":" << numOfSeconds<<endl;


    return 0;
}