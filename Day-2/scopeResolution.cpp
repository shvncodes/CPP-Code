#include<iostream>
using namespace std;

int rollNo1 = 34;
int rollNo2 = 29;
int main()
{
    int rollNo1 = 20;
    int rollNo2 = 1;
    cout<<"My new roll number is "<<rollNo1<<endl<<"My friend new roll number is "<<rollNo2<<endl;
    // Same variable in local and global and we want global variable 
    cout<<"My old roll number is "<<::rollNo1<<endl<<"My friend old roll number is "<<::rollNo2<<endl;



    return 0;

}