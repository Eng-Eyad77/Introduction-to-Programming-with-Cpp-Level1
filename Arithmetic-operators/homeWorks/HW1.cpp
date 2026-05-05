#include <iostream>

using namespace std;

int main()
{

    int num1, num2;

    cout << "Please enter the first Number A: " << endl;
    cin >> num1;

    cout << "Please enter the second Number B: " << endl;
    cin >> num2;

    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
    cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;

    return 0;
}