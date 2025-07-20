#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter the coefficient of x^2 : ";
    cin>>a;
    cout<<"Enter the coefficient of x : ";
    cin>>b;
    cout<<"Enter the constant : ";
    cin>>c;

    float D = ((b*b)-(4*a*c));
    float root1 = ((-b+sqrt(D))/(2*a));
    float root2 = ((-b-sqrt(D))/(2*a));
     
    if(D >= 0) {
        cout<<"The roots of given quadratic equation are: "<<root1<<" and "<<root2;
    } else {
        cout<<"The roots of given quadratic equation are complex.";
    }
    return 0;
}