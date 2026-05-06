#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cout << "Please enter the first number A: " << endl;
    cin >> a;

    cout << "Please enter the second number B: " << endl;
    cin >> b;

    cout << a << "=" << b << "is " << (a == b) << endl;
    cout << a << "!=" << b << "is " << (a != b) << endl;
    cout << a << ">" << b << "is " << (a > b) << endl;
    cout << a << "<" << b << "is " << (a < b) << endl;
    cout << a << ">=" << b << "is " << (a >= b) << endl;
    cout << a << "<=" << b << "is " << (a <= b) << endl;

    return 0;
}