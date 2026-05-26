#include <iostream>

using namespace std;
// this problem is to calculate Circle Area Inscribed in an Isosceles Triangle

float calculateCircleAreaInscribedIsosceles(float a, float b)
{
    float pi = 3.14;
     cout << "Please enter A: " <<endl;
    cin >> a;

    cout << "Please enter B: " <<endl;
    cin >> b;

   float  area =   (pi * ((b * b) / 4)) * ((2 * a - b) / (2 * a + b));

   return area;
}

int main(){
    float a,b;
    float result = calculateCircleAreaInscribedIsosceles(a,b);
    cout << "the area of the Circle Area Inscribed in an Isosceles Triangle: " << result << endl;
    return 0;
}