#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            ch = (('A'+(n-1))-i+j);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}