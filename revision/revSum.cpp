#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += i;
    }
    cout<<sum;

    return 0;
}