#include <iostream>

using namespace std;

int CalculateRectangleArea(int width, int length)
{

    cout << "Please enter the Length of the rectangel: " << endl;
    cin >> length;

    cout << "Please enter the Width of the rectangel: " << endl;
    cin >> width;

    int area = width * length;
    cout << "The area of the rectangle is: " << area << endl;

    return area;
}

int main()
{

    int width, length;

    CalculateRectangleArea(width,length);
    return 0;
}
