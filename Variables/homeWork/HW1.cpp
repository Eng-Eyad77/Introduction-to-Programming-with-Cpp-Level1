#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    string city;
    string country;
    float monthlySalary;
    char gender;
    bool isMarried; 

    cout << "Please Enter Your Full Name: " << endl;
    cin >> name;
    cout << "Please Enter Your Age: " << endl;
    cin >> age;
    cout << "Please Enter Your City: " << endl;
    cin >> city;
    cout << "Please Enter Your Country: " << endl;
    cin >> country;
    cout << "Please Enter Your Salary Peer Month: " << endl;
    cin >> monthlySalary;
    cout << "Please Enter Your Gender M OR F: " << endl;
    cin >> gender;
    cout << "Are you Married 1-for yes 0-for no: " << endl;
    cin >> isMarried;







    cout << "******************************************** \n";
    cout << "Name: " << name <<endl;
    cout << "Age: "<< age <<" Years." <<  endl;
    cout << "City: "<< city << endl;
    cout << "Country: "<< country << endl;
    cout << "Monthly Salary: "<< monthlySalary << endl;
    cout << "Yearly Salary: "<< monthlySalary * 12 << endl;
    cout << "Gender: "<< gender << endl;
    cout << "Married: "<< isMarried << endl;
    cout << "******************************************** \n";


}