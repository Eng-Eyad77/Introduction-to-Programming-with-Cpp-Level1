#include <iostream>
#include <cmath>
using namespace std;
// this problem is to calculate Circle Area Along the Circumference
int main(){
    int L;
    float pi = 3.14;
    float area;

    cout << "Please enter the L: "<< endl;
    cin >> L;


     area = pow(L , 2) / (4 * pi);

    cout << "the area of the Circle Area Along the Circumference: " << floor(area) << endl;
    
    return 0;

}
