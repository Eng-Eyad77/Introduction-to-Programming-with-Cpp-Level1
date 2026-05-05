#include <iostream>
using namespace std;

int main(){

    int enterdNumber, numOf2, numOf3, numOf4;

    cout << "Please enter a Number: " << endl;
    cin >> enterdNumber;

    numOf2 = enterdNumber * enterdNumber;
    numOf3 = enterdNumber * enterdNumber * enterdNumber;
    numOf4 = enterdNumber * enterdNumber * enterdNumber * enterdNumber;

    cout << "Your Number Power of 2 is: " << numOf2 << endl;
    cout << "Your Number Power of 3 is: " << numOf3 << endl;
    cout << "Your Number Power of 4 is: " << numOf4 << endl;

    return 0;
}