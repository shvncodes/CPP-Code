#include<iostream>
using namespace std;

int sum (int a, int b) {
    int c = a + b;
    return c;
}
void swap (int* a, int* b) {   //This will also swap the value of a and b
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y= 10;
    // print address
    cout<<"The address "<<x<<" is "<<&x<<" and "<<y<<" is "<<&y<<endl;
    cout<<"The sum of "<<x<<" and "<<y<<" is: "<<sum(x,y)<<endl;
    swap(&x,&y);   
    cout<<"The sum of "<<x<<" and "<<y<<" is: "<<sum(x,y)<<endl;
    //print address
    cout<<"The address of "<<x<<" is "<<&x<<" and "<<y<<" is "<<&y<<endl;
    
    return 0;
}