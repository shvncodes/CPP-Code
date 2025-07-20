#include<iostream>
using namespace std;

struct Emp {
    int age;
    float salary;
};

int main() {

    Emp emp1;
    cout<<"Enter age: ";
    cin>>emp1.age;
    cout<<"Enter salary: ";
    cin>>emp1.salary;
    cout<<"Here the information of first Employee."<<endl;
    cout<< "Age: "<<emp1.age<<endl;
    cout<<"Salary: "<<emp1.salary<<endl<<endl;

    Emp emp2;
    cout<<"Enter age: ";
    cin>>emp2.age;
    cout<<"Enter salary: ";
    cin>>emp2.salary;
    cout<<"Here the information 0f second Employee."<<endl;
    cout<< "Age: "<<emp2.age<<endl;
    cout<<"Salary: "<<emp2.salary;

    return 0;
}