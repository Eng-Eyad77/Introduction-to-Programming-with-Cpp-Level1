#include <iostream>
using namespace std;


void PrintNumbersDescending()
{
    for(int i = 1; i <= 10; i++) // vertical "|||||"
    {
        for(int j = i; j <=10; j++) // this always well be the first loop i will see the output before the i loop
        {                           // horizontal "------"
           
            cout << j << " " ; 
        }
        cout << "\n";
    }
}

int main()
{

PrintNumbersDescending();
    return 0;
}