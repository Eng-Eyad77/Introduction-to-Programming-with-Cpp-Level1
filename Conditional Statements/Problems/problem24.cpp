#include <iostream>
using namespace std;

struct strInfo
{
    int age;
};
void ReadInfo(strInfo &Info)
{
    cout << "please enter your age :" << endl;
    cin >> Info.age;
}

void PrintUserInfo(strInfo Info)
{
    if (Info.age > 18 && Info.age < 45)
    {
        cout << "Valid Age" << endl;
    }
    else
    {
        cout << "Invalid Age" << endl;
    }
}




int main()
{
    strInfo Info;
    ReadInfo(Info);
    PrintUserInfo(Info);

    return 0;
}