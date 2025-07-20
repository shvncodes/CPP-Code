#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        int num = 0;
        for(int j = 1; j <= (n-i); j++) {
            cout<<" "<<" ";
        }
        int count = 1;
            for(int k =1; k <= i; k++) {
                cout<<count<<" ";
                count++;
            }
            for(int l = 1; l <= (i-1); l++) {
                cout<<(num+i-1)<<" ";
                num--;
            }
            (num++);
        cout<<endl;
    }

    return 0;
}