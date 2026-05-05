#include <iostream>

using namespace std;

int main()
{
    int num1, num2, tempNum;

    cout << "Please enter the first Number:" << endl;
    cin >> num1;

    cout << "Please enter the second Number:" << endl;
    cin >> num2;

    cout << "The first Number is: " << num1 << endl;
    cout << "The second Number is: " << num2 << endl;

  

    tempNum = num1;
    num1 = num2;
    num2 = tempNum;

    cout << "The first Number after swap is: " << num1 << endl;
    cout << "The second Number after swap is: " << num2 << endl;

    return 0;
}
