#include<iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout<<"Enter the two integers: "<<endl;
    cin>>a>>b;
    swap(a, b);
    cout<<"Swap of two integers: "<<a<<" "<<b;
    return 0;
}