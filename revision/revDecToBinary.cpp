#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the Decimal Number: ";
    cin>>num;

    if(num < 0) {
        cout<<"Invalid number.";
        return 0;
    }

    int ans = 0;
    int power = 1;
    while(num > 0) {
        int rem = num % 2;
        num = num / 2;
        ans += (power*rem);
        power *= 10;
    }

    cout<<ans;

    return 0;
}