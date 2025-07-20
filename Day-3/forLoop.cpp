#include<iostream>
using namespace std;

int main() {
   
    // Syntax for for loop -
//     for (initialization ; condition ; updation) {
//         loop body (C++ code);
//      }

    //Print 0 to 50-
    // for ( int n = 0 ; n <= 50 ; n++ ) {
    //     cout<<n<<endl;
    // }

    //Print 10 to 20-
    // int n;
    // cin>>n;
    // for ( int a=1 ; a <= n ; a++ ) {
    //     cout<<a+n<<endl;
    // }

  //Infinite loop -> Condition always true
    // for ( int n = 0 ; 5 < 10 ; n++ ) {
    //     cout<<n<<endl;
    // }


               // Table -
    int n;
    cin>>n;
    for ( int i=1 ; i < 11 ; i=i+1 ) {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }

    return 0;
}