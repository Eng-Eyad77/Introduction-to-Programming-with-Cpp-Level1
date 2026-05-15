#include <iostream>

#include <string>

using namespace std;

int main(){

    string fullName;
    string st1,st2;
    int sum;
    cout << "Please enter a Full name" << endl;
    getline(cin, fullName);

    cout << "Please enter string 1" << endl;
    cin >> st1;

    cout << "Please enter string 2" << endl;
    cin >> st2;

    sum = stoi(st1) + stoi(st2);

    cout << "-----------------------------------" << endl;
    cout << "The Length of full name is:    " << fullName.length() << endl;
    cout << "Characters at 0,2,5,11 are: " << fullName[0] <<" "<<  fullName[2] << " " << fullName[5] << " " << fullName[6] << endl;
    cout << "Concatenating st1 and st2 = " << st1 + st2 << endl;
    cout << "the sum of st1 and st2 is: " <<  sum << endl;





    return 0;
}