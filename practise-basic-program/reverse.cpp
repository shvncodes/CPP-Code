#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num < 0) {
        cout<<"Invalid integer value.";
        return 0;
    }

    int num2 = 0;

    while(num > 0) {
        int rem = num % 10;
        num2 = num2*10 + rem;
        num = num / 10;
    }

    cout<<num2;

    return 0;
}


// 5678

// newNum = 0
// newNum = newNum*10 + rem = 8


