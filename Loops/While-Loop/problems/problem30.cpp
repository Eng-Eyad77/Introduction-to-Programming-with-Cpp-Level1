#include <iostream>
using namespace std;


int ReadNumber()
{
    cout << "Please enter a number so i can calclate the factorial of your number: " ;
    int number;
    cin >> number;

    return number;
}

// int i = n; i >= 1; i = i - 1
void CalclateNumber(int n)
{
    int factorial = 1 ;

    while(n < 0){

        cout << "this not a positive number pls enter another one: ";
        cin >> n;
    }

        while(n >= 1)
        {
            factorial = factorial * n;
            n--;
        }
    
    cout << "The factorial of your number is: " << factorial << endl;
    
}



int main()
{
    int entredNumber;
    entredNumber = ReadNumber();
    CalclateNumber(entredNumber);


    return 0;

}