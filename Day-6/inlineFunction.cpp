#include<iostream>
using namespace std;

inline int sum (int a, int b) {
    int c = a+b;
    return c;
}

int increase() {
    static int count = 0;
    count = count + 1;
    return count;
}

int main() {
    // int a, b;
    // cout<<"Enter the value of a and b: "<<endl;
    // cin>>a>>b;
    // cout<<"The sum of a and b is: "<<sum(a,b); 
    
    cout<<"increase A :"<<increase()<<endl;
    cout<<"increase B :"<<increase()<<endl;
    cout<<"increase B :"<<increase()<<endl;
    cout<<"increase B :"<<increase()<<endl;
    cout<<"increase B :"<<increase();

    return 0;
}