#include<iostream>
using namespace std;

int isPrime(int n) {
    int i = 2;
    while(i < n) {
        if(n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(n < 2) {
        cout<<"Invalid number.";
        return 0;
    }

    cout<<isPrime(n);

    return 0;
}