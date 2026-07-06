// using switch case
#include <iostream>
using namespace std;

int main()
{

    int number1, number2;
    char operationType;
   cout << "Please enter Number1: " << endl;
   cin >> number1;

   cout << "Please enter number2: " << endl;
   cin >> number2;

   cout << "Please enter Operation Type: " << endl;
   cin >> operationType;

switch (operationType)
{
     case '+': 
     cout << number1 << " + " <<  number2 << " = " << number1 + number2 <<  endl;
     break;

     case '-':
     cout << number1 << " - " <<  number2 << " = " << number1 - number2 <<  endl;
     break;

     case '*':
     cout << number1 << " * " <<  number2 << " = " << number1 * number2 <<  endl;
     break;

     default:
     cout << number1 << " / " <<  number2 << " = " << number1 / number2 <<  endl;
     break;
}

    return 0;
}