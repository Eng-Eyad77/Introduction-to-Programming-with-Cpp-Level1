#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int diameter;
    float pi = 3.14;
    float area;

    cout << "Please enter the Diameter: "<< endl;
    cin >> diameter;


     area = ((pow(diameter, 2) * pi ) / 4);

    cout << "the area of the circle through diameter is: " << ceil(area) << endl;
    
    return 0;

}
