#include <iostream>
using namespace std;

void PrintNumbersAscending()
{
    for (int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{

PrintNumbersAscending();
    return 0;
}