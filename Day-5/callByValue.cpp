#include<iostream>
using namespace std;

int sum (int a, int b) {
    int c = a + b;
    return c;
}
 /*Idhar bs x and y ki value copy hogi 
          aur ye bs a and b ki value ko swap karega 
               isse x and y ko koi fark nhi padega.*/  
void swap (int a, int b) {           //This will not swap the value of a and b
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y= 10;
    cout<<"The sum of "<<x<<" and "<<y<<" is: "<<sum(x,y)<<endl;
    swap(x,y);   
    cout<<"The sum of "<<x<<" and "<<y<<" is: "<<sum(x,y);
    return 0;
}