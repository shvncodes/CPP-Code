#include<iostream>
using namespace std;

int exponentFunction(int base, int power) {
    bool isPowerNegative = power < 0;

    if(isPowerNegative) {
        power *= (-1);
    }
    
    int i = 1;
    float ans = 1;
    while(i <= power) {
        ans *= base;
        i++;
    }
    
    if(isPowerNegative) {
        ans = 1 / ans;
    }
    
    return ans;
}

int main() {
    int base;
    int power;
    cout<<"Enter the base of the exponent: ";
    cin>>base;
    cout<<"Enter the power of exponent: ";
    cin>>power;

    cout<<exponentFunction(base, power);
    
    return 0;
}