#include<iostream>
using namespace std;
          // Function Prototype (Ye complier ko assure karta hai ki vo function code mai hai dhundho use )
    
          // type function_name (parameter_type parameter_name ...)

int sum (float a, float b);  // -------> Acceptable     
// int sum (float , float);  ------> Acceptable
// int sum (float a,b); -----> Not acceptable
// int sum (a , b); -----> Not acceptable

void shivani ();

int main() {
    float num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
          // num1 and num2 are actual parameters  
    cout<<"The sum of "<<num1<<" and "<<num2<<" is: "<<sum(num1,num2);

    shivani();
      return 0;
}
          // a and b are formal parameters   
int sum (float a , float b) {
    float c = a+b;
    return c;
}
          // Void function
void shivani() {
    cout<<"\nHii Shivani";
}