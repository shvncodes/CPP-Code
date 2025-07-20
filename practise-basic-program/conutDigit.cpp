#include<iostream>
using namespace std;

int getTheCountOfDigits(int num) {
    if(num == 0) {
        return 1;
    }

    int count = 0; 
    
    while(num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if(num < 0) {
        cout<<"Invalid number.";
        return 0;
    }

    cout<<getTheCountOfDigits(num);

    return 0;
}