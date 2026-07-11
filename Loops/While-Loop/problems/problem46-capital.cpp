#include <iostream>
using namespace std;

void PrintAllCapitalLetters()
{
    int L = 65;
  while (L <= 90)
  {
      cout << " All the Capital Letters: "<<  char(L) << endl;
      L++;
  }
}

int main()
{
    PrintAllCapitalLetters();
    return 0;
}



