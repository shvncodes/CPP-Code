#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num < 0) {
        cout<<"Invalid number.";
        return 0;
    }

    for(int i = 1; i <= 10; i++) {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }

    return 0;
}