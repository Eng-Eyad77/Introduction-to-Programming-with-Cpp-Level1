#include <iostream>
using namespace std;

int ReadNumber()
{
    cout << "Please enter a number so i make the counter stop at your number: " ;
    int number;
    cin >> number;

    return number;
}


void CalclateNumber(int entredNumber)
{
     int n = 1;
    while(n <= entredNumber)
    {
        cout << n << endl;
        n++;
    }
}



int main()
{
    int entredNumber;
    entredNumber = ReadNumber();
    CalclateNumber(entredNumber);


    return 0;

}