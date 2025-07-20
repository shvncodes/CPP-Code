#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a natural number : ";
    cin>>n;

    if(n < 1) {
        cout<<"Invalid integer value.";
        return 0;
    }
    
    for(int i = 1; i <= n; i++) {
        cout<<i<<endl;
    }

    return 0;
}