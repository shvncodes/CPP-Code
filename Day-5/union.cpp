#include<iostream>
using namespace std;

union English {
    int marks;
    float percentage;
    char grade;
};
int main() {

    English std1;
    
    cout<<"Enter the marks: ";
    cin>>std1.marks;
    // cout<<"Enter the percentage: ";
    // cin>>std1.percentage;
    // cout<<"Enter the grade: ";
    // cin>>std1.grade;

    cout<<"English marks: "<<std1.marks<<endl;
    // cout<<"English percentage: "<<std1.percentage<<endl;
    // cout<<"English grade: "<<std1.grade<<endl;

    return 0;
}