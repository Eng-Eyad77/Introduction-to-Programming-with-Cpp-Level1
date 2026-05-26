#include <iostream>
#include <cmath>
using namespace std;

float CalculateCircleAreaDiameter(int diameter)
{
    float pi = 3.14;
    float area;

    cout << "Please enter the Diameter: " << endl;
    cin >> diameter;

    area = (((diameter * diameter) * pi) / 4);

    return area;
}

int main()
{

    int diameter;
    float result = CalculateCircleAreaDiameter(diameter);
    cout << "the area of the circle through diameter is: " << result << endl;

    return 0;
}
