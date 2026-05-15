#include <iostream>
#include <string>

using namespace std;

int main(){
// convert string to double, int,float
    string st1 = "43.22";

    double st1_double = stod(st1);

    int st1_int = stoi(st1);

    float st1_float = stof(st1);

    cout << st1_double <<endl;
    cout << st1_int <<endl;
    cout << st1_float <<endl;

    //convert int to string
    int N1 = 23;
    string intToString = to_string(N1);
    cout << intToString << endl;

    //convert double to string
    double N2 = 33.5;
    string  doubleToString = to_string(N2);
    cout << doubleToString << endl;

    //convert float to string
    float N3 = 55.23;
    string floatToString = to_string(N3);
    int floatToInt = int(N3);
    cout << floatToInt << endl;
    cout << floatToString << endl;






    return 0;
}