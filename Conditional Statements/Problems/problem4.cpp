#include <iostream>
using namespace std;

struct strInfo
{
    int age;
    bool driverLicense;

};
void ReadInfo(strInfo &Info)
{
    cout << "please enter your age :" << endl;
    cin >> Info.age;
    cout << "Do you have A Driver License type (1 for Yes - 0 for No) :" << endl;
    cin >> Info.driverLicense;

}

void PrintUserInfo(strInfo Info)
{
    if (Info.age > 21 && Info.driverLicense)
    {
        cout << "You are Hired!" << endl;
    }
    else
    {
        cout << "You are Rejected" << endl;
    }
}




int main()
{
    strInfo Info;
    ReadInfo(Info);
    PrintUserInfo(Info);

    return 0;
}