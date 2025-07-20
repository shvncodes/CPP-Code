#include<iostream>
using namespace std;

int main() {
    float C;
    cout<<"Enter the temperature in celsius: "<<endl;
    cin>>C;
    float F = (C*9/5)+32;
    cout<<"The temperature in farenheit: "<<F;
    return 0;
}