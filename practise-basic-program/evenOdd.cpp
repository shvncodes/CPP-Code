#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the integer: ";
    cin>>num;
                    // Method - 1
    // if(num%2 == 0) {
    //     cout<<"The integer is even.";
    // } else {
    //     cout<<"The integer is odd.";
    // }

                    // Method - 2
    if(num & 1 == 1) {
        cout<<"The integer is odd.";
    } else {
        cout<<"The integer is even.";
    }
    return 0;
}