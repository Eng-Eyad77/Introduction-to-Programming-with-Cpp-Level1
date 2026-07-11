#include <iostream>
using namespace std;


void PrintStarsDescending()
{
    for(int i = 10; i >= 1; i--)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << "*"; 
        }
        cout << "\n";
    }
}

int main()
{

PrintStarsDescending();
    return 0;
}