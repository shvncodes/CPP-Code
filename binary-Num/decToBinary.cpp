#include<iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int power = 1; // (10^0)
    while(decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem*power);
        power *= 10; 
    }
    return ans;
}

int main() {
    int decNum;

    cout<<decToBinary(101);

    return 0;
}