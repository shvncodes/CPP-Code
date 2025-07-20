#include<iostream>
using namespace std;

int productSumSubtract(int num) {
    int product = 1;
    int sum = 0;

    while(num > 0) {
        int rem = num % 10;
        product *= rem;
        sum += rem;
        num = num / 10;
    }

    int subtract = product - sum;

    return subtract; 
}

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num < 0) {
        cout<<"Invalid number.";
        return 0;
    }

    cout<<productSumSubtract(num);

    return 0;
}