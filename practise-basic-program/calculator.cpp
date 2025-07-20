#include<iostream>
using namespace std;

int main() {
    float num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    char op;
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op) {
        case '+':
            cout<<num1<<op<<num2<<" = "<<num1+num2;
            break;
        case '-':
            cout<<num1<<op<<num2<<" = "<<num1-num2;
            break;
        case '*':
            cout<<num1<<op<<num2<<" = "<<num1*num2;
            break;
        case '/':
            cout<<num1<<op<<num2<<" = "<<num1/num2;
            break;
        default:
            cout<<"Invalid operator.";
    }

    return 0;
}