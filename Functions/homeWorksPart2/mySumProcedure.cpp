#include <iostream>
using namespace std;

void sumProcedure(){
    int x,y;
    cout << "Please enter Number 1: " << endl;
    cin >> x;
    // cout << "10" << endl;
    cout << "Please enter Number 2: " << endl;
    cin >> y;
    // cout << "20" << endl;
    cout << "************************************" << endl;
    cout << x + y << endl;
}

int main (){
    sumProcedure();

    return 0;
}