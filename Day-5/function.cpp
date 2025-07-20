#include<iostream>
using namespace std;

int mul (float a , float b) {
   float c = a*b;
   return c;
}
int main() {
    float num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The multiplication of "<<num1<<" and "<<num2<<" is: "<<mul(num1,num2);
    
    return 0;
}