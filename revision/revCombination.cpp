#include<iostream>
using namespace std;

int nCr(int n, int r) {
    int x = 1;
    for(int i = 1; i <= n; i++) {
        x *= i;
    }
    int y = 1;
    for(int j = 1; j <= r; j++) {
        y *= j;
    }
    int z = 1;
    for(int k = 1; k <= (n-r); k++) {
        z *= k;
    }
    int ans = x/(y*z);
    return ans;
}

int main() {
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    cout<<nCr(n, r);
    return 0;
}