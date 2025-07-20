#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n < 2) {
        cout<<"Invalid number.";
        return 0;
    }

    int start = 2;
    while(start <= n) {
        // check if start is prime or not
        int count = 0;
        for(int i=2;i<=start;i++) {
            if(start%i == 0) {
                count++;
            }
        }

        if(count == 1) {
            cout<<start<<endl;
        }

        start++;
    }
   
    return 0;
}