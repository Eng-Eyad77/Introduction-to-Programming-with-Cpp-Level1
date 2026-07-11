#include <iostream>
using namespace std;

void PrintAllSmallLetters()
{
    int L = 97;
  while (L <= 122)
  {
      cout << " All the Small Letters: "<<  char(L) << endl;
      L++;
  }
}

int main()
{
    PrintAllSmallLetters();
    return 0;
}



