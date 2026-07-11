#include<iostream>
using namespace std;

int main()
{
    int entreadNum;
    int sum = 0;
    for(int i = 1; i <= 5; i++)
    {
        cout << "Please enter a Number: ";
        cin >> entreadNum;

        if(entreadNum >= 50)
        {
            cout << "The number is greater than 50 and won`t be calculated." << endl;
            continue;
        }
         sum += entreadNum;
        
    }
    cout << "the sum of the 5 entread numbers is: " << sum << endl;

    return 0;
}