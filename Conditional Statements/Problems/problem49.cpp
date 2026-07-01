#include <iostream>
using namespace std;

struct strATM
{
    int pin;
};
void ReadInfo(strATM &Info)
{
    cout << "please enter your ATM PIN :" << endl;
    cin >> Info.pin;
}

void PrintUserInfo(strATM Info)
{
    if (Info.pin == 1234)
    {
        cout << "Your Balance is: 7500" << endl;
    }
    else
    {
        cout << "Wrong PIN" << endl;
    }
}




int main()
{
    strATM Info;
    ReadInfo(Info);
    PrintUserInfo(Info);

    return 0;
}