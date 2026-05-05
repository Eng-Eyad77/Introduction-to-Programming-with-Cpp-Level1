#include <iostream>
using namespace std;

int main (){
    
    int penny = 1;
    int nickel = 5;
    int dime = 10;
    int quarter = 25;
    int dollar = 100;
    int enterdPenny, enterdNickel, enterdDime, enterdQuarter, enterdDollar;
    float totalPennies;
    float totalDollars;

    cout << " Please enter the Punny: " << endl;
    cin >> enterdPenny;

    cout << " Please enter the Nickel: " << endl;
    cin >> enterdNickel;

     cout << " Please enter the Dime: " << endl;
    cin >> enterdDime;

     cout << " Please enter the Quarter: " << endl;
    cin >> enterdQuarter;
    
     cout << " Please enter the Dollar: " << endl;
    cin >> enterdDollar;

    enterdPenny *= penny;
    enterdNickel *= nickel;
    enterdDime *= dime;
    enterdQuarter *= quarter;
    enterdDollar *= dollar;

    totalPennies = enterdPenny + enterdDime + enterdDollar + enterdNickel + enterdQuarter;
    totalDollars = totalPennies / 100;

    cout << "Total Pennies is: " << totalPennies << endl;
    cout << "Total Dollars is: " << totalDollars << endl;


    return 0;
}
