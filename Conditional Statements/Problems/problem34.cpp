#include <iostream>
using namespace std;



int main(){

    double totalSales;
    cout << "Please enter your total sales: " <<endl;
    cin >> totalSales;

    if (totalSales >= 1000000)
    {
        cout << "you will take: " << totalSales * 0.01 << endl;
    }
    else if (totalSales >= 500000 && totalSales < 1000000)
    {
        cout << "you will take: " << totalSales * 0.02 << endl;

    }
    else if (totalSales >= 100000 && totalSales < 500000)
    {
        cout << "you will take: " << totalSales * 0.03 << endl;

    }
    else if (totalSales >= 50000 && totalSales < 1000000)
    {
        cout << "you will take: " << totalSales * 0.05 << endl;

    }
    else 
    {
        cout << "you will not take anything" << endl;
    }

    return 0;
}