#include<iostream>
using namespace std;

int main() {
    float num1, num2, num3;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    
    if(num1 > num2) {
        if(num1 > num3) {
            cout<<num1<<" is the maximum number.";
        } else {
            cout<<num3<<" is the maximum number.";
        }
    } else { // num2 >= num1
        if(num2 > num3) {
            cout<<num2<<" is the maximum number.";
        } else {
            cout<<num3<<" is the maximum number.";
        }
    }
    return 0;
}