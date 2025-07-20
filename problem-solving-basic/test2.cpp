#include<iostream>
using namespace std;

int isPower(int n) {
    for(int ans = 1; ans <= n;) {
        ans *= 2;
        if(ans == n) {
            return true;
        }
   }
   return false;
}

int main() {
    int n;
    cin>>n;
    cout<<isPower(n);
    return 0;
}