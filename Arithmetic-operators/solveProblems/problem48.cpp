#include <iostream>
using namespace std;

int main(){

    int loanAmount, monthlyPayment, totalMonths;

    cout << "Please enter the amount of the loan: " <<endl;
    cin >> loanAmount;

    cout << "How many months you need to settle the loan: " << endl;
    cin >> totalMonths;

    monthlyPayment = loanAmount / totalMonths;

    cout << monthlyPayment << " Per a Month." << endl;

    return 0;
}