#include<iostream>
using namespace std;

int decToBinary(int n) {
    int binaryNum = 0;
    int power = 1;
    while (n > 0) {
        int rem = n % 2;
        n /= 2;
        binaryNum += (rem * power);
        power *= 10;
    }
    return binaryNum;
}

int binaryToDec(int binaryNum) {
    int ans = 0;
    int power = 1;
    while (binaryNum > 0) {
        int rem = binaryNum % 10;
        binaryNum /= 10;
        ans += (rem * power);
        power *= 2;
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the decimal number: "; 
    cin>>n;

    // int binaryNum;
    // cout<<"Enter the binary number: "; 
    // cin>>binaryNum;

    int binaryNum = decToBinary(n);
        cout<<"A: "<<binaryNum<<endl;
        binaryNum = ~binaryNum;
        cout<<"B: "<<binaryNum<<endl;
        int ans = binaryToDec(binaryNum);
        cout<<"ANS: "<<ans<<endl;
    return 0;
}