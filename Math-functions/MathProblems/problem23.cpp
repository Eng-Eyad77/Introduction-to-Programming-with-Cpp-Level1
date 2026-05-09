#include <iostream>
#include <cmath>

using namespace std;
// this problem is to calculate Circle Area described around an arbitrary triangle
int main()
{

    float pi = 3.14;
    float a, b, c, area;

    cout << "Please enter A: " << endl;
    cin >> a;

    cout << "Please enter B: " << endl;
    cin >> b;

    cout << "Please enter C: " << endl;
    cin >> c;

    float p = (a + b + c) / 2;

    area = pi * (pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));


    cout << round(area) << endl;
    return 0;
}