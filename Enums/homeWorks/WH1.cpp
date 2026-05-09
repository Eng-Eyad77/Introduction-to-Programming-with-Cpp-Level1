#include <iostream>
using namespace std;

struct UserAddress
{
    string city;
    string country;
    string street;
    string POBOX;
};

struct ContactInfo
{
    string phone;
    string email;
};

struct User
{
    string name;
    int age;
    float monthlySalary;
    // char gender;
    // bool isMarried;
    UserAddress address;
    ContactInfo contact;
};

enum Color
{
    Red,
    Black,
    Blue
};
enum Gender
{
    male,
    female
};
enum MarriedStatus
{
    singel,
    married
};

int main()
{
    User firstUser;
    Color myColor;
    Gender myGender;
    MarriedStatus myStatus;

    myColor = Color::Black;
    myGender = Gender::male;
    myStatus = MarriedStatus::singel;

    cout << "Please Enter Your Full Name: " << endl;
    cin >> firstUser.name;
    cout << "Please Enter Your Age: " << endl;
    cin >> firstUser.age;

    cout << "Please Enter Your City: " << endl;
    cin >> firstUser.address.city;
    cout << "Please Enter Your Country: " << endl;
    cin >> firstUser.address.country;
    cout << "Please Enter Your street: " << endl;
    cin >> firstUser.address.street;
    cout << "Please Enter Your POBOX: " << endl;
    cin >> firstUser.address.POBOX;

    cout << "Please Enter Your Salary Peer Month: " << endl;
    cin >> firstUser.monthlySalary;
    cout << "Please Enter Your Gender M OR F: " << endl;
    // cin >> firstUser.genser ;
    cout << "Are you Married 1-for yes 0-for no: " << endl;
    // cin >> firstUser.isMarried;

    cout << "Please Enter Your phone: " << endl;
    cin >> firstUser.contact.phone;
    cout << "Please Enter Your email: " << endl;
    cin >> firstUser.contact.email;

    cout << "please enter your favorite color" << endl;

    cout << "******************************************** \n";
    cout << "Name: " << firstUser.name << endl;
    cout << "Age: " << firstUser.age << " Years." << endl;
    cout << "City: " << firstUser.address.city << endl;
    cout << "Country: " << firstUser.address.country << endl;
    cout << "Country: " << firstUser.address.street << endl;
    cout << "Country: " << firstUser.address.POBOX << endl;
    cout << "Monthly Salary: " << firstUser.monthlySalary << endl;
    cout << "Yearly Salary: " << firstUser.monthlySalary * 12 << endl;
    // cout << "Gender: "<< firstUser.gender << endl;
    // cout << "Married: "<< firstUser.isMarried << endl;
    cout << "Gender: " << myGender << endl;
    cout << "Married: " << myStatus << endl;
    cout << "Country: " << firstUser.contact.phone << endl;
    cout << "Country: " << firstUser.contact.email << endl;
    cout << " your favorite color is: " << myColor << endl;

    cout << "******************************************** \n";
}