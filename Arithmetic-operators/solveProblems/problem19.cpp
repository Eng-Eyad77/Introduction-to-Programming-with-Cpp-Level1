#include <iostream>

using namespace std;

int main(){
    int diameter;
    float pi = 3.14;
    float area;

    cout << "Please enter the Diameter: "<< endl;
    cin >> diameter;


     area = (((diameter * diameter) * pi ) / 4);

    cout << "the area of the circle through diameter is: " << area << endl;
    
    return 0;

}
