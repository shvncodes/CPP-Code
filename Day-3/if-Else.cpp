#include<iostream>
using namespace std;

int main() {

    // FIRST WAY TO IMPLEMENT SELECTION STRUCTURE IN PROGRAM - IF-ELSE//


                    
      // if-else statement :-
    int age;
    cout<<"Tell me your age : ";cin>>age;
    if (age<18 && age>0) {
        cout<<"You are not capable for voting."<<endl;
    } else {
        cout<<"You are capable for voting."<<endl;
    }


              //if-else ladder :-
    // float percentage;
    // cout<<"Enter your percentage :";cin>>percentage;
    // if (percentage>90) {
    //     cout<<"Outsanding!! You get A+ grade.";
    // }
    // else if (percentage>80) {
    //     cout<<"Excellent!! You get A grade.";
    // }
    // else if (percentage>70) {
    //     cout<<"Very Good!! You get B+ grade.";
    // }
    // else if (percentage>60) {
    //     cout<<"Good!! You get B grade.";
    // }
    // else if (percentage>50) {
    //     cout<<"Nice!! You get C grade.";
    // } else {
    //     cout<<"You need to improve!! You get D grade.";
    // }

       // if-else staement-
    // int a; cin>>a;
    // int b; cin>>b;

    // if(a > b) {
    //     cout<<a<<" is greater than "<<b;
    // } else if (a < b){
    //     cout<<b<<" is greater than "<<a;
    // } else {
    //     cout<<"Both are equal";
    // }
    


    return 0;
}