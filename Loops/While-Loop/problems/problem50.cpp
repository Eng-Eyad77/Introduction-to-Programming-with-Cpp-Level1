#include <iostream>
using namespace std;


int ReadATM(int atm)
{
    cout << "Please enter ATM code: " << endl;
    cin >> atm;

    return atm;
}

void ATMCheck(int atm)
{
    while (atm != 1234)
    {
        cout << "Wrong PIN Pls Try Again: " << endl;
        cin >> atm;
    }
    cout << "\nYour Balance is: 7500" << endl;
}

int main()
{
 int ATM;
ReadATM(ATM);
ATMCheck(ATM);

    return 0;
}