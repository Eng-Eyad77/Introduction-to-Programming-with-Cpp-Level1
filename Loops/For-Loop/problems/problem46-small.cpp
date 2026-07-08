#include <iostream>
using namespace std;

void PrintAllSmallLetters()
{
  for(int i = 97; i <= 122; i++)
  {
    cout << " All the Small Letters: "<<  char(i) << endl;
  }
}

int main()
{
    PrintAllSmallLetters();
    return 0;
}