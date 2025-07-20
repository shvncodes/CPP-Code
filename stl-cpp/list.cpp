#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main() {
/* List:- size, erase, clear, begin, rbegin, end, rend, insert, front, back. 
                                                        --> ye sabhi method hote hai same as vector.
            bs capacity nhi hota.
*/
    list<int> l = {1,2,3,4,5};       // List ---> Doubly linked list
                    //push_back & push_front :-
    l.push_back(6);
    l.push_back(7);
    l.push_front(0);
    l.push_front(-1);
    l.emplace_back(8);
    l.emplace_back(9);
    l.emplace_front(-2);
    l.emplace_front(-3);

    l.pop_back();
    l.pop_front();
    
    cout<<"All elements in list: ";
    for(int i : l) {
        cout<<i<<" ";
    }

    cout<<endl<<"Size of list: "<<l.size()<<endl;

    return 0;
}