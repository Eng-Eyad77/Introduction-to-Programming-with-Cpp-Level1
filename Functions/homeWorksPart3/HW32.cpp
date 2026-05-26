#include <iostream>
#include <cmath>
using namespace std;

float CalculateCoustomPowers(int enterdNumber, int enterdPowerNumber)
{
    int result;

    cout << "Please enter a Number: " << endl;
    cin >> enterdNumber;

    cout << "Please enter a enterd Power Number: " << endl;
    cin >> enterdPowerNumber;

    result = pow(enterdNumber, enterdPowerNumber);

    return result;
}

int main()
{

    int enterdNumber, enterdPowerNumber;
    float result = CalculateCoustomPowers(enterdNumber, enterdPowerNumber);
    cout << round(result) << endl;

    return 0;
}