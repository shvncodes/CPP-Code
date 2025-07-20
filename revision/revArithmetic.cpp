#include<iostream>
using namespace std;

void arithmeticProgression(int a, int n, int d) {
    int nthTerm = (a + ((n-1)*d));

    cout<<a<<" ";
    for(int series = a; series != nthTerm;) {
       cout<<(series += d)<<" ";
    }
}

int main() {
    int a, n, d;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the nth number: ";
    cin>>n;
    cout<<"Enter the differnce between two number: ";
    cin>>d;

    if(n < 0) {
        cout<<"Invalid number.";
        return 0;
    }

    arithmeticProgression(a, n, d);
    return 0;
}