#include <iostream>
using namespace std;
#include <cmath>
float CalculateRectangelDiagonal(int a, int d)
{   
    cout << "Please enter the A: " <<endl;
    cin >> a;
    cout << "Plaese enter the D: " <<endl;
    cin >> d;
    float area = a * sqrt(pow(d,2) - pow(a,2));
    // cout << "the area is: " << area << endl;
    return area;  
}
int main(){
    int a,d;
   float result = CalculateRectangelDiagonal(a,d);
   cout << "the area is: " << result <<endl;
    return 0;
}