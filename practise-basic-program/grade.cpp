#include<iostream>
using namespace std;

int main() {
    float percentage;
    cout<<"Enter the percentage: ";
    cin>>percentage;

    // validate percentage 
    if(percentage > 100 || percentage < 0) {
        cout<<"Invalid percentage.";
        return 0;
    } 

    if(percentage <= 100 && percentage >= 90) {
        cout<<"Grade: A";
    } else if(percentage < 90 && percentage >=80) {
        cout<<"Grade: B";
    } else if(percentage < 80 && percentage >=70) {
        cout<<"Grade: C";
    } else if(percentage < 70 && percentage >=60) {
        cout<<"Grade: D";
    } else {
        cout<<"Grade: F";
    }

    return 0;
}