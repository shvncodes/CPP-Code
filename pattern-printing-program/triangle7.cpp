#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        int x = i - 1;
        for(int k = 1; k <= x; k++) {
            cout<<" "<<" ";
        }
        for(int j = 1; j <= (n-x); j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}