#include <iostream>

using namespace std;

struct strInfo
{
    string firstName;
    string lastName;
    int age ;
    string phone;
};

void ReadInfo(strInfo& Info)
{
    cout << "Please enter your first name: " << endl;
    cin >> Info.firstName;

    cout << "Please enter your last name: " << endl;
    cin >> Info.lastName;

    cout << "Please enter your age: " << endl;
    cin >> Info.age;

    cout << "Please enter your phone: " << endl;
    cin >> Info.phone;

    // cout << "Please enter your first name: " << endl;
    // cin >> Person[1].firstName;

    // cout << "Please enter your last name: " << endl;
    // cin >> Person[1].lastName;

    // cout << "Please enter your age: " << endl;
    // cin >> Person[1].age;

    // cout << "Please enter your phone: " << endl;
    // cin >> Person[1].phone;
}

void PrintInfo(strInfo& Info)
{
    cout << "***************************************" << endl;
    cout << "first name is: " <<Info.firstName <<endl;
    cout << "last name is: " <<Info.lastName <<endl;
    cout << "age is: " <<Info.age <<endl;
    cout << "your phone is: " <<Info.phone <<endl;
    cout << "***************************************" << endl;

}


void ReadPersonsInfo(strInfo Person[2])
{
    ReadInfo(Person[0]);
    ReadInfo(Person[1]);
}


void PrintPersonsInfo(strInfo Person[2])
{
    PrintInfo(Person[0]);
    PrintInfo(Person[1]);
}

int main()
{
    strInfo Person[2];
    ReadPersonsInfo(Person);
    PrintPersonsInfo(Person);

    return 0;
}