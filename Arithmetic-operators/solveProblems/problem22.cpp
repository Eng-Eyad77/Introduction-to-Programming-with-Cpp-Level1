#include <iostream>

using namespace std;
// this problem is to calculate Circle Area Inscribed in an Isosceles Triangle
int main(){
    int a,b;
    float pi = 3.14;

    cout << "Please enter A: " <<endl;
    cin >> a;

    cout << "Please enter B: " <<endl;
    cin >> b;

    float area =   (pi * ((b * b) / 4)) * ((2 * a - b) / (2 * a + b));
    
    cout << "the area of the Circle Area Inscribed in an Isosceles Triangle: " << area << endl;
    return 0;
}