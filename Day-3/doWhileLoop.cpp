#include<iostream>
using namespace std;

int main() {

          //Syntax for do while loop -

    // do {
    //     C++ Statement;

    // } while(condition);

 
         //True Condition -

    // int i=0;
    // do {
    //     cout<<i<<endl;
    //     i=i+1;
    // } while(i<10);


         //False Condition -

    //      int i=0;
    // do {
    //     cout<<i<<endl;
    //     i=i+1;
    // } while(false);
    
                   // Table -
    int n;
    cin>>n;
    int i=1;
    do {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i=i+1;
    } while(i<=10);
    return 0;
}