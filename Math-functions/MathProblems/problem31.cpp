#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int enterdNumber, numOf2, numOf3, numOf4;

    cout << "Please enter a Number: " << endl;
    cin >> enterdNumber;

    numOf2 = pow(enterdNumber , 2 );
    numOf3 = pow(enterdNumber , 3 );
    numOf4 = pow(enterdNumber , 4 );

    cout << "Your Number Power of 2 is: " << round(numOf2) << endl;
    cout << "Your Number Power of 3 is: " << round(numOf3) << endl;
    cout << "Your Number Power of 4 is: " << round(numOf4) << endl;

    return 0;
}