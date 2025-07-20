#include<iostream>
using namespace std;

int main()
{
   const int rollNo = 19;
    cout<<"This roll number is fix now "<<rollNo<<endl;
    //rollNo = 25;   // We will get an error because the rollNo is constant
    cout<<"The roll number does not change "<<rollNo<<endl;

    return 0;
}
