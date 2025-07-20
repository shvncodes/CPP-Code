#include<iostream>
using namespace std;

float add(float a, float b) {
    float c = a + b;
    return c;
}

float sub(float a, float b) {
    float c = a - b;
    return c;
}

float mul(float a, float b) {
    float c = a * b;
    return c;
}

float div(float a, float b) {
    float c = a / b;
    return c;
}

int main() {
    float firstNum;
    float secondNum;
    cout<<"Enter the first number: ";
    cin>>firstNum;
    cout<<"Enter the second number: ";
    cin>>secondNum;

    cout<<"Addition of  "<<firstNum<<" and "<<secondNum<<" : "<<add(firstNum, secondNum)<<endl;
    cout<<"Subraction of  "<<firstNum<<" and "<<secondNum<<" : "<<sub(firstNum, secondNum)<<endl;
    cout<<"Multiplication of  "<<firstNum<<" and "<<secondNum<<" : "<<mul(firstNum, secondNum)<<endl;
    cout<<"Division of  "<<firstNum<<" and "<<secondNum<<" : "<<div(firstNum, secondNum)<<endl;

    return 0;
}