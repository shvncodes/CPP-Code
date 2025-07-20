#include<iostream>
using namespace std;
int decToBinary(int positiveNum) {
    int ans = 0;
    int power = 1;
    while(positiveNum > 0) {
        int rem = positiveNum % 2;
        positiveNum /= 2;
        ans += (power*rem);
        power *= 10;
    }
    return ans;
}
// TODO: I will work on finding the binary of -ve no.
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int positiveNum = (n*(-1));

    decToBinary(positiveNum);

    return 0;
}