#include<iostream>
using namespace std;

int main() {
    long long int num;
    cout<<"Enter the number : ";
    cin>>num;

    if(num < 0) {
        cout<<"Invalid integer";
        return 0;
    }

    long long int i = 1;
    long long int fact = 1;
    while(i <= num) {
        fact = fact*i;
        // i = i+1; // i += 1
        i++;
    } 
    cout<<"The factorial of "<<num<<" is: "<<fact;

    return 0;
}