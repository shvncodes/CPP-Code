#include<iostream>
using namespace std;

int main() {
    // int a = 2;
    // int b = a+1;

    // if((a=3) == b) {
    //     cout<<a;
    // } else {
    //     cout<<a+1;
    // }

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    // int i = 1;
    // while(i <= n) {
    //     cout<<i<<endl;
    //     i++;
    // }

    // int i = 1, sum = 0;
    // while (i <= n) {
    //     sum += i;
    //     i++;
    // } 
    // cout<<"Sum of first "<<n<<" natural number: "<<sum;

    int i = 1, sum = 0;
    while(i <= n) {
        if(i % 2 == 0) {
            sum += i;
            i++;
        } else {
            i++;
        }
    }
    cout<<"Sum of all even numbers 1 to n: "<<sum; 

    // int i = 2;
    // while(i <= n) {
    //    if(n % i == 0) {
    //     cout<<"Not prime.";
    //    } else {
    //     cout<<"Not prime.";
    //    }
    //    i++;
    // }
    return 0;
}