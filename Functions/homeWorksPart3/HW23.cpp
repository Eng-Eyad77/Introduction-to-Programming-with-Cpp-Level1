#include <iostream>
#include <cmath>

using namespace std;
// this problem is to calculate Circle Area described around an arbitrary triangle

float calculateCircleAreaArbitrary(float a, float b, float c)
{
    float pi = 3.14;
    cout << "Please enter A: " << endl;
    cin >> a;

    cout << "Please enter B: " << endl;
    cin >> b;

    cout << "Please enter C: " << endl;
    cin >> c;

    float p = (a + b + c) / 2;

   float area = pi * (pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));

    return area;
}
int main()
{

    float a, b, c;
    float result = calculateCircleAreaArbitrary(a,b,c);
    cout << round(result) << endl;
    return 0;
}