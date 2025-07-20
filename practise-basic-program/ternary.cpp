#include<iostream>
using namespace std;

int main() {
    float num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

   float minimum = num1 > num2 ? num2 : num1;   // Ternary Operator - # Condition ? true_ : false_ ;
   cout<<"The minimum number is "<<minimum;
    return 0;
}