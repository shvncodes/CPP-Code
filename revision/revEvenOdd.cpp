#include<iostream>
using namespace std;

int isEvenOdd(int num) {
    if(num % 2 == 0) {
        return true;
    }
    return false;
}

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<num<<" is even or not : "<<isEvenOdd(num);
    return 0;
}