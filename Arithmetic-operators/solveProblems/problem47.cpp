#include <iostream>
using namespace std;

int main(){

    int loanAmount, monthlyPayment, totalMonths;

    cout << "Please enter the amount of the loan: " <<endl;
    cin >> loanAmount;

    cout << "and enter the monthly payment: " << endl;
    cin >> monthlyPayment;

    totalMonths = loanAmount / monthlyPayment;

    cout << totalMonths << " Months" << endl;

    return 0;
}