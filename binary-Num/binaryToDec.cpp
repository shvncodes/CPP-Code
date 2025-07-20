#include<iostream>
using namespace std;

int binaryToDec(int binaryNum) {
    int ans = 0;
    int power = 1;  // (2^0)
    while(binaryNum > 0) {
        int rem = binaryNum % 10;
        binaryNum /= 10;
        ans += (rem*power);
        power *= 2;
    }
    return ans;
}

int main() {
    int binaryNum;

    cout<<binaryToDec(1100);

    return 0;
}