#include <iostream>
using namespace std;
#include <cmath>

float CalculatCircleArea(int r)
{   
    cout << "please enter r: "<< endl;
    cin>> r;
    float area = 3.14 * pow(r,2);
    return area;
}

int main(){

    int r;
    float result = CalculatCircleArea(r);
    cout << "the area of the Circle Area is: " << result << endl;

    return 0;
}