#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int enterdNumber,enterdPowerNumber, result;

    cout << "Please enter a Number: " << endl;
    cin >> enterdNumber;

    cout << "Please enter a enterd Power Number: " << endl;
    cin >> enterdPowerNumber;

    result = pow(enterdNumber, enterdPowerNumber);

  cout << round(result) << endl;

    return 0;
}