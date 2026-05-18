#include <iostream>

using namespace std;

void printMyName(string name){
    cout << "Hello" << " " << name << endl;
}


int main(){
    string name;
    cout << "Enter your Name please: " << endl;
    cin >> name;
    printMyName(name); 

    return 0;
}