#include<iostream>
using namespace std;

int main()
{

    int data; // define 

    float a = 12.5; // define and initialize 
    float b = 9.56f; // define the number
    float c = 7.3l; // define the number
    long double d = 32.5; 
    long double e = 8.3f; // define the number
    long double f = 43.34l; // define the number
    cout<<"The size of 12.5 is "<<sizeof(12.5)<<endl;
    cout<<"The size of 9.56f is "<<sizeof(9.56f)<<endl;
    cout<<"The size of 7.3l is "<<sizeof(7.3l)<<endl;
    cout<<"The size of 32.5 is "<<sizeof(32.5)<<endl;
    cout<<"The size of 8.3f is "<<sizeof(8.3f)<<endl;
    cout<<"The size of 43.34l is "<<sizeof(43.34l)<<endl;


    //Size of different data type -
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of long: " << sizeof(long) << " byte(s)" << endl;
    cout << "Size of long long: " << sizeof(long long) << " byte(s)" << endl;

    return 0;

}