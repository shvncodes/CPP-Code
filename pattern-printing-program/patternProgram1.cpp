#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
             // for same number of rows and columns -
    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n) {
            cout<<'*';
            j++;
        } 
        cout<<endl;
        i++;
    }


    return 0;
}