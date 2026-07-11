#include <iostream>
using namespace std;


int ReadNumber()
{
    cout << "Please enter a number so i can sum the even numbers from 1 to your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int entredNumber)
{
    int n = 0;
    int x = 0 ; 

    while(n <= entredNumber)
    {
        x = x + n;
        n = n + 2;
    }
    cout << "The sum of even numbers is: " << x << endl;
    
}



int main()
{
    int entredNumber;
    entredNumber = ReadNumber();
    CalclateNumber(entredNumber);


    return 0;

}