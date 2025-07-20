#include<iostream>
using namespace std;

float exponent(int base, int power) {
    bool isPowerNegative = (power < 0);

    if(isPowerNegative) {
        power *= (-1) ;
    }

    float ans = 1;
    for(int i = 0; i < power; i++) {
        ans *= base;
    }

    if(isPowerNegative) {
        return (1/ans);
    }
    return ans;
}

int main() {
    int base, power;
    cout<<"Enter the base of exponent: ";
    cin>>base;
    cout<<"Enter the power of exponent: ";
    cin>>power;

    cout<<exponent(base, power);

    return 0;
}