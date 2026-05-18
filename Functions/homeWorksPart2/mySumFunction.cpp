#include <iostream>
using namespace std;

int sumFunction(){
    int x,y;
    cout << "Please enter Number 1: " << endl;
    cin >> x;

    cout << "Please enter Number 2: " << endl;
    cin >> y;
   
    cout << "************************************" << endl;
    return x + y;
}

int main (){
cout << sumFunction() << endl; // if i want to add some of math oprations i can, the function here  like variable i can add /3 or ceil or round 
    return 0;
}