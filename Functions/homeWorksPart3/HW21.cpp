#include <iostream>

using namespace std;
// this problem is to calculate Circle Area Along the Circumference

float calculateCircleAreaCircumference(int L)
{
    float pi = 3.14;
    float area;

    cout << "Please enter the L: "<< endl;
    cin >> L;


     area = (L * L) / (4 * pi);
     return area;
}
int main(){
    int L;
    float result = calculateCircleAreaCircumference(L);

    cout << "the area of the Circle Area Along the Circumference: " << result << endl;
    
    return 0;

}
