#include<iostream>
using namespace std;

int main() {
            // # 1st Output -
    // int a, b = 1;
    // a = 10;
    // if(++a) {
    //     cout<<b;
    // } else {
    //     cout<<(++b);
    // }

            //#  2nd Output -
    // int a = 1, b = 2;
    // if((a--) > 0 && (++b) > 2) {
    //     cout<<"Stage 1"<<endl;
    // } else {
    //     cout<<"Stage 2"<<endl;
    // }
    //  cout<<a<<" "<<b<<endl;

                // # 3rd Output -
    // int num = 3;
    // cout<<(25*(++num));

                // # 4th Output -
    int a = 1;
    int b = a++;
    int c = ++a;
    cout<<" a : "<<a<<endl;
    cout<<" b : "<<b<<endl;
    cout<<" c : "<<c<<endl;

    return 0;
}