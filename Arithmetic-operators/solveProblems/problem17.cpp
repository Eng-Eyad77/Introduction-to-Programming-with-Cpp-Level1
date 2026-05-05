#include <iostream>

using namespace std;

int main(){
    int base,height;

    cout << "Please enter the Base of the triangle: "<< endl;
    cin >> base;

    cout << "Please enter the height of the triangle: " << endl;
    cin >> height;

    int area = (base/2)*height;

    cout << "the area of the triangle is: " << area << endl;
    
    return 0;

}
