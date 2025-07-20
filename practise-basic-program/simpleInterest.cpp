#include<iostream>
using namespace std;

int main() {
    float principle, rate, time;
    cout<<"Enter the Principle value: ";
    cin>>principle;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time: ";
    cin>>time;
    float simpleInterest = (principle*rate*time)/100;
    cout<<"Simple interest is "<<simpleInterest;
    return 0;
}