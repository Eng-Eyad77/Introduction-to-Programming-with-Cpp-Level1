#include <iostream>
using namespace std;

void PrintLettersDescending()
{
    for(int i = 65; i <= 90; i++ )
    {
        for(int j = 65; j <= i; j++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }
}

int main()
{   

    PrintLettersDescending();
    return 0;
}