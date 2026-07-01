#include <iostream>
using namespace std;

struct strUser
{
    int mark;
};
void ReadMark(strUser &user)
{

    cout << "Please enter your mark: " <<endl;
    cin >> user.mark;
}

void PrintMark(strUser user)
{
    if (user.mark >= 50)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}

int main()
{
    strUser user;
    ReadMark(user);
    PrintMark(user);
    return 0;
}