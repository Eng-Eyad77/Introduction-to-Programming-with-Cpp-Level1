#include <iostream>
using namespace std;


int ReadNumber()
{
    cout << "Please enter a number so i can sum the odd numbers from 1 to your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int entredNumber)
{
    int n = 1;
    int x = 0 ; 

    while(n <= entredNumber)
    {
        x = x + n;
        n = n + 2;
    }
    cout << "The sum of odd numbers is: " << x << endl;
    
}



int main()
{
    int entredNumber;
    entredNumber = ReadNumber();
    CalclateNumber(entredNumber);


    return 0;

}