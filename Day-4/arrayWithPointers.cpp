#include<iostream>
using namespace std;

int main() {
                                 // ADDRESS OF BLOCKS OF ARRAY (Do not use '&' here) -
                                 
    // int rollNo[] = {11,12,13,14,15};
    // int* x = rollNo;
    // cout<<"The address of rollNo[0] : "<<x<<endl;
    // cout<<"The address of rollNo[1] : "<<(x+1)<<endl;
    // cout<<"The address of rollNo[2] : "<<(x+2)<<endl;
    // cout<<"The address of rollNo[3] : "<<(x+3)<<endl;
    // cout<<"The address of rollNo[4] : "<<(x+4)<<endl<<endl;

                        // Or

    // int rollNo[] = {11,12,13,14,15};
    // cout<<"The address of rollNo[0] : "<<rollNo<<endl;
    // cout<<"The address of rollNo[1] : "<<(rollNo+1)<<endl;
    // cout<<"The address of rollNo[2] : "<<(rollNo+2)<<endl;
    // cout<<"The address of rollNo[3] : "<<(rollNo+3)<<endl;
    // cout<<"The address of rollNo[4] : "<<(rollNo+4)<<endl;


                                     // VALUES OF POINTER ADDRESS -
                                     
    // int rollNo[] = {21,31,41,51,61};
    // int* x = rollNo;
    // cout<<"The first roll number is "<<*x<<endl;
    // cout<<"The second roll number is "<<*(x+1)<<endl;
    // cout<<"The third roll number is "<<*(x+2)<<endl;
    // cout<<"The forth roll number is "<<*(x+3)<<endl;
    // cout<<"The fifth roll number is "<<*(x+4)<<endl;

    // cout<<*(x++)<<endl;  //(zero index ki print hogi) pointer one se increment next line mai hoga
    // cout<<*(++x)<<endl;  //Ye two se increment hoga (2nd index ki value print hogi)

                        // Or

    int rollNo[] = {21,31,41,51,61};
    cout<<"The first roll number is "<<*rollNo<<endl;
    cout<<"The second roll number is "<<*(rollNo+1)<<endl;
    cout<<"The third roll number is "<<*(rollNo+2)<<endl;
    cout<<"The forth roll number is "<<*(rollNo+3)<<endl;
    cout<<"The fifth roll number is "<<*(rollNo+4)<<endl;
    return 0;
}