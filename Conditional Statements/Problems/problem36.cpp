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


   if (operationType == '+')
   {
        cout << number1 << " + " <<  number2 << " = " << number1 + number2 <<  endl;
   }
   else if (operationType == '-')
   {
        cout << number1 << " - " <<  number2 << " = " << number1 - number2 <<  endl;

   }
    else if (operationType == '*')
   {
        cout << number1 << " * " <<  number2 << " = " << number1 * number2 <<  endl;

   }
    else 
   {
        cout << number1 << " / " <<  number2 << " = " << number1 / number2 <<  endl;


   }

    return 0;
}