#include <iostream>
using namespace std;




int main ()
{
   int grade;
   cout << "Please enter your grade: " << endl;
   cin >> grade;

   if (grade >= 90 && grade <= 100)
   {
        cout << "Your Grade is A" << endl;
   }
   else if (grade >= 80 && grade <= 89)
   {
        cout << "Your Grade is B" << endl;

   }
   else if (grade >= 70 && grade <= 79)
   {
        cout << "Your Grade is C" << endl;

   }
    else if (grade >= 60 && grade <= 69)
   {
        cout << "Your Grade is D" << endl;

   }
    else if (grade >= 50 && grade <= 59)
   {
        cout << "Your Grade is E" << endl;

   }
   else 
   {
     cout << "Your Grade is F" << endl;

   }

    return 0;
}