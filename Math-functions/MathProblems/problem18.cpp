#include <iostream>
#include <cmath>

using namespace std;

int main(){ 
// calculate circle area 

    int r;
    float pi= 3.14, area ;

    cout << "Please enter r: " << endl;
    cin >> r;

    area = pi * pow(r, 2);

    cout << ceil(area) << endl;


    return 0;

}