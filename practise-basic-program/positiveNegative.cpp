#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the integer: ";
    cin>>num;

    if(num > 0) {
        cout<<num<<" is positive integer.";
    } else if(num == 0) {
        cout<<num<<" is zero.";
    } else {
        cout<<num<<" is negative integer.";
    }

    return 0;
}