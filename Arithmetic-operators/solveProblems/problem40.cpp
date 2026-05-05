#include <iostream>

using namespace std;

int main(){

    float billValue, totalBill;

    cout << "Please enter the Bill Value: " << endl;
    cin >> billValue;

    totalBill = billValue * 1.1; // to add the service fee to the bill - 1.1 is to add 10%
    totalBill = totalBill * 1.16; // to add sales tax to bill value wit the fee - 1.16 is to add 16%

    cout << "The Bill Value after Service fee and Sales tax is: " << totalBill << endl;


    return 0;

}
