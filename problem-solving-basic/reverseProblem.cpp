#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    bool isNumNegative = (num < 0);

    if(isNumNegative) {
        num *= (-1);
    }

    int ans = 0;
    while(num > 0) {
        int rem = num % 10;
        num /= 10;
        ans = ((ans*10)+rem);
    }

    if(isNumNegative) {
        ans *= (-1);
    }

    cout<<ans;
    
    return 0;
}