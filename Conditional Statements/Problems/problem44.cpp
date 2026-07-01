#include <iostream>
using namespace std;

int main()
{
int day;
cout << "Please enter a number: " << endl;
cin >> day;

if (day == 1)
{
    cout << "It`s Sunday!" << endl;
}
else if (day == 2)
{
    cout << "It`s Monday!" << endl;
}
else if (day == 3)
{
    cout << "It`s Tuseday!" << endl;
}
else if (day == 4)
{
    cout << "It`s Wednesday!" << endl;
}
else if (day == 5)
{
    cout << "It`s Thursday!" << endl;
}
else if (day == 6)
{
    cout << "It`s Friday!" << endl;
}
else if (day == 7)
{
    cout << "It`s Saturday!" << endl;
}
else 
{
    cout << "Wrong Day" << endl;
}
    return 0;
}