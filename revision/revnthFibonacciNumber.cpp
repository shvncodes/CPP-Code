#include<iostream>
using namespace std;

int nthFibonacciNumber(int n) {
    int count = 0;
    int num1 = 0;
    int num2 = 1;
    if(n == 1) {
        return 0;
    }
    while(count != n) {
        int nextNum = num1+num2;
        count++;
        num1 = num2;
        num2 = nextNum;
    }
    return num1;
}


int main() {
    int n;
    cin>>n;

    cout<<nthFibonacciNumber(n);
    return 0;
}