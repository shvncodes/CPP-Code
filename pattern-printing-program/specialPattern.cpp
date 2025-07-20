#include<iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;

    if(n <= 0 || n%2 == 0 ) {
        cout<<"Invalid number.";
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        if(i == (n+1)/2) {
            for(int j = 1; j <= n; j++) {
                cout<<'*'<<" ";
            }
        } else {
        for(int j = 1; j <= n; j++) {
            if(j == (n+1)/2) {
                cout<<'*'<<" ";
            } else {
                cout<<"  ";
            }
        }
    }
        cout<<endl;
    }

    return 0;
}