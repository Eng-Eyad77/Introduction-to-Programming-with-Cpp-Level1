#include <iostream>
using namespace std;


void SwapNumber(int &num1,int &num2){
    int tempNum;

    tempNum = num1;
    num1 = num2;
    num2 = tempNum;

    cout << "The first Number after swap inside function: " << num1 << endl;
    cout << "The second Number after swap inside function: " << num2 << endl;

}

int main(){
     int num1,num2;
    cout << "Please enter the first Number:" << endl;
    cin >> num1;

    cout << "Please enter the second Number:" << endl;
    cin >> num2;

    cout << "The first Number is: " << num1 << endl;
    cout << "The second Number is: " << num2 << endl;

    SwapNumber(num1, num2);

    cout << "The first Number after swap in the main: " << num1 << endl;
    cout << "The second Number after swap in the main: " << num2 << endl;

    return 0;
}