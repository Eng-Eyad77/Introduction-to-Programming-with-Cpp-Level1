#include <iostream>
using namespace std;

void ReadAndCalculateUserNumbers()
{
    int entredNumbers;
    int sumNumbers =0;


    cout << "Please enter a number: " << endl;
    cin >> entredNumbers;


    while(entredNumbers != -99)
    {
        
    sumNumbers = sumNumbers + entredNumbers;

    cout << "Please enter a number: " << endl;
    cin >> entredNumbers;


    }

    cout << "The sum of all entred numbers is: " << sumNumbers<< endl;
}



int main()
{   
ReadAndCalculateUserNumbers();

    return 0;
}