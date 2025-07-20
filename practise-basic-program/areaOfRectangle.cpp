#include<iostream>
using namespace std;

int main() {
    float length , breadth;
    cout<<"Enter the length and breadth of the rectangle: "<<endl;
    cin>>length>>breadth;
    float perimeter = 2*(length+breadth);
    cout<<"The perimeter of the rectangle is: "<<perimeter<<endl;
    float area = length*breadth ;
    cout<<"The area of the rectangle is: "<<area;
    return 0;
}