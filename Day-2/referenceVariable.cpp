#include<iostream>
using namespace std;

int main()
{
    // Not in same same memory location
    int standard = 10;
    int cls = standard;
    
    cls = 9;
    cout<<standard<<endl;
    cout<<cls<<endl;

    //Point out same memory location
    int standard = 10;
    int &cls = standard;
    
    cls = 9;
    cout<<standard<<endl;
    cout<<cls<<endl;

    return 0;
}