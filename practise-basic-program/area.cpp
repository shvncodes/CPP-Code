#include<iostream>
using namespace std;

int main() {
    float R;
    cout<<"The radius of the circle: "<<endl;
    cin>>R;
    float const PI = 3.1416;
    float area = PI*(R*R);
    cout<<"The area of the circle is: "<<area<<endl;
    float circumference = 2*PI*R;
    cout<<"The circumference of the circle is: "<<circumference;
    return 0;
}