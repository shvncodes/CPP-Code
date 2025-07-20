#include<iostream>
using namespace std;

void swap(int &num1,int &num2) {
    int num3 = num1;
    num1 = num2;
    num2 = num3;
}

int main() {
    int num1;
    int num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    // int rem;

    // if(num1 == 0) {
    //     cout<<num2;
    // } else if( num2 == 0) {
    //     cout<<num1;
    // } else {

    // while(rem == 0) {
    //     if(num1 > num2) {
    //         rem = num1 % num2;
    //         num1 = num2;
    //         num2 = rem;
    //     } else {
    //         rem = num2 %num1;
    //         num1 = num2;
    //         num2 = rem;
    //     }
    // }
    
    // }



    if(num2 > num1) {
        swap(num1, num2);
    }

    while(num2 != 0) {
        int rem = num1%num2;
        num1 = num2;
        num2 = rem;
    }

    cout<<"ans = "<<num1;

    return 0;
}