#include <iostream>

using namespace std;

int main(){

    float totalBill, cashPaid, remainder;

    cout << "How much is the total bill? " << endl;
    cin >> totalBill;

    cout << "How much the coustomer paid in cash? " << endl;
    cin >> cashPaid;
    
    remainder = cashPaid - totalBill;

    cout << "The remainder to be paid back to the coustomer is: " << remainder << endl;
   

    return 0;

}
