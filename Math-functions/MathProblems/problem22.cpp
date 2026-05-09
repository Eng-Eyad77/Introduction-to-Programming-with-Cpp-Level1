#include <iostream>
#include <cmath>
using namespace std;
// this problem is to calculate Circle Area Inscribed in an Isosceles Triangle
int main(){
    float pi = 3.14;
    double a,b;

    cout << "Please enter A: " <<endl;
    cin >> a;

    cout << "Please enter B: " <<endl;
    cin >> b;

    float area =   (pi *  pow(b , 2) / 4) * ((2 * a - b) / (2 * a + b));
    
    cout << "the area of the Circle Area Inscribed in an Isosceles Triangle: " << floor(area) << endl;
    return 0;
}