#include <iostream>
using namespace std;




int ReadNumber()
{
    cout << "Please enter a number so i make the counter to stop at zero from your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int n)
{

    for(int i = n ; i >= 1; i = i = i - 1)
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