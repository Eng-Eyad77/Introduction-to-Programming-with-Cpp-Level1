#include <iostream>
using namespace std;


int ReadNumber()
{
    cout << "Please enter a number so i can sum the odd numbers from 1 to your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int n)
{
        int x = 0 ; // I have to make the variable initialized at zero so without this it well be a bug

    for(int i = 1; i <= n; i = i + 2)
    {
        x = x + i;
        
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