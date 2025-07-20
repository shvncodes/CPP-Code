#include<iostream>
using namespace std;

int main() {
    float kilometer;
    cout<<"Enter the distance in kilometers: "<<endl;
    cin>>kilometer;
    float miles = kilometer*0.621371;
    cout<<"Distance in miles: "<<miles; 
    return 0;
}