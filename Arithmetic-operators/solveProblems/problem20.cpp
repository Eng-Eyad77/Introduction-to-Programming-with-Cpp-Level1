#include <iostream>

using namespace std;
// this problem is to calculate Circle Area Inscribed in a Square
int main(){
    int a;
    float pi = 3.14;
    float area;

    cout << "Please enter the A: "<< endl;
    cin >> a;


     area = ((a * a) * pi ) / 4;

    cout << "the area of the Circle Area Inscribed in a Square: " << area << endl;
    
    return 0;

}
