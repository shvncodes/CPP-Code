#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
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
        cout<<secondNum<<endl;
        count++;
        firstNum = secondNum;
        secondNum = nextNum;
    }

    return 0;
}