#include<iostream>
#include<iomanip>  // This header use for manipulator
using namespace std;

int main()
{
    int rollNo = 19;
    float marks = 89.9;
    cout<<"The roll number is "<<setw(5)<<rollNo<<endl;
    cout<<"The marks is "<<setw(5)<<marks<<endl;

    //Width < given number,characteror string hui to vo ise neglect kar dega aur simple output dega
    cout<<"The roll number is "<<setw(1)<<rollNo<<endl;
    cout<<"The marks is "<<setw(1)<<marks<<endl;
    return 0;
}