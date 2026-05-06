#include <iostream>

using namespace std;

int main()
{
    // this is the 5th column
    cout << "(5 > 6 and 7 = 7) or (1 or 0) is : " << ((5 > 6 && 7 == 7) || (1 ||0)) << endl;
    cout << " not (5 > 6 and 7 = 7) or (1 or 0) is : " << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;
    cout << "not(5 > 6 and 7 = 7) or not(1 or 0) is : " << (!(5 > 6 && 7 == 7) || !(1||0)) << endl;
    cout << "not(5 > 6 or 7 = 7) and not(1 or 0) is : " << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;
    cout << "((5 > 6 and 7 <= 8) or (8 > 1 and 4 <= 3)) and True is : " << ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) << endl;
    cout << "((5 > 6 and not(7 <= 8)) and (8 > 1 or 4 <= 3)) or True is : " << (((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || 1) << endl;

    return 0;
}