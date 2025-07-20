#include<iostream>
#include<stack>
using namespace std;

int main() {
// Stack :- Last in first out (LIFO)
    stack<int> s;
    stack<int> s2;
                // push:-
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

                // top:-
    cout<<"Top element of stack: "<<s.top()<<endl;

                // size:-
    cout<<"Size of the stack: "<<s.size()<<endl; 

                // empty & pop:-
    cout<<"Elements in stack: ";
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();     
    }
    cout<<endl;

                // swap:-
    s2.swap(s);
    cout<<"Size of the stack1: "<<s.size()<<endl;
    cout<<"Size of the stack2: "<<s2.size()<<endl;

           
    return 0;
}