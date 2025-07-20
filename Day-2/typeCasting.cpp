#include<iostream>
using namespace std;

int main()
{
    int rollNo = 97;
    float marks = 85.88;
    char grade = 'A';
    double amount = 99.99;
    bool areYouRight = true;

     // add two different data type -
    cout<<rollNo+marks<<endl;
    cout<<rollNo+amount<<endl; 
    cout<<rollNo+grade<<endl;
    cout<<rollNo+areYouRight<<endl;

    cout<<marks+grade<<endl;
    cout<<marks+amount<<endl;
    cout<<marks+areYouRight<<endl;

    cout<<grade+amount<<endl;
    cout<<grade+areYouRight<<endl;

    // int to other data type -
    cout<<"The roll number is "<<char(rollNo)<<endl;
    cout<<"The roll number is "<<float(rollNo)<<endl;
    cout<<"The roll number is "<<double(rollNo)<<endl;
    cout<<"The roll number is "<<bool(rollNo)<<endl;

     // float to other data type -
    cout<<"The marks is "<<char(marks)<<endl;
    cout<<"The marks is "<<int(marks)<<endl;
    cout<<"The marks is "<<double(marks)<<endl;
    cout<<"The marks is "<<bool(marks)<<endl;

     // char to other data type -
    cout<<"The grade is "<<int(grade)<<endl;
    cout<<"The grade is "<<float(grade)<<endl;
    cout<<"The grade is "<<double(grade)<<endl;
    cout<<"The grade is "<<bool(grade)<<endl;
    cout<<"The grade is "<<char(grade)<<endl;
    
     // bool to other data type -
    cout<<"The bool is "<<int(areYouRight)<<endl;
    cout<<"The bool is "<<float(areYouRight)<<endl;
    cout<<"The bool is "<<double(areYouRight)<<endl;
    cout<<"The bool is "<<char(areYouRight)<<endl;

    return 0;
}