#include <iostream>
using namespace std;

int ReadNumber()
{
    cout << "Please enter a number so i make the counter stop at your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int n)
{

    for(int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}



int main()
{
    int entredNumber;
    entredNumber = ReadNumber();
    CalclateNumber(entredNumber);


    return 0;

}