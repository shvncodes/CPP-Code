#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Binary Number: ";
    cin>>n;

    if(n < 0) {
        cout<<"Invalid Number.";
        return 0;
    }

    int ans = 0;
    int power = 1;
    while(n > 0) {
        int rem = n % 10;
        n /= 10;
        ans += (power*rem);
        power *= 2;
    }
    cout<<ans;
    
    return 0;
}