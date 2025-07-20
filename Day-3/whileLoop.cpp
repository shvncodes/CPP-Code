#include<iostream>
using namespace std;

int main() {
    //Syntax for while loop - 
    // while (condition) {
    //     C++ statements
    // }
    
              //Finite loop -
    // int i = 0;
    // while(i<=20) {
    //     cout<<i<<endl;
    //     i++;
    // }


    //Infinite loop -
    // int i = 0;
    // while(true) {
    //     cout<<i<<endl;
        // i++;
    // }


                 //Table -
    int n;
    cin>>n;
    int i=1;
    while(i < 11) {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i=i+1;
    }

    return 0;
}