#include <iostream>
using namespace std;
// this problem is to calculate Circle Area Inscribed in a Square

float CircleAreaInscribedSquare(int a)
{
    float pi = 3.14;
    float area;

    cout << "Please enter the A: "<< endl;
    cin >> a;


     area = ((a * a) * pi ) / 4;
    return area;
}


int main(){
   
    int a;
    float result = CircleAreaInscribedSquare(a);
     cout << "the area of the Circle Area Inscribed in a Square: " << result << endl;
    
    return 0;

}
