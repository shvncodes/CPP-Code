#include<iostream>
using namespace std;

int main() {
    int num;
    int digit;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the digit: ";
    cin>>digit;

    if(num < 0 || digit < 0) {
        cout<<"Invalid number.";
        return 0;
    }

    int count = 0;

    while(num > 0) {
        if(num % 10 == digit) {
            count++;
        }
        num = num / 10;
    }
    cout<<count;

    return 0;
}