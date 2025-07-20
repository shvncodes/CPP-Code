#include<iostream>
using namespace std;

float moneyReceived(int const money, float factor = 1.05) {
    // money = 1000; // we cannot re-initialize the constant variable
    return money*factor;
}

int main() {
    int money;
    cout<<"Enter the money price in Rs: "<<endl;
    cin>>money;
    cout<<"If you have "<<money<<"Rs in you bank account, you will receive "<<moneyReceived(money)<<
    "Rs after 1 year."<<endl; //Default argument
    cout<<"If you have "<<money<<"Rs in you bank account, you will receive "<<moneyReceived(money,1.2)<<
    "Rs after 1 year."<<endl;
    
    return 0;
}