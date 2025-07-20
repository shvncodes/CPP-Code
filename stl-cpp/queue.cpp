#include<iostream>
#include<queue>
using namespace std;

int main() {
// Queue :- First in first out (FIFO) 
    queue<int> q;
    queue<int> q2;
                // push:-
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

                // front:-
    cout<<"Front element of queue: "<<q.front()<<endl;

                // size:-
    cout<<"Size of the queue: "<<q.size()<<endl; 

                // empty & pop:-
    // cout<<"Elements in queue: ";
    // while(!q.empty()) {
    //     cout<<q.front()<<" ";
    //     q.pop();     
    // }
    cout<<endl;

                // swap:-
    q2.swap(q);
    cout<<"Size of the queue1: "<<q.size()<<endl;
    cout<<"Size of the queue2: "<<q2.size()<<endl;

    return 0;
}