#include <iostream>
using namespace std;


struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string city;
    string country;
    int monthSalary;
    char gender;
    bool isMarried;
};


void ReadInfo(strInfo &info)
{
    cout << "Please enter the first name: " << endl;
    cin >> info.firstName;
    
    cout << "Please enter the last name: " << endl;
    cin >> info.lastName;

    cout << "Please enter your age: " << endl;
    cin >> info.age;

    cout << "Please enter your city: " << endl;
    cin >> info.city;

    cout << "Please enter your country: " << endl;
    cin >> info.country;

    cout << "Please enter your monthSalary: " << endl;
    cin >> info.monthSalary;

    cout << "Please enter your gender: " << endl;
    cin >> info.gender;

    cout << "Are you married? " << endl;
    cin >> info.isMarried;
}

void PrintInfo(strInfo info)
{
      cout << "******************************************** \n";
    cout << "First Name: " << info.firstName <<endl;
    cout << "Last Name: " << info.lastName <<endl;
    cout << "Age: "<< info.age <<" Years." <<  endl;
    cout << "City: "<< info.city << endl;
    cout << "Country: "<< info.country << endl;
    cout << "Monthly Salary: "<< info.monthSalary << endl;
    cout << "Yearly Salary: "<< info.monthSalary * 12 << endl;
    cout << "Gender: "<< info.gender << endl;
    cout << "Married: "<< info.isMarried << endl;
    
    cout << "******************************************** \n";
}





int main()
{   
    strInfo Person1;
    ReadInfo(Person1);
    PrintInfo(Person1); 

    return 0;
}