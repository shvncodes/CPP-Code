#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the position : ";
    cin>>n;

    if(n < 1) {
        cout<<"Invalid number.";
        return 0;
    }

    int firstNum = 0;
    int secondNum = 1;
    int count = 0;

    cout<<firstNum<<endl;
    count++;
    while(count < n) {
        int nextNum = firstNum + secondNum;
        count++;
        cout<<secondNum<<endl;
        firstNum = secondNum;
        secondNum = nextNum;
    }

    return 0;
}