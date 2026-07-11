#include <iostream>
using namespace std;


void PrintAllCapitalLetters()
{
  for(int i = 65; i <= 90; i++)
  {
    cout << " the table of: "<<  char(i) << endl;
    for (int j = 65; j <= 90; j++)
    {
        cout << char(i) << char(j) << endl;
    }
    cout << "************************" << endl;
  }
}

int main()
{
    PrintAllCapitalLetters();
    return 0;
}