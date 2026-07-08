#include <iostream>
using namespace std;

void PrintAllCapitalLetters()
{
  for(int i = 65; i <= 90; i++)
  {
    cout << " All the Capital Letters: "<<  char(i) << endl;
  }
}

int main()
{
    PrintAllCapitalLetters();
    return 0;
}