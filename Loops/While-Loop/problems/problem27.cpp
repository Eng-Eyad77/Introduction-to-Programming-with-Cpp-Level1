#include <iostream>
using namespace std;




int ReadNumber()
{
    cout << "Please enter a number so i make the counter to stop at zero from your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int entredNumber)
{

    int n = entredNumber;
    while(n >= 0)
    {
        cout << n << endl;
        n--;
    }
}



int main()
{
    int entredNumber;
    entredNumber = ReadNumber();
    CalclateNumber(entredNumber);


    return 0;

}