#include<iostream>
using namespace std;

int main() {

    // int x = 21;
    // float a = 67.89;
    // int* y = &x;
    // float* b = &a;        
                                            // & --> (Address of) operator
    // cout<<"The address of x "<<&x<<endl;
    // cout<<"The address of x "<<y<<endl;
    // cout<<"The address of a "<<&a<<endl;
    // cout<<"The address of a "<<b<<endl;
                                         // * --> (value at that address) Dereference operator
    // cout<<"The value at address y "<<*y<<endl;
    // cout<<"The value at address b "<<*b<<endl;


                             // Pointers to pointers-
    // int** z = &y;
    // cout<<"The address of y "<<&y<<endl;
    // cout<<"The address of y "<<z<<endl;

    // cout<<"The value at address z "<<*z<<endl;
    // cout<<"The value at address (value_at z) "<<**z<<endl;


    // char name = 'A';
    // char* sec = &name;
    // char** school = &sec;
    // cout<<"The name is "<<name<<endl<<endl;

    // cout<<"The address of name is "<<sec<<endl;
    // cout<<"The address of name is "<<&name<<endl<<endl;

    // cout<<"The address of sec is "<<school<<endl;
    // cout<<"The address of sec is "<<&sec<<endl<<endl;

    // cout<<"The values at sec is "<<*sec<<endl;
    // cout<<"The value at school is "<<*school<<endl;
    // cout<<"The value at (value_at school) is "<<**school<<endl;


    int num = 10;
    int* ptr = &num;  // 'ptr' stores the address of 'num'

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr (address stored): " << ptr << endl;
    cout << "Value at address ptr is pointing to: " <<*ptr<< endl;
    
    return 0;
}