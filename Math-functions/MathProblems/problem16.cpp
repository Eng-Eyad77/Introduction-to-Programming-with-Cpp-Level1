#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // to calculate rectangle area through diagonal and side area of rectangel

    int a,d;
    float area;
    cout << "Please enter the A: " << endl;
    cin >> a;

    cout << "Please enter the D: " << endl;
    cin >> d;


    area = a * sqrt(pow(d,2) - pow(a,2));

    cout << area << endl;


    return 0;
}