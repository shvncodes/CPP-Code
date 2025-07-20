#include<iostream>
using namespace std;

int main() {
    long int num;
    cout<<"Enter the number : ";
    cin>>num;

    if(num < 0) {
        cout<<"Invalid integer value.";
        return 0;
    }

    int sum = 0;
    
    while(num > 0) {
        int rem = num % 10;
        sum += rem;
        num = num / 10;
    }

    cout<<sum;

    return 0;
}