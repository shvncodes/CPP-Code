#include<iostream>
using namespace std;

void swapNumbers(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int num1;
    int num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    swapNumbers(num1, num2);
    cout<<num1<<" "<<num2;


    return 0;
}