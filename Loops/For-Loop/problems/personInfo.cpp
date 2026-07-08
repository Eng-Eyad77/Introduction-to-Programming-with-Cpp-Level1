// this problem was in array home-work now i well do it with loops - lesson 41 
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

    cout << "Please enter first name: " << endl;
    cin >> Info.firstName;

    cout << "Please enter last name: " << endl;
    cin >> Info.lastName;

    cout << "Please enter age: " << endl;
    cin >> Info.age;

    cout << "Please enter phone: " << endl;
    cin >> Info.phone;

    
}

void PrintInfo(strInfo Info)
{
    cout << "***************************************" << endl;
    cout << "first name is: " <<Info.firstName <<endl;
    cout << "last name is: " <<Info.lastName <<endl;
    cout << "age is: " <<Info.age <<endl;
    cout << "your phone is: " <<Info.phone <<endl;
    cout << "***************************************" << endl;

}


void ReadPersonsInfo(strInfo Person[100], int& personNum)
{
    cout << "How Many persons you want to enter? 1 to 100: " << endl;
    cin >> personNum;

    for(int i = 0; i <= personNum - 1; i++)
    {
        cout << "Please enter Person`s " << i + 1 << " Info" << endl;
        ReadInfo(Person[i]);
    }

    
}


void PrintPersonsInfo(strInfo Person[100], int personNum)
{
for(int i = 0; i <= personNum - 1; i++)
   {
        cout << "Person`s " << i + 1 << " Info" << endl;
         PrintInfo(Person[i]); 
   }   
}

int main()
{
    strInfo Person[100];
    int personNum = 0;
    ReadPersonsInfo(Person , personNum);
    PrintPersonsInfo(Person, personNum);

    return 0;
}