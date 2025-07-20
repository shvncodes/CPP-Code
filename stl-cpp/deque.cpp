#include<iostream>
#include<deque>
using namespace std;

int main() {
/* Deque:- size, erase, clear, begin, rbegin, end, rend, insert, front, back. 
                                                        --> ye sabhi method hote hai same as vector.
            bs capacity nhi hota.
*/    
    deque<char> d = {'a','b','c','d'};   // Deque ----> Double Ended Queue
                     //push_back & push_front :-
    d.push_back('e');
    d.push_back('f');
    d.push_front('Z');
    d.push_front('Y');
    d.emplace_back('g');
    d.emplace_back('h');
    d.emplace_front('X');
    d.emplace_front('W');

    d.pop_back();
    d.pop_front();

    cout<<"Value at pop back element: "<<d[-1]<<endl;
    cout<<"Value at index 1: "<<d[1]<<endl;
    cout<<"Value at index 3: "<<d[3]<<endl;
    cout<<"Value at index 5: "<<d[5]<<endl;
    cout<<"Value at index 9: "<<d[9]<<endl;
    cout<<"Value at pop front element: "<<d[10]<<endl;
    
    cout<<"All elements in deque: ";
    for(char val : d) {
        cout<<val<<" ";
    }

    cout<<endl<<"Size of deque: "<<d.size()<<endl;

    return 0;
}