#include<iostream>
using namespace std;

int numberOfBits(long long int num) {
    int count = 0;
    while(num > 0) {
        int rem = num % 10; 
        if(rem == 1) {
            count ++;
        }
        num = num / 10;
    }
    return count;
}

int main() {
    long long int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num < 0) {
        cout<<"Invalid number.";
        return 0;
    }

    cout<<numberOfBits(num);

    return 0;
}