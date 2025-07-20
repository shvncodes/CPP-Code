#include<iostream>
using namespace std;

int main() {
    int n;
    int p;
    cout<<"Enter the base of the exponent: ";
    cin>>n;
    cout<<"Enter the power of the exponent: ";
    cin>>p;

    bool isPowNegative = p < 0;
    if(isPowNegative) {
        p = p*(-1);
    }

    int i = 1;
    float ans = 1;
    while(i <= p) {
        ans = ans*n;
        i++;
    }

    if(isPowNegative) {
        cout<<(1/ans);
    } else {
        cout<<ans<<endl;
    }

    return 0;
}
