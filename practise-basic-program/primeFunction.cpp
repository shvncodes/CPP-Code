#include<iostream>
using namespace std;

bool isPrime(int num) {
    int count = 0;
    for(int i = 2; i <= num; i++) {
       if(num % i == 0) {
            count++;
       }
    }

    if(count == 1) {
        return true;
    }

    return false;
}

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num < 2) {
        cout<<"Invalid number.";
        return 0;
    }

    cout<<isPrime(num);

    return 0;
}