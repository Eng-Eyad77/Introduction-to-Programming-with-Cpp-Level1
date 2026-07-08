#include <iostream>
using namespace std;


int ReadNumber()
{
    cout << "Please enter a number so i can calclate the factorial of your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int n)
{
        int x = 1 ;
    for(int i = n; i >= 1; i = i - 1)
    {
        x = x * i;
        
    }
    cout << "The factorial of your number is: " << x << endl;
    
}



int main()
{
    int entredNumber;
    entredNumber = ReadNumber();
    CalclateNumber(entredNumber);


    return 0;

}