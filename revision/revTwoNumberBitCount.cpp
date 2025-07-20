#include<iostream>
using namespace std;

int decToBinary(int num) {
    int ans = 0;
    int power = 1;
    while(num > 0) {
        int rem = num % 2;
        num /= 2;
        ans += (rem*power);
        power *= 10;
    }
    return ans;
}

int totalSetBit(int num) {
    int x = decToBinary(num);
    int count = 0;
    while(x > 0) {
        if(x % 10 == 1) {
            count++;
        }
        x /= 10;
    }
    return count;
}

int main() {
    int num1, num2;
    cout<<"Enter two number : ";
    cin>>num1>>num2;

    cout<<totalSetBit(num1)<<endl;
    cout<<totalSetBit(num2)<<endl;
    cout<<(totalSetBit(num1)+totalSetBit(num2));
    return 0;
}