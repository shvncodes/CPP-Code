#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        int count = 1;
        int x = (i-1);
        for(int j = 1; j <= (n-x); j++) {
            cout<<count<<" ";
            count++;
        }
        for(int k = 1; k <= x; k++) {
            cout<<'*'<<" ";
        }
        for (int l = 1; l <= x; l++) {
            cout<<'*'<<" ";
        }
        for(int m = 1; m <= (n-x); m++) {
            cout<<(n-m-i+2)<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}